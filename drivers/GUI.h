#define START_FLOOR  "FLOOR"
#define START_RAMP "RAMP"
string startPosition;

task printf()
{
	while(true)
	{
	clearDebugStream();
	writeDebugStreamLine("startPosition: %s", startPosition);
	writeDebugStreamLine("GoalPosition: %i", GoalPosition);
	delay(100);
	clearDebugStream();
	}
}
void getUserInput()
{
  nxtDisplayCenteredTextLine(1, "FLOOR or RAMP?");
  nxtDisplayCenteredTextLine(7, "FLOOR RAMP");
  while(true)
  {
    if(nNxtButtonPressed == 2)
    {
      startPosition = START_FLOOR;
      nxtDisplayCenteredTextLine(1, "FLOOR");
      nxtDisplayCenteredTextLine(7, "");
      break;
    }
    else if(nNxtButtonPressed == 1)
    {
      startPosition = START_RAMP;
      nxtDisplayCenteredTextLine(1, "RAMP");
      nxtDisplayCenteredTextLine(7, "");
      break;
    }
  }
  playSound(soundFastUpwardTones);
  wait10Msec(200);
  //bDisplayDiagnostics = false;
	nxtDisplayCenteredTextLine(0, "%s", startPosition);
}
