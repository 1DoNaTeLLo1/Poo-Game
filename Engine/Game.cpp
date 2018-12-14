/******************************************************************************************
 *	Chili DirectX Framework Version 16.07.20											  *
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/

#include "Game.h"

Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd),
	rn(rd()),
	xDist(0, 770),
	yDist(0, 570),
	vxDist(-2.5f * 60.0f, 2.5f * 60.0f),
	vyDist(-2.5f * 60.0f, 2.5f * 60.0f)
{
	for (int i = 0; i < size; i++)
	{
		poo[i].Init(float(xDist(rn)), float(yDist(rn)), vxDist(rn), vyDist(rn));
	}

	bait.Init(rn, xDist, yDist);
}

void Game::Go()
{
	gfx.BeginFrame();
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	const float dt = frametimer.Mark();

	if (showTitle)
	{
		showTitle = !wnd.kbd.KeyIsPressed(VK_RETURN);
	}

	face.Update(wnd,dt);
	face.BorderTest();

	if (bait.CollusionTest(face))
	{
		bait.Init(rn, xDist, yDist);

		score.IncreaseScore();
	}

	bait.Update();

	for (int i = 0; i < size; i++)
	{
		poo[i].Update(dt);
		poo[i].CollusionTest(face);

		if (poo[i].IsEaten())
		{
			gameOver = true;
		}
	}

	if (wnd.kbd.KeyIsPressed(VK_ESCAPE))
	{
		exit(0);
	}
}

void Game::ComposeFrame()
{
	if (showTitle)
	{
		SpriteCodex::DrawTitle(100, 100, gfx);
	}
	else if (!gameOver)
	{
		face.Draw(gfx);

		for (int i = 0; i < size; i++)
		{
			poo[i].Draw(gfx);
		}

		bait.Draw(gfx);
		score.Draw(gfx);
	}
	else
	{
		SpriteCodex::DrawGO(350, 250, gfx);
	}
}
