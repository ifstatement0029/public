bool positionUpdated = false;

//Left
if (xDir == -1) {
	params.direction = directionEnum::left;
	params.position.x -= params.move.pixelIncrement;

	collisionDataStruct collisionData = checkCollisionWithOverworldGridFactoringHeight(getGridAreaFromPixelArea({ params.position.x, params.position.y + (params.size.h / 2), params.size.w, params.size.h / 2 }), { -1, -1, -1 -1 }, params.layer, params.jump.currentHeight);
	if (collisionData.collision == true || checkCollisionWithCollidableObjectFactoringHeight(getGridAreaFromPixelArea({ params.position.x, params.position.y + (params.size.h / 2), params.size.w, params.size.h / 2 }), params.layer, params.jump.currentHeight) == true) {
		/*XYStruct tilePixelPosition = { collisionData.collidePosition.x * tileSize.w, collisionData.collidePosition.y * tileSize.h };
		params.position.x = tilePixelPosition.x + tileSize.w;*/
		params.position.x += params.move.pixelIncrement;
	}

	positionUpdated = true;
}

//Right
if (xDir == 1) {
	params.direction = directionEnum::right;
	params.position.x += params.move.pixelIncrement;

	collisionDataStruct collisionData = checkCollisionWithOverworldGridFactoringHeight(getGridAreaFromPixelArea({ params.position.x, params.position.y + (params.size.h / 2), params.size.w, params.size.h / 2 }), { -1, -1, -1 - 1 }, params.layer, params.jump.currentHeight);
	if (collisionData.collision == true || checkCollisionWithCollidableObjectFactoringHeight(getGridAreaFromPixelArea({ params.position.x, params.position.y + (params.size.h / 2), params.size.w, params.size.h / 2 }), params.layer, params.jump.currentHeight) == true) {
		/*XYStruct tilePixelPosition = { collisionData.collidePosition.x * tileSize.w, collisionData.collidePosition.y * tileSize.h };
		params.position.x = tilePixelPosition.x - params.size.w;*/
		params.position.x -= params.move.pixelIncrement;
	}

	positionUpdated = true;
}

//Up
if (yDir == -1) {
	params.direction = directionEnum::up;
	params.position.y -= params.move.pixelIncrement;
	
	collisionDataStruct collisionData = checkCollisionWithOverworldGridFactoringHeight(getGridAreaFromPixelArea({ params.position.x, params.position.y + (params.size.h / 2), params.size.w, params.size.h / 2 }), { -1, -1, -1 - 1 }, params.layer, params.jump.currentHeight);
	if (collisionData.collision == true || checkCollisionWithCollidableObjectFactoringHeight(getGridAreaFromPixelArea({ params.position.x, params.position.y + (params.size.h / 2), params.size.w, params.size.h / 2 }), params.layer, params.jump.currentHeight) == true) {
		/*XYStruct tilePixelPosition = { collisionData.collidePosition.x * tileSize.w, collisionData.collidePosition.y * tileSize.h };
		params.position.y = tilePixelPosition.y + tileSize.h;*/
		params.position.y += params.move.pixelIncrement;
	}

	positionUpdated = true;
}

//Down
if (yDir == 1) {
	params.direction = directionEnum::down;
	params.position.y += params.move.pixelIncrement;
	
	collisionDataStruct collisionData = checkCollisionWithOverworldGridFactoringHeight(getGridAreaFromPixelArea({ params.position.x, params.position.y + (params.size.h / 2), params.size.w, params.size.h / 2 }), { -1, -1, -1 - 1 }, params.layer, params.jump.currentHeight);
	if (collisionData.collision == true || checkCollisionWithCollidableObjectFactoringHeight(getGridAreaFromPixelArea({ params.position.x, params.position.y + (params.size.h / 2), params.size.w, params.size.h / 2 }), params.layer, params.jump.currentHeight) == true) {
		/*XYStruct tilePixelPosition = { collisionData.collidePosition.x * tileSize.w, collisionData.collidePosition.y * tileSize.h };
		params.position.y = tilePixelPosition.y - params.size.h;*/
		params.position.y -= params.move.pixelIncrement;
	}

	positionUpdated = true;
}