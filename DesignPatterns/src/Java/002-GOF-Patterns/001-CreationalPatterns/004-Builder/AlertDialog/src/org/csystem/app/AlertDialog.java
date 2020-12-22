package org.csystem.app;

public class AlertDialog {
    private String m_title;
    private String m_message;
    private AlertDialogIcon m_icon;
    private AlertDialogButton m_button;

    private AlertDialog()
    {
        m_title = "";
        m_message = "";
        m_icon = AlertDialogIcon.NONE;
        m_button = AlertDialogButton.OK;
    }

    public static class Builder {
        private final AlertDialog m_dlg = new AlertDialog();

        public Builder setTitle(String title)
        {
            m_dlg.m_title = title;

            return this;
        }

        public Builder setMessage(String message)
        {
            m_dlg.m_message = message;

            return this;
        }

        public Builder setIcon(AlertDialogIcon icon)
        {
            m_dlg.m_icon = icon;

            return this;
        }

        public Builder setButton(AlertDialogButton button)
        {
            m_dlg.m_button = button;

            return this;
        }

        public AlertDialog build()
        {
            return m_dlg;
        }
    }

    public void show()
    {
        System.out.printf("%s", m_title.isEmpty() ? "" : "Title:" + m_title + "\n");
        System.out.printf("%s", m_message.isEmpty() ? "" : "Message:" + m_message  + "\n");
        System.out.printf("%s", m_icon == AlertDialogIcon.NONE ? "" : "Icon:" + m_icon  + "\n");
        System.out.printf("%s", m_button == AlertDialogButton.NONE ? "" : "Button:" + m_button + "\n");
    }

}
