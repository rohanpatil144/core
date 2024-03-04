public static void printMenu(Map<Integer, String> menu, String meal) {
        System.out.println(meal + " Menu:");
        for (Map.Entry<Integer, String> item : menu.entrySet()) {
            System.out.println(item.getKey() + ". " + item.getValue() + " - $" + priceList.get(item.getValue()));
        }
        System.out.println();
    }
