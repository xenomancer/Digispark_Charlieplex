/**
 * Testing out the Charlieplex
 */

#include "Digispark_Charlieplex.h"
#include "LetterDisplay.h"

state currentState;
long nextStateChangeTime;

void setup()
{
  currentState = STATE_A;
  nextStateChangeTime = millis() + DELAY;
}

// the loop routine runs over and over again forever:
void loop()
{
  long currentMillis = millis();
  
  if (currentMillis > nextStateChangeTime)
  {
    currentState = nextState(currentState);
    nextStateChangeTime = currentMillis + DELAY;
  }
  
  showLetterForState(currentState);
}

state nextState(state current)
{
  return (current + 1) % NUM_STATES; 
}

void showLetterForState(state current)
{
  switch (current)
  {
    case STATE_A: FORKYOUR_showA_MF(); break;
    case STATE_B: FORKYOUR_showB_MF(); break;
    case STATE_C: FORKYOUR_showC_MF(); break;
    case STATE_D: FORKYOUR_showD_MF(); break;
    case STATE_E: FORKYOUR_showE_MF(); break;
    case STATE_F: FORKYOUR_showF_MF(); break;
    case STATE_G: FORKYOUR_showG_MF(); break;
    case STATE_H: FORKYOUR_showH_MF(); break;
    case STATE_I: FORKYOUR_showI_MF(); break;
    case STATE_J: FORKYOUR_showJ_MF(); break;
    case STATE_K: FORKYOUR_showK_MF(); break;
    case STATE_L: FORKYOUR_showL_MF(); break;
    case STATE_M: FORKYOUR_showM_MF(); break;
    case STATE_N: FORKYOUR_showN_MF(); break;
    case STATE_O: FORKYOUR_showO_MF(); break;
    case STATE_P: FORKYOUR_showP_MF(); break;
    case STATE_Q: FORKYOUR_showQ_MF(); break;
    case STATE_R: FORKYOUR_showR_MF(); break;
    case STATE_S: FORKYOUR_showS_MF(); break;
    case STATE_T: FORKYOUR_showT_MF(); break;
    case STATE_U: FORKYOUR_showU_MF(); break;
    case STATE_V: FORKYOUR_showV_MF(); break;
    case STATE_W: FORKYOUR_showW_MF(); break;
    case STATE_X: FORKYOUR_showX_MF(); break;
    case STATE_Y: FORKYOUR_showY_MF(); break;
    case STATE_Z: FORKYOUR_showZ_MF(); break;
    default:      FORKYOUR_allOn_MF(); break;
  }
}


