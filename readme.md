BeanJarManager
==============

Introduction
------------

MyBeanJar (MBJ) is a mobile commerce/game reward platform that
distributes targeted digital coupons for game achievements. These
rewards are redeemed straight from the MBJ mobile wallet, which prompts
redemption via location-alerts, sharing, social networking, and a
real-time leaderboard.

For more information about MyBeanJar, visit
[mybeanjar.com](http://mybeanjar.com "MyBeanJar Site").

Implementing SDK (BeanJarManager Framework)
-------------------------------------------

### AppKeys, Usernames, and Passwords ###
MBJ recommends storing AppKeys in a global variable within your
application.  MBJ Usernames and Passwords should be stored along with
your application's user model.

### API Requests ###
All MBJ requests use the MBJRequest class to wrap all requests to our
API server.  This makes for a simpler implementation for developers.

### Models ###
* App
* Award
* Bean
* Category
* Sponsor
* SponsorLocation
* User as Winner

MBJ Requests
------------

All data requests should be passed through the MBJRequest class.  

### Apps ###

#### Get Apps ####
This method works in the background.

Message Parameters

* appsInBackgroundWithUsername: username
* password
* limit
* block

### User & Authentication ###

#### Register User ####
This method works in the background.

Message Parameters

* registerUserInBackgroundWithUsername: username
* password
* email
* zipCode
* categories (3 required)
* block

#### Authenticate User ####
This method works in the background.

Message Parameters

* authenticateUserInBackgroundWithUsername: username
* password
* block

#### Validate User ####
This method works in the background.

Message Parameters
* validateUserInBackgroundWithUsername: username
* block

#### Send Password ####
This method works in the background.

Message Parameters
* sendPasswordInBackgroundWithUsername: username
* block

### Winners ###

#### Get Winners ####
This method works in the background.

Message Parameters

* winnersInBackgroundWithLimit: username
* password
* limit
* block

### Sponsors ###

#### Get Sponsors for User ####
This method works in the background.

Message Parameters
* sponsorsInBackgroundWithUsername: username
* password
* limit
* block

### SponsorLocations ###

#### Get Locations for Sponsor ####
This method works in the background.

Message Parameters

* sponsorLocationsInBackgroundWithUsername: username
* password
* sponsorKey
* block

### Beans ###

#### Get Beans for User (in background) ####
This method works in the background.

Message Parameters

* beansInBackgroundWithUsername: username
* password
* limit
* block

#### Delete Bean for User ####
This method works in the background.

Message Parameters

* deleteBeanInBackgroundWithUsername: username
* password
* beanKey
* block

#### Redeem Bean for User ####
This method works in the background.

Message Parameters

* redeemBeanInBackgroundWithUsername: username
* password
* beanKey
* block

### Categories ###

#### Get Categories (in background) ####
This method works in the background.

Message Parameters

* categoriesInBackgroundWithUsername: username
* password
* limit
* block

### Awards ###

#### Get Awards for User ####
This method works in the background.

Message Parameters

* awardInBackgroundWithUsername: username
* appKey
* block

