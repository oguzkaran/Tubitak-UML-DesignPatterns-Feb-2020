package org.csystem.app;

public class Context {
    private IState m_state;
    //...
    public Context(IState state)
    {
        m_state = state;
    }

    public Context()
    {
        m_state = new NoState();
    }

    public IState getState()
    {
        return m_state;
    }

    public void setState(IState state)
    {
        m_state = state;
    }
}
