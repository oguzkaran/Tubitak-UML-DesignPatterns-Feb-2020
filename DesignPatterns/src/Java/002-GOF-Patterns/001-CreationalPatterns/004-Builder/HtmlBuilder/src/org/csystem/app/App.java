package org.csystem.app;

public class App {
    public static void main(String[] args)
    {
        Html.Builder headBuilder = new Html.Builder();

        headBuilder.setTag("head");
        headBuilder.setValue("title");

        Html head = headBuilder.build();

        System.out.println(head);

        System.out.println("*************");

        Html.Builder paragBuilder = new Html.Builder();

        paragBuilder.setTag("p");
        paragBuilder.addAttribute("class", "new-class");
        paragBuilder.addAttribute("id", "parag-text");

        Html parag = paragBuilder.build();

        System.out.println(parag);

    }
}
