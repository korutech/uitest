Feature: 
  As an iOS developer
  I want to have a sample feature file
  So I can see what my next step is in the wonderful world of Frank/Cucumber testing

Scenario: 
Given I launch the app
When my credentials are invalid
When I choose to correct my credentials
Then I should see "Settings"

When I navigate backwards
Then I should see "Edit"