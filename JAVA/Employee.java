
package JAVA;

public class Employee {
    String emp_name, emp_id, address, mail_id, mobile_no;

    // Constructor for Employee class
    public Employee(String emp_name, String emp_id, String address, String mail_id, String mobile_no) {
        this.emp_name = emp_name;
        this.emp_id = emp_id;
        this.address = address;
        this.mail_id = mail_id;
        this.mobile_no = mobile_no;
    }

    // Display method to print employee details
    public void display() {
        System.out.println("Employee Name: " + emp_name);
        System.out.println("Employee ID: " + emp_id);
        System.out.println("Address: " + address);
        System.out.println("Mail ID: " + mail_id);
        System.out.println("Mobile No: " + mobile_no);
    }
}

class Programmer extends Employee {
    double basicPay;

    // Constructor for Programmer class
    public Programmer(String emp_name, String emp_id, String address, String mail_id, String mobile_no,
                      double basicPay) {
        super(emp_name, emp_id, address, mail_id, mobile_no);
        this.basicPay = basicPay;
    }

    // Calculate and display pay slip for Programmer
    public void generatePaySlip() {
        double da = 0.97 * basicPay;
        double hra = 0.1 * basicPay;
        double pf = 0.12 * basicPay;
        double staffClubFund = 0.001 * basicPay;

        double grossSalary = basicPay + da + hra;
        double netSalary = grossSalary - pf - staffClubFund;

        display(); // Display employee details
        System.out.println("Basic Pay: " + basicPay);
        System.out.println("DA: " + da);
        System.out.println("HRA: " + hra);
        System.out.println("PF: " + pf);
        System.out.println("Staff Club Fund: " + staffClubFund);
        System.out.println("Gross Salary: " + grossSalary);
        System.out.println("Net Salary: " + netSalary);
    }
}

class TeamLead extends Employee {
    double basicPay;

    // Constructor for TeamLead class
    public TeamLead(String emp_name, String emp_id, String address, String mail_id, String mobile_no,
                    double basicPay) {
        super(emp_name, emp_id, address, mail_id, mobile_no);
        this.basicPay = basicPay;
    }

    // Calculate and display pay slip for TeamLead
    public void generatePaySlip() {
        double da = 0.97 * basicPay;
        double hra = 0.1 * basicPay;
        double pf = 0.12 * basicPay;
        double staffClubFund = 0.001 * basicPay;

        double grossSalary = basicPay + da + hra;
        double netSalary = grossSalary - pf - staffClubFund;

        display(); // Display employee details
        System.out.println("Basic Pay: " + basicPay);
        System.out.println("DA: " + da);
        System.out.println("HRA: " + hra);
        System.out.println("PF: " + pf);
        System.out.println("Staff Club Fund: " + staffClubFund);
        System.out.println("Gross Salary: " + grossSalary);
        System.out.println("Net Salary: " + netSalary);
    }
}

class AssistantProjectManager extends Employee {
    double basicPay;

    // Constructor for AssistantProjectManager class
    public AssistantProjectManager(String emp_name, String emp_id, String address, String mail_id, String mobile_no,
                                    double basicPay) {
        super(emp_name, emp_id, address, mail_id, mobile_no);
        this.basicPay = basicPay;
    }

    // Calculate and display pay slip for AssistantProjectManager
    public void generatePaySlip() {
        double da = 0.97 * basicPay;
        double hra = 0.1 * basicPay;
        double pf = 0.12 * basicPay;
        double staffClubFund = 0.001 * basicPay;

        double grossSalary = basicPay + da + hra;
        double netSalary = grossSalary - pf - staffClubFund;

        display(); // Display employee details
        System.out.println("Basic Pay: " + basicPay);
        System.out.println("DA: " + da);
        System.out.println("HRA: " + hra);
        System.out.println("PF: " + pf);
        System.out.println("Staff Club Fund: " + staffClubFund);
        System.out.println("Gross Salary: " + grossSalary);
        System.out.println("Net Salary: " + netSalary);
    }
}

class ProjectManager extends Employee {
    double basicPay;

    // Constructor for ProjectManager class
    public ProjectManager(String emp_name, String emp_id, String address, String mail_id, String mobile_no,
                          double basicPay) {
        super(emp_name, emp_id, address, mail_id, mobile_no);
        this.basicPay = basicPay;
    }

    // Calculate and display pay slip for ProjectManager
    public void generatePaySlip() {
        double da = 0.97 * basicPay;
        double hra = 0.1 * basicPay;
        double pf = 0.12 * basicPay;
        double staffClubFund = 0.001 * basicPay;

        double grossSalary = basicPay + da + hra;
        double netSalary = grossSalary - pf - staffClubFund;

        display(); // Display employee details
        System.out.println("Basic Pay: " + basicPay);
        System.out.println("DA: " + da);
        System.out.println("HRA: " + hra);
        System.out.println("PF: " + pf);
        System.out.println("Staff Club Fund: " + staffClubFund);
        System.out.println("Gross Salary: " + grossSalary);
        System.out.println("Net Salary: " + netSalary);
    }
}

class Main {
    public static void main(String[] args) {
        // Example usage
        Programmer programmer = new Programmer("John Doe", "P001", "123 Main St", "john@example.com", "1234567890", 50000);
        programmer.generatePaySlip();

        TeamLead teamLead = new TeamLead("Jane Smith", "TL001", "456 Oak St", "jane@example.com", "9876543210", 60000);
        teamLead.generatePaySlip();

        AssistantProjectManager apm = new AssistantProjectManager("Bob Johnson", "APM001", "789 Pine St", "bob@example.com", "5555555555", 70000);
        apm.generatePaySlip();

        ProjectManager projectManager = new ProjectManager("Alice Williams", "PM001", "101 Maple St", "alice@example.com", "1231231234", 80000);
        projectManager.generatePaySlip();
    }
}
