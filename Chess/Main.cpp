#include <iostream>
#include <vector>
#include <string>

#include "functions.h"
#include "Background.h"
#include "Piece.h"

using namespace std;

int main()
{

	Background chessGround;


	bool finish = false;
	do
	{

		Player* person = chessGround.getPlayer();

		pair<char, int> startPosition = getStartPosition();

		chessGround.setPiece(startPosition);

		Piece* currentPiece = chessGround.getPiece(chessGround.getBoardContent().second);

		currentPiece->getScope(startPosition);

		getFinishPosition();

		

		currentPiece->checkMovePossibility(chessGround.getBoardContent()); 


	if (finish)
		person -> finish();


	delete person;
	delete currentPiece;
	} while (!finish);
}
	