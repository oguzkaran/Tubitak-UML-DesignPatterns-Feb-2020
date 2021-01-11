
#ifndef CHATCONTROLLER_H
#define CHATCONTROLLER_H

#include <string>

/**
  * class ChatController
  * 
  */

class ChatController
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  ChatController ();

  /**
   * Empty Destructor
   */
  virtual ~ChatController ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @return bool
   * @param  srcClient
   * @param  targetClient
   * @param  message
   */
  static bool sendMessage (ClientInfo srcClient, ClientInfo targetClient, CSD::MessageInfo message)
  {
  }


  /**
   * @return bool
   * @param  srcClient
   * @param  targetClient
   * @param  msg
   */
  bool receiveMessageInfo (ClientInfo srcClient, ClientInfo targetClient, MesageInfo msg)
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  

private:



};

#endif // CHATCONTROLLER_H
