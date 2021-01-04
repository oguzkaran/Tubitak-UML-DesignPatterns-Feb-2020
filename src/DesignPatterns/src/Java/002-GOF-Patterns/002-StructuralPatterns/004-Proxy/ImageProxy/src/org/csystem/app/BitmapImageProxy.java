package org.csystem.app;

public class BitmapImageProxy implements IImage {
    private BitmapImage m_bitmapImage;

    private BitmapImage findById(int id)
    {
        String str = "manzara.jpg";

        return new BitmapImage(str);
    }

    public BitmapImageProxy(int id)
    {
        m_bitmapImage = findById(id);
    }

    @Override
    public void show()
    {
        m_bitmapImage.show();
    }
}
