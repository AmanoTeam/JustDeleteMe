#if !defined(WEBSITE_ENTRIES_H)
#define WEBSITE_ENTRIES_H

#include "we.h"

static const we_t WEBSITE_ENTRIES[] = {
		{
		.name = "/e/",
		.query = "e",
		.url = "https://doc.e.foundation/create-an-ecloud-account#how-can-i-delete-my-e-account-eemail",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Profile -> settings -> delete account -> confirm"
	},
	{
		.name = "123RF",
		.query = "123rf",
		.url = "https://www.123rf.com/support/support-answer.php?id=8817",
		.email = "mailto:frsales@123rf.com?body=I%20want%20my%20account%20to%20be%20deleted.%20My%20full%20name%20is%20XXXXXX%20and%20my%20user%20name%20is%20XXXXXX%2C%20I%20want%20my%20account%20to%20be%20deleted%20because%20of%20XXXXXX.%20I%20request%20and%20authorize%20you%20to%20remove%20my%20profile%20from%20123rf.com%20and%20delete%20all%20my%20content%20with%20you.%20I%20wish%20to%20terminate%20the%20123RF%20Contributor%20Agreement%20and%20agree%20to%20the%20Terms%20and%20Conditions%20as%20set%20in%20the%20Contributor%20Agreement%20for%20the%20termination%20process.",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "16Personalities",
		.query = "16personalities",
		.url = "https://www.16personalities.com/profile/preferences",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In your profile preferences, click in 'Delete Account' then confirm."
	},
	{
		.name = "17TRACK",
		.query = "17track",
		.url = "https://help.17track.net/hc/en-us/articles/360061466432-How-to-cancel-my-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to send them a message on their website to delete your account."
	},
	{
		.name = "1984 Hosting",
		.query = "1984 hosting",
		.url = "https://1984.hosting/accounts/settings/",
		.email = "mailto:gdpr@1984.is",
		.difficulty = 0x400,
		.notes = "Scroll down and click 'Forget all about me' and confirm."
	},
	{
		.name = "1fichier",
		.query = "1fichier",
		.url = "https://1fichier.com/contact.html",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "1Password",
		.query = "1password",
		.url = "https://my.1password.com/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, go to profile, click 'Permanently Delete Account'. Confirm by entering 'I am sure' and click 'Delete Account'."
	},
	{
		.name = "1Point3Acres",
		.query = "1point3acres",
		.url = "https://tools.1point3acres.com/delete-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "The account deletion page is very hard to find, there is no direct access to it on the website or Android app. I was only able to locate it through the iOS app. After submitting the deletion request, your account will be permanently deleted after 15 days. Please note that once your account is deleted, the email address you used previously cannot be reused to register again."
	},
	{
		.name = "1xBet",
		.query = "1xbet",
		.url = "https://1xbet.com",
		.email = "mailto:support@1xbet.com?subject=Delete%20my%20account&body=Please%20delete%20my%20account%20permanently%20because%20I%20don%E2%80%99t%20want%20to%20use%20the%201xBet%20services%20any%20further.%20Thank%20you.%20Username%3A%20XXX%20Email%3A%20XXX",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "280daily",
		.query = "280daily",
		.url = "https://280daily.com/settings/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Enter your account password and click on 'DELETE ACCOUNT'."
	},
	{
		.name = "2K Games",
		.query = "2k games",
		.url = "https://support.2k.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Go to the page linked, create a request about deleting your account, and customer support should delete it."
	},
	{
		.name = "3D Aim Trainer",
		.query = "3d aim trainer",
		.url = "https://steelseries.com/dashboard/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on the 'Delete my account' button on your profile page."
	},
	{
		.name = "404 Media",
		.query = "404 media",
		.url = "https://www.404media.co/privacy-policy/",
		.email = "mailto:emanuel@404media.co",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "4PDA",
		.query = "4pda",
		.url = "https://4pda.to/forum/index.php?act=findpost&pid=1930277&anchor=Spoil-1930277-33",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "It is not possible to delete your account. Even if the account is banned, it will still exist, but in the 'Banned' group."
	},
	{
		.name = "4shared",
		.query = "4shared",
		.url = "https://www.4shared.com/web/account/settings#overview",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "500px",
		.query = "500px",
		.url = "https://500px.com/settings/deletion",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page, select 'Delete your account', then click 'Continue'. Choose a reason why you're deleting your account and click 'Continue to delete account'. Finally, confirm your password and click 'Delete account'."
	},
	{
		.name = "7digital",
		.query = "7digital",
		.url = "https://help.7digital.com/hc/en-gb/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "7plus",
		.query = "7plus",
		.url = "https://support.7plus.com.au/hc/en-au/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Create a new request, select the 'Reason For Contact' as 'Account Related' and then under 'Please choose the issue' select 'Close 7plus account'. Supply the appropriate email and name, then send the request."
	},
	{
		.name = "8tracks",
		.query = "8tracks",
		.url = "https://8tracks.com/privacy",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login, go to your account settings and click the delete button. That's it."
	},
	{
		.name = "99app",
		.query = "99app",
		.url = "https://99app.com/ajuda/passageiro/como-excluir-minha-conta/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "This must be done via the app: Settings -> Privacy -> Delete My Account. You must not have any associated pix key or value in your 99pay wallet."
	},
	{
		.name = "99designs",
		.query = "99designs",
		.url = "https://support.99designs.com/hc/en-us/articles/204108919-How-do-I-delete-my-account-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Have to contact them, they will only ask for confirmation"
	},
	{
		.name = "9GAG",
		.query = "9gag",
		.url = "https://9gag.com/member/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, go to parameters, click Delete my account. Confirm by clicking I want to delete my account. And again by clicking Delete my 9GAG account."
	},
	{
		.name = "A1Office",
		.query = "a1office",
		.url = "https://a1office.co/support/",
		.email = "mailto:connect@a1office.co",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Abacashi",
		.query = "abacashi",
		.url = "https://abacashi.com/contact",
		.email = "mailto:contato@abacashi.com",
		.difficulty = 0x1000,
		.notes = "Either use the contact form or e-mail them directly asking for the account to be deleted"
	},
	{
		.name = "AbeBooks",
		.query = "abebooks",
		.url = "https://support.www.abebooks.com/en_US/contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Select 'Buying on AbeBooks' then 'Closing your account' then 'Closing your buyer account' then 'Contact us' then fill out the form."
	},
	{
		.name = "Abload",
		.query = "abload",
		.url = "https://abload.de/settings.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "About you",
		.query = "about you",
		.url = "https://www.aboutyou.it/h/il-mio-account/q-360014814179",
		.email = "mailto:servizioclienti@aboutyou.it",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "About.me",
		.query = "aboutme",
		.url = "https://about.me/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Academia",
		.query = "academia",
		.url = "https://www.academia.edu/settings#account-removal",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Academic Torrents",
		.query = "academic torrents",
		.url = "https://academictorrents.com",
		.email = "mailto:contact@academictorrents.com?subject=Account%20Deletion",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Acasa",
		.query = "acasa",
		.url = "https://app.heyacasa.com/register/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In your account settings choose 'Remove my account' at the bottom."
	},
	{
		.name = "Acceptd",
		.query = "acceptd",
		.url = "https://app.getacceptd.com/account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Visit the linked page, scroll to the bottom, and click 'Request Account Deletion'. You will be sent an email with a link to delete your account. Your request will be completed within 10 business days."
	},
	{
		.name = "Acciobooks",
		.query = "acciobooks",
		.url = "https://acciobooks.com/users/settings/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Just visit the linked page, login and confirm the deletion of your account"
	},
	{
		.name = "Acer",
		.query = "acer",
		.url = "https://community.acer.com/en/kb/articles/115-how-to-delete-your-acer-id-account",
		.email = "mailto:privacy_officer@acer.com?subject=Acer%20Account%20Deletion",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Acorns",
		.query = "acorns",
		.url = "https://app.acorns.com/close-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Acronis",
		.query = "acronis",
		.url = "https://account.acronis.com/#/profile/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "ActBlue",
		.query = "actblue",
		.url = "https://secure.actblue.com/my-account/settings/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You must be logged in. In the modal, check the boxes to confirm you understand the consequences of deleting your account. Proceed then confirm using your password or a security code sent to your email. Once confirmed, click the last button to permanently delete your account."
	},
	{
		.name = "ActiveCampaign",
		.query = "activecampaign",
		.url = "https://ac.activehosted.com/f/2175",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "For account deletion requests or requests to remove all account information, submit the [Data Subject Rights Request form](https://ac.activehosted.com/f/2175). When asked \"What would you like to initiate with us?\" choose the option **\"I want to be forgotten, and want my personal data erased\"**."
	},
	{
		.name = "Activision",
		.query = "activision",
		.url = "https://support.activision.com/privacy",
		.email = "mailto:privacy@activision.com",
		.difficulty = 0x1000,
		.notes = "Must put in a request, via a ticket system, while logged in to the account (to verify the identity of the account owner)."
	},
	{
		.name = "Ada",
		.query = "ada",
		.url = "https://ada.com/help/360000319269/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Just click delete and all your account data is erased"
	},
	{
		.name = "Adafruit",
		.query = "adafruit",
		.url = "https://accounts.adafruit.com/users/security",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Just click delete and confirm."
	},
	{
		.name = "Addicting Games",
		.query = "addicting games",
		.url = "https://addictinggameshelp.zendesk.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill their form for account deletion and they'll contact you again through mail for confirmation before deleting it."
	},
	{
		.name = "AddMeFast",
		.query = "addmefast",
		.url = "https://addmefast.com/profile",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "First delete your sites and your ads. Then go to the menu on the top right corner, click 'My Profile' then 'DELETE AddMeFast account' at the bottom of the page and confirm."
	},
	{
		.name = "addy.io",
		.query = "addyio",
		.url = "https://app.addy.io/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the 'Delete Account' tab. Enter your password and click 'Delete Account'. The usernames of deleted accounts cannot be reused."
	},
	{
		.name = "Adfly",
		.query = "adfly",
		.url = "https://adf.ly/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Press the button to delete your account, make sure you're logged in."
	},
	{
		.name = "AdFoc.us",
		.query = "adfocus",
		.url = "https://adfoc.us/tickets/",
		.email = "mailto:support@adfoc.us?subject=Account%20Deletion%20Request&body=Please%20delete%20my%20AdFoc.us%20account%20registered%20under%20this%20email%20address.",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "AdGuard",
		.query = "adguard",
		.url = "https://my.adguard.com/en/account/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your account settings, scroll to the bottom and click 'Delete my Account'"
	},
	{
		.name = "Adidas US",
		.query = "adidas us",
		.url = "https://www.adidas.com/us/my-account/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your account settings, scroll down to 'Manage Account' and click 'Delete Account'"
	},
	{
		.name = "ADN",
		.query = "adn",
		.url = "https://animationdigitalnetwork.com/account?view=deleteaccount",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your \"Gérer le compte\" page, in the \"Supprimer le compte\" category, enter your password and click on \"Valider\""
	},
	{
		.name = "Adobe",
		.query = "adobe",
		.url = "https://account.adobe.com/privacy/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "AdvCash",
		.query = "advcash",
		.url = "https://wallet.advcash.com/pages/profile#",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the profile page and click the button to delete account"
	},
	{
		.name = "Aeria Games",
		.query = "aeria games",
		.url = "https://www.aeriagames.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login, go to your profile settings on the top right, then go to the 'Account' tab and click 'Delete my Account'"
	},
	{
		.name = "Afterpay",
		.query = "afterpay",
		.url = "https://portal.afterpay.com/en-AU/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login, go to your account settings, select 'Close my account.'"
	},
	{
		.name = "Agence nationale des titres sécurisés",
		.query = "agence nationale des titres securises",
		.url = "https://moncompte.ants.gouv.fr/mes_donn%C3%A9es#delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your profile settings and click \"Supprimer mon compte\""
	},
	{
		.name = "Agoda",
		.query = "agoda",
		.url = "https://www.agoda.com/en-au/info/privacy.html",
		.email = "mailto:privacy@agoda.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "AgoraDesk",
		.query = "agoradesk",
		.url = "https://agoradesk.com/account/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to account settings and click, scroll down and click 'Delete Account'"
	},
	{
		.name = "AI Flux Krea Image Generator",
		.query = "ai flux krea image generator",
		.url = "https://aifluxkrea.com/",
		.email = "mailto:hi@aifluxkrea.com?subject=Account%20and%20Data%20Deletion%20Request",
		.difficulty = 0x1000,
		.notes = "Send an email requesting account deletion and wait a few days for processing."
	},
	{
		.name = "AI Image to Image Generator",
		.query = "ai image to image generator",
		.url = "https://imgtoimggenerator.com/",
		.email = "mailto:hi@imgtoimggenerator.com?subject=Account%20and%20Data%20Deletion%20Request",
		.difficulty = 0x800,
		.notes = "You have two options: 1) Download the [iOS](https://apps.apple.com/app/6747765678) and delete account within the app, or 2) Email requesting account deletion and wait a few days for processing."
	},
	{
		.name = "aiqfome",
		.query = "aiqfome",
		.url = "https://aiqfome.com/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Open a ticket on their chat requesting for your account to be deleted. They might reply first asking why, but will then proceed"
	},
	{
		.name = "airBaltic",
		.query = "airbaltic",
		.url = "https://www.airbaltic.com/en/edit-profile-new#",
		.email = "mailto:gdpr@airBalticclub.com",
		.difficulty = 0x400,
		.notes = "1) Go to [the airbaltic page](https://www.airbaltic.com/en-LV/index). 2) Sign in to your airBaltic Club account. 3) Go to Profile section 'Edit profile'. 4) Click 'Close profile'."
	},
	{
		.name = "Airbnb",
		.query = "airbnb",
		.url = "https://www.airbnb.com/privacy/manage-your-data",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "On the linked page, click the 'Request to delete your account' button. Complete the form, then click 'Delete account'. You may receive a follow-up email to verify your identity."
	},
	{
		.name = "Airdroid",
		.query = "airdroid",
		.url = "https://www.airdroid.com/en/deleteAccount.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the Account Info page, Click the Delete Account button to delete your AirDroid account."
	},
	{
		.name = "AirMeet",
		.query = "airmeet",
		.url = "https://help.airmeet.com/support/solutions/articles/82000443799-how-to-delete-airmeet-community-account-",
		.email = "mailto:support@airmeet.com",
		.difficulty = 0x1000,
		.notes = "Click the purple question mark button and then request account deletion via the Airmeet Chat Support. Alternatively, you can email support@airmeet.com."
	},
	{
		.name = "Airmiles",
		.query = "airmiles",
		.url = "https://www.airmiles.ca/en/get-help.html#contact-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Launch live chat through 'Chat' button and request account deletion or by phone at 1-888-AIR-MILES (247-6453)."
	},
	{
		.name = "airoom.chat",
		.query = "airoomchat",
		.url = "https://airoom.chat/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "There is no delete button or contact email."
	},
	{
		.name = "AirVPN",
		.query = "airvpn",
		.url = "https://airvpn.org/contact/",
		.email = "mailto:support@airvpn.org",
		.difficulty = 0x1000,
		.notes = "Visit the linked form and submit a support ticket requesting account deletion. Make sure you are logged in so they can find your account, or specify your username in your message. Alternatively, you may also send an email."
	},
	{
		.name = "AKAI Professional",
		.query = "akai professional",
		.url = "https://www.akaipro.com/privacy-policy",
		.email = "mailto:privacy@inmusicbrands.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Akinator",
		.query = "akinator",
		.url = "https://akinator.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the app, click on settings (gear icon) -> Account settings -> Delete account (at the bottom of the screen)."
	},
	{
		.name = "Albion Online",
		.query = "albion online",
		.url = "https://albiononline.com/en/profile/support",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to open a support ticket in order to delete your account."
	},
	{
		.name = "Alchemy",
		.query = "alchemy",
		.url = "https://www.alchemy.com/",
		.email = "mailto:support@alchemy.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "ALDO",
		.query = "aldo",
		.url = "https://www.aldoshoes.com/us/en_US/legal/privacy-policy",
		.email = "mailto:dpo@aldogroup.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Alelo",
		.query = "alelo",
		.url = "https://www.alelo.com.br/meucartao/duvidas-frequentes",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On app, go to 'Settings' -> 'Delete Account'. Follow the requested."
	},
	{
		.name = "Algolia",
		.query = "algolia",
		.url = "https://www.algolia.com/account/details",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your account settings, scroll to the bottom of Account Details, and select the Delete button next to \"Delete Account\"."
	},
	{
		.name = "Algor Education",
		.query = "algor education",
		.url = "https://en.algoreducation.com/contact-us",
		.email = "mailto:support@algoreducation.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Alibaba",
		.query = "alibaba",
		.url = "https://myprivacy.alibaba.com/home#/request/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "To delete your account, go to the Alibaba privacy center linked above, then click \"Delete Account\", enter \"delete\" in the text field, and click \"Delete Account\" again."
	},
	{
		.name = "AlienwareArena",
		.query = "alienwarearena",
		.url = "https://www.alienwarearena.com/faq-contact#Contact1",
		.email = "mailto:contact@alienwarearena.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "AliExpress",
		.query = "aliexpress",
		.url = "https://privacy.aliexpress.com/home#/request/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and click the red 'Delete my account' button. Type \"agree\" in the provided text box, then click 'Delete'."
	},
	{
		.name = "AliPay",
		.query = "alipay",
		.url = "https://memberprod.alipay.com/account/close/apply.htm",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "From the app: Settings -> Account and Security -> Account Cancel."
	},
	{
		.name = "All 4 / Channel 4",
		.query = "all 4 channel 4",
		.url = "https://4id.channel4.com/account#!/close",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "AllDebrid",
		.query = "alldebrid",
		.url = "https://alldebrid.com/account/#accountDelete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, then open the URL. You should see the option 'Delete my account'. Enter your username for confirmation and use the deletion link sent to your email to delete your account."
	},
	{
		.name = "AlternativeTo",
		.query = "alternativeto",
		.url = "https://alternativeto.net/user/edit/#account-settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to 'Danger zone' at the bottom of your 'Edit Profile' page and select 'Remove my account'."
	},
	{
		.name = "Altium",
		.query = "altium",
		.url = "https://www.altium.com/privacy-policy",
		.email = "mailto:data.compliance@altium.com",
		.difficulty = 0x1000,
		.notes = "Send an account deletion request to the provided email."
	},
	{
		.name = "AltTextGeneratorAI",
		.query = "alttextgeneratorai",
		.url = "https://alttextgeneratorai.com/terms-of-use",
		.email = "mailto:balt1794@gmail.com?subject=Account%20Deletion%20Request&body=Account%20Deletion%20Request",
		.difficulty = 0x1000,
		.notes = "Send an email. After receiving the email, your account will be deleted in the next 24 hours."
	},
	{
		.name = "Alvanista",
		.query = "alvanista",
		.url = "https://alvanista.com/profile/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Follow the link to edit your profile and click cancel account at bottom."
	},
	{
		.name = "Alza",
		.query = "alza",
		.url = "https://www.alza.cz/my-account?setlang=en-GB",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Open the link scroll down and press on the \"Request the deletion of my personal data\" "
	},
	{
		.name = "Amara",
		.query = "amara",
		.url = "https://amara.org/profiles/account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Just head to the account page and click the red button 'Delete your account' at the bottom left of the page."
	},
	{
		.name = "Amazon / Audible",
		.query = "amazon audible",
		.url = "https://www.amazon.com/privacy/data-deletion",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down, select a reason, tick the checkbox, click on \"Close My Account\" and follow the link in the confirmation e-mail."
	},
	{
		.name = "Amazon AWS",
		.query = "amazon aws",
		.url = "https://console.aws.amazon.com/billing/home#/account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You will not be able to reuse the email address on the account at the time of closure, but they appear to accept disposable email addresses. However, for accounts created prior to May 2017, there is also an Amazon Marketplace account with the same email. See the entry for Amazon to delete that account."
	},
	{
		.name = "AMD Rewards",
		.query = "amd rewards",
		.url = "https://www.amdrewards.com/my-account",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can not delete your account, only disable it, At the bottom of the page there is a 'Deactivate your account' -> Enter password -> Deactivate account"
	},
	{
		.name = "Ameli",
		.query = "ameli",
		.url = "https://www.ameli.fr/assure/mentions-legales-cgu",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the page \"Mes informations\", click on \"Résilier mon compte\". It will automatically re-enable sending documents trough your mailbox."
	},
	{
		.name = "American Airlines",
		.query = "american airlines",
		.url = "https://privacyportal.aa.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You can request data erasure in the given privacy portal."
	},
	{
		.name = "AmiAmi",
		.query = "amiami",
		.url = "https://support.amiami.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Amigo Secreto",
		.query = "amigo secreto",
		.url = "https://www.amigosecreto.com.br/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to send them a message through [Whatsapp](https://wa.me/+5511912074002) requesting deletion. It takes roughly 20 days."
	},
	{
		.name = "Amso",
		.query = "amso",
		.url = "https://amso.eu/en/contact",
		.email = "mailto:contact@amso.eu?subject=Request%20to%20Close%20Account%20and%20Delete%20Personal%20Data&body=Dear%20AMSO%20Data%20Protection%20Team%2C%20I%20hope%20this%20message%20finds%20you%20well.%20I%20would%20like%20to%20formally%20request%20the%20closure%20of%20my%20account%20and%20the%20deletion%20of%20all%20associated%20personal%20data%20as%20per%20the%20GDPR%20guidelines.%20Below%20are%20my%20account%20details%3A%20Email%20Address%3A%20xxxxx%2C%20Account%20ID%3A%20xxxxxxx%2C%20Phone%20Number%3A%20xxxxxx%20I%20kindly%20ask%20that%20you%20process%20this%20request%20at%20your%20earliest%20convenience%20and%20confirm%20once%20the%20account%20has%20been%20closed%20and%20all%20data%20has%20been%20deleted.%20Thank%20you%20for%20your%20attention%20to%20this%20matter.%20Best%20regards%2C%20xxxxx",
		.difficulty = 0x1000,
		.notes = "You need to write an email to ask them to delete your account. After 1 day the deletion is confirmed."
	},
	{
		.name = "Anaconda Nucleus",
		.query = "anaconda nucleus",
		.url = "https://anaconda.cloud/profile/privacy-security",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the 'Delete my Data' section, click the 'Delete Data' button and confirm."
	},
	{
		.name = "Ancestry",
		.query = "ancestry",
		.url = "https://www.ancestry.com/account/data/user/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Andaman7",
		.query = "andaman7",
		.url = "https://www.andaman7.com/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact customer service via the app and ask for account to be deleted."
	},
	{
		.name = "Android File Host (AFH)",
		.query = "android file host afh",
		.url = "https://androidfilehost.com/?w=contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact the customer support using the contact form and request the deletion of your account."
	},
	{
		.name = "Angelist",
		.query = "angelist",
		.url = "https://angel.co/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click delete account once logged in."
	},
	{
		.name = "Anghami",
		.query = "anghami",
		.url = "https://support.anghami.com/hc/en-us/articles/224890447-How-do-I-delete-deactivate-my-account-",
		.email = "mailto:support@anghami.com?subject=Account%20Deletion%20Request",
		.difficulty = 0x800,
		.notes = "If you can delete the account through the app, follow the process provided in the link. If you are using the web client you'll have to contact support@anghami.com. Your account will be deactivated within 24 hours and deleted after 30 days."
	},
	{
		.name = "AniDB",
		.query = "anidb",
		.url = "https://anidb.net/perl-bin/animedb.pl?show=policies",
		.email = "mailto:info@anidb.net",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "AniList",
		.query = "anilist",
		.url = "https://anilist.co/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to \"Delete User Account -> OK, Delete my account\"."
	},
	{
		.name = "Animal Crossing Community",
		.query = "animal crossing community",
		.url = "http://www.animalcrossingcommunity.com/help_main.asp?HelpSectionID=5#Topic201",
		.email = "mailto:support@animalcrossingcommunity.com",
		.difficulty = 0x1000,
		.notes = "If you no longer wish to use the site, you may send a email to their support."
	},
	{
		.name = "Anime News Network",
		.query = "anime news network",
		.url = "https://www.animenewsnetwork.com/account/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and click the delete button, click the confirmation url that sent via email."
	},
	{
		.name = "Anime-Planet",
		.query = "animeplanet",
		.url = "https://www.anime-planet.com/users/delete_account.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and click 'YES, DELETE MY ACCOUNT FOREVER'."
	},
	{
		.name = "Animoto",
		.query = "animoto",
		.url = "https://animoto.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Open the link and click Delete Account"
	},
	{
		.name = "Ankama",
		.query = "ankama",
		.url = "https://support.ankama.com/hc/en-us/requests/new?ticket_form_id=625847",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "AnkiApp",
		.query = "ankiapp",
		.url = "https://www.ankiapp.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in to your account and click 'Delete Account'. Confirm by entering your password and click 'OK'. You cannot delete your account via web.ankiapp.com - please visit join.ankiapp.com instead."
	},
	{
		.name = "AnkiWeb",
		.query = "ankiweb",
		.url = "https://ankiweb.net/account/remove-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page, log in to your account, confirm your password and click \"Remove Account\"."
	},
	{
		.name = "Anti-Captcha",
		.query = "anticaptcha",
		.url = "https://anti-captcha.com/clients/settings/killme",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Confirm account deletion, then input the code you'll receive by email."
	},
	{
		.name = "Any.do",
		.query = "anydo",
		.url = "https://app.any.do/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "For immediate account deletion, in Web/Mobile: Settings(⚙️) → Profile → Delete Account."
	},
	{
		.name = "AOL / Instant Messenger",
		.query = "aol instant messenger",
		.url = "https://aol.mydashboard.oath.com/#section-manage",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Account gets deactivated for a waiting period of 30-180 days depending on your country, then permanently deleted."
	},
	{
		.name = "Aparat",
		.query = "aparat",
		.url = "https://www.aparat.com/dashboard/profile/unsubscribe",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "To unsubscribe, click the Cancel membership button."
	},
	{
		.name = "Apex Minecraft Hosting",
		.query = "apex minecraft hosting",
		.url = "https://billing.apexminecrafthosting.com/submitticket.php",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to log into your billing panel and send a ticket regarding the account deletion. If you only have a multicraft account, you can send a ticket without logging in."
	},
	{
		.name = "Apiary",
		.query = "apiary",
		.url = "https://apiary.io/",
		.email = "mailto:support@apiary.io",
		.difficulty = 0x1000,
		.notes = "Create a placeholder API, then delete all of your existing APIs. After that, send a request to terminate your account to the support email."
	},
	{
		.name = "APKPure",
		.query = "apkpure",
		.url = "https://apkpure.com/account/destroy",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page, provide a reason for deletion, then submit the form. Your account will be deleted within 48 hours."
	},
	{
		.name = "Apoia.se",
		.query = "apoiase",
		.url = "https://suporte.apoia.se/hc/pt-br/articles/4408681019547-Como-encerrar-meu-cadastro-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "The exclusion will occur 7 (seven) days after filling the Google Docs form."
	},
	{
		.name = "AppJobber",
		.query = "appjobber",
		.url = "https://appjobber.com/profile/delete_account",
		.email = "mailto:datenschutz@appjobber.de",
		.difficulty = 0x400,
		.notes = "Go to the profile page, click the button to delete the account at the top right and confirm. Alternatively you can send and e-mail asking for the deletion."
	},
	{
		.name = "Apple Account / iTunes",
		.query = "apple account itunes",
		.url = "https://support.apple.com/en-us/HT208504",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Follow the steps to request account deletion. It is possible to undo for a few days. If you have bought a developer license, it's impossible to delete your account. Once deleted, you will no longer be able to open a new one with the same email address."
	},
	{
		.name = "Apprentus",
		.query = "apprentus",
		.url = "https://www.apprentus.com/profile/account/close",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Tell the chatbot 'I want to delete my account', which will give you the url."
	},
	{
		.name = "AppShopper",
		.query = "appshopper",
		.url = "https://appshopper.com/about#contact-form",
		.email = "mailto:support@appshopper.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Appypie",
		.query = "appypie",
		.url = "https://accounts.appypie.com/privacy",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Under Privacy Settings click on 'Delete / Deactivate Account' then click on 'Delete Account' and confirm and specify a reason."
	},
	{
		.name = "Aquaillumination",
		.query = "aquaillumination",
		.url = "https://www.aquaillumination.com/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Customer service is unable to delete accounts."
	},
	{
		.name = "ara.cat",
		.query = "aracat",
		.url = "https://www.ara.cat/",
		.email = "mailto:home@ara.cat?subject=Delete%20ARA%20account&body=Please%20delete%20my%20ARA%20account%20which%20was%20registered%20under%20the%20e-mail%3A",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Arc",
		.query = "arc",
		.url = "https://resources.arc.net/hc/en-us/articles/22351623346327-Delete-My-Arc-Account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Open the first tab of the settings inside the app, click the \"...\" button next to your email address, select \"Delete Account...\", then confirm deletion."
	},
	{
		.name = "Arc Games",
		.query = "arc games",
		.url = "https://support.arcgames.com/hc/en-us/requests/new",
		.email = "mailto:privacy@gearboxsf.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Arch Linux AUR",
		.query = "arch linux aur",
		.url = "https://aur.archlinux.org/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on the \"My Account\" button, then in the first line of text at the top of the page, there is a button that links to a page where you can delete your account."
	},
	{
		.name = "Arch Linux Forums",
		.query = "arch linux forums",
		.url = "https://aur.archlinux.org/",
		.email = "mailto:forum@archlinux.org",
		.difficulty = 0x1000,
		.notes = "You need to send an email to the forum team."
	},
	{
		.name = "Archipad",
		.query = "archipad",
		.url = "https://cloud.archipad.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on your e-mail on the top right. Click on 'Profile'. Scroll down to find the delete account button in red. Enter password to complete deletion."
	},
	{
		.name = "Archive of Our Own",
		.query = "archive of our own",
		.url = "https://archiveofourown.org/faq/your-account?language_id=en#deleteaccount",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on your profile picture on the top right, go to 'Profile', and click the 'Delete my account' button"
	},
	{
		.name = "Arduino",
		.query = "arduino",
		.url = "https://id.arduino.cc/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Visit the linked page and under 'Account Settings', click the link next to 'If you wish to delete your Arduino account'. You will be sent an email with a link to delete your account."
	},
	{
		.name = "AREX (Airport Railway Company)",
		.query = "arex airport railway company",
		.url = "https://www.arex.or.kr/user/leaveSite.do",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Arlo",
		.query = "arlo",
		.url = "https://my.arlo.com/#/settings/privacy/delete-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Visit the linked page and click 'Permanently Delete Arlo Account'. Click 'Continue'.  Click 'Reset and remove all devices'.  Click 'Continue'.  Click 'Delete All Content'.  Click 'Continue'.  Enter your email address and password associated with the account then click 'Permanently Delete Arlo Account'"
	},
	{
		.name = "ArmorGames",
		.query = "armorgames",
		.url = "https://armorgames.com/settings/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Ars Technica",
		.query = "ars technica",
		.url = "https://arstechnica.com/civis/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to make a forum post about deleting your account and eventually the admins will delete your account, although your comment and post history stays on the website"
	},
	{
		.name = "Artlist",
		.query = "artlist",
		.url = "https://artlist.io/",
		.email = "mailto:help@art-list.io?subject=Account%20Deletion%20Request&body=Hi%2C%20I%20request%20to%20permanently%20remove%20all%20of%20my%20data%20from%20your%20platform.%20Please%20provide%20an%20update%20on%20the%20process%20via%20this%20email.",
		.difficulty = 0x1000,
		.notes = "You have to contact the support team by email."
	},
	{
		.name = "Artsy",
		.query = "artsy",
		.url = "https://www.artsy.net/user/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Asana",
		.query = "asana",
		.url = "https://app.asana.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to User Info, click Settings, Account and Delete My account at the bottom. After that, click 'Continue with deletion' button, pick a reason and type 'delete'."
	},
	{
		.name = "Asda",
		.query = "asda",
		.url = "https://www.asda.com/privacy/contact-us",
		.email = "mailto:dataprotection@asda.co.uk",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Asgardia.space",
		.query = "asgardiaspace",
		.url = "https://asgardia.space",
		.email = "mailto:support@asgardia.space",
		.difficulty = 0x2000,
		.notes = "You have to send an e-mail and request for account deletion, which might take up to 10 days. By some accounts, the site administrators will not follow up on deletion requests, leading to no follow-up."
	},
	{
		.name = "Ashampoo",
		.query = "ashampoo",
		.url = "https://www.ashampoo.com/en/usd/ppy",
		.email = "mailto:privacy@ashampoo.com",
		.difficulty = 0x1000,
		.notes = "Request deletion by emailing privacy team. Ask them to close your account and send them your name and email address. You’ll receive a mail back from them with a personal removal link in it."
	},
	{
		.name = "Ask.fm",
		.query = "askfm",
		.url = "https://ask.fm/account/settings/optout",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Asos",
		.query = "asos",
		.url = "https://www.asos.com/customer-care/technical/id-like-to-close-my-account-with-asos-what-should-i-do/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "If not using the app, needs to request deletion from customer services. Theoretically on the app there are options to delete account described in the FAQ."
	},
	{
		.name = "Assembla",
		.query = "assembla",
		.url = "https://www.assembla.com/user/edit/edit_account_settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "ASUS",
		.query = "asus",
		.url = "https://privacy.asus.com/pi/global/privacy",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the website, select your type of account and select which data you want to remove."
	},
	{
		.name = "ASUS WebStorage",
		.query = "asus webstorage",
		.url = "https://service.asuswebstorage.com/contactus/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Select \"Account related\" as the problem category and \"Request account deletion\" as the problem item."
	},
	{
		.name = "Atavi",
		.query = "atavi",
		.url = "http://atavi.com/user/remove",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "AtCoder",
		.query = "atcoder",
		.url = "https://atcoder.jp/quit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Aternos",
		.query = "aternos",
		.url = "https://aternos.org/close/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Athletic Greens",
		.query = "athletic greens",
		.url = "https://ag-privacy.relyance.ai/?mockData=false",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Deleting account does not cancel subscription, so do that first. Requires submitting name, address, and phone number to start deletion."
	},
	{
		.name = "The Atlantic",
		.query = "the atlantic",
		.url = "https://support.theatlantic.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x4000,
		.notes = "Depending on where you live you either need to select \"Submit an EEA Data Request\" or \"Submit a CCPA Data Request\"."
	},
	{
		.name = "Atlassian / Bitbucket",
		.query = "atlassian bitbucket",
		.url = "https://id.atlassian.com/manage/close-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You need to visit my.atlassian.com and designate a different user as a billing and technical contact if your account is the primary billing contact for one or more products"
	},
	{
		.name = "Auchan",
		.query = "auchan",
		.url = "https://www.auchan.fr/faq/section/mon-compte-client/mon-compte-auchan-fr?parentNodeId=adf9b2fc-cd05-49df-9833-70766279aea3#anchor_3bea6236-a7b1-4c98-a754-fb04d325831c",
		.email = "mailto:relationclient@auchan.fr?subject=Suppression%20de%20mon%20compte%20Auchan&body=Bonjour%2C%20veuillez%20supprimer%20mon%20compte%20Auchan%20et%20les%20donn%C3%A9es%20personelles%20associ%C3%A9es%20avec%20cette%20adresse%20e-mail.",
		.difficulty = 0x1000,
		.notes = "Send an email to the address given here. It's not listed on the FAQ page."
	},
	{
		.name = "Audiofanzine",
		.query = "audiofanzine",
		.url = "https://fr.audiofanzine.com/fonctionnalites-audiofanzine/forums/t.759426,supprimer-son-compte.html",
		.email = "mailto:contact@audiofanzine.com",
		.difficulty = 0x800,
		.notes = "To delete your account, go to your profile and click on the blue “Edit my profile” link to the right of your username. At the bottom right of the new page, you'll find a red “Delete my account” link. You will then receive an e-mail confirming your deletion request, followed by yet another e-mail indicating that your account will be deleted after 7 days."
	},
	{
		.name = "Audiomack",
		.query = "audiomack",
		.url = "https://audiomack.com/dashboard#delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the delete account link in the bottom left corner"
	},
	{
		.name = "Augment",
		.query = "augment",
		.url = "https://help.augment.com/en/articles/4103227-account-deletion",
		.email = "mailto:gdpr@augment.com",
		.difficulty = 0x1000,
		.notes = "On the Augment website, log in, then click on the 'chat box' at the bottom right of the page, then request for your account to be deleted. Alternatively, send a GDPR request at the email address."
	},
	{
		.name = "AulaFacil",
		.query = "aulafacil",
		.url = "https://usuarios.aulafacil.com/usuarios/miPerfil",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on \"Delete account\", provide your current password twice, and then click on \"I'm sure I want to delete my profile\"."
	},
	{
		.name = "Auth0",
		.query = "auth0",
		.url = "https://community.auth0.com/t/how-can-i-delete-my-auth0-auth0-community-forum-account/34689",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Delete all tenants on the Auth0 dashboard then send a private message to a support moment on the forums."
	},
	{
		.name = "Author.today",
		.query = "authortoday",
		.url = "https://help.author.today/knowledge_base/item/268554?sid=58980",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You cannot delete your account, only disable it. To do so, go to -> personal area -> account -> general -> account management."
	},
	{
		.name = "Authy",
		.query = "authy",
		.url = "https://authy.com/account/delete/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Fill out the form, verify your phone number and e-mail. Data will be permanently deleted after 30 days."
	},
	{
		.name = "Autodesk",
		.query = "autodesk",
		.url = "https://accounts.autodesk.com/Profile/Security",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Go to the bottom of the page, click the button 'Account Deletion' and confirm on 'Delete your Autodesk account and data'. Enter your password, then enter a 6-digit code that will be sent to your email and click 'Delete Account'. You can recover the account within 30 days of deleting it. The deletion is completed in 90 days."
	},
	{
		.name = "AutoScout24",
		.query = "autoscout24",
		.url = "https://accounts.autoscout24.com/Delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "AutoWebSurf",
		.query = "autowebsurf",
		.url = "https://autowebsurf.com/members/delete.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Enter your password to confirm the deletion."
	},
	{
		.name = "Autozis",
		.query = "autozis",
		.url = "https://autozis.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the app or the web portal click the profile icon -> \"Profile\" -> \"Personal data\" -> \"Delete\"."
	},
	{
		.name = "AV Club",
		.query = "av club",
		.url = "https://notice.sp-prod.net/sar/index.html?message_id=539278&account_id=1195&ccpa_type=delete",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form using the email address of your account and click on the verification link that is sent."
	},
	{
		.name = "Avast!",
		.query = "avast",
		.url = "https://profile.avast.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the linked page, click the 'Delete Account' button."
	},
	{
		.name = "AVEN",
		.query = "aven",
		.url = "https://www.asexuality.org/en/topic/68514-deleting-account/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Sign in and post a request in the deletion thread, a moderator will contact you and tell you the details."
	},
	{
		.name = "AVG",
		.query = "avg",
		.url = "https://profile.avg.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'Delete Account' at the bottom of the page, then 'Continue Deleting' and enter your password to delete account."
	},
	{
		.name = "Avira",
		.query = "avira",
		.url = "https://support.avira.com/hc/en-us/articles/360000753557--How-can-I-delete-my-Avira-account",
		.email = "mailto:support@avira.com",
		.difficulty = 0x400,
		.notes = "Follow the instructions provided in the article. If you prefer, you can also request deletion of your account via email."
	},
	{
		.name = "Avito",
		.query = "avito",
		.url = "https://www.avito.ru/profile/settings/remove",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Enter any reason to delete"
	},
	{
		.name = "AwardWallet",
		.query = "awardwallet",
		.url = "https://awardwallet.com/user/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You must enter your password and supply a reason for deleting your account"
	},
	{
		.name = "Axios",
		.query = "axios",
		.url = "https://www.axios.com/legal",
		.email = "mailto:privacy@axios.com",
		.difficulty = 0x4000,
		.notes = "According to their Privacy Policy, if you are a California or Virginia resident, you can email Axios about account deletion and they should delete your account and data."
	},
	{
		.name = "AXS",
		.query = "axs",
		.url = "https://support.axs.com/hc/en-gb/articles/360017655079-Can-you-delete-my-data-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form requesting data deletion and then go to your e-mail to confirm the request. It takes a couple weeks for them to process the request."
	},
	{
		.name = "AZMVDNOW",
		.query = "azmvdnow",
		.url = "https://azmvdnow.gov/customers/useraccount/disable",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Account will not be deleted, just disabled. If you want that, click ‘Disable Account’ button.  Check ‘Yes, I wish to disable my AZ MVD Now account.’.  Click ‘Disable Account’"
	},
	{
		.name = "B&H",
		.query = "bh",
		.url = "https://www.bhphotovideo.com/find/HelpCenter/PrivacySecurity.jsp",
		.email = "mailto:privacy@bhphoto.com?subject=Account%20Deletion%20Request&body=Please%20delete%20my%20B%26H%20account.",
		.difficulty = 0x1000,
		.notes = "Must send an email or call 800-947-9915."
	},
	{
		.name = "Babbel",
		.query = "babbel",
		.url = "https://home.babbel.com/user-profile/settings",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Scroll down and press delete. A confirmation box will show up. You will have to go click the link in the email they send to you to permanently delete your Babbel account."
	},
	{
		.name = "Baby Names",
		.query = "baby names",
		.url = "https://babynames.com/user/close.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page, select a reason why you're deleting your account, then click 'Agreed - Close My Account'."
	},
	{
		.name = "BabyCenter",
		.query = "babycenter",
		.url = "https://dsar.babycenter.com/",
		.email = "mailto:privacy_babycenter@everydayhealth.com",
		.difficulty = 0x1000,
		.notes = "If you are protected under the GDPR or CCPA, complete the linked form. Otherwise, you must send an email."
	},
	{
		.name = "back4app",
		.query = "back4app",
		.url = "https://help.back4app.com/hc/en-us/articles/4423268883597",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "[Delete all apps from your dashboard](https://help.back4app.com/hc/en-us/articles/115000755572), then [create a Support ticket](https://help.back4app.com/hc/en-us/requests/new) and ask them to delete your account."
	},
	{
		.name = "Backblaze",
		.query = "backblaze",
		.url = "https://secure.backblaze.com/account_settings.htm",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click on delete account and follow the required steps. You must have no outstanding B2 balance and will have to delete most files and settings in your account first."
	},
	{
		.name = "Badlion",
		.query = "badlion",
		.url = "https://www.badlion.net/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Open settings, scroll down and enter your username and delete your account."
	},
	{
		.name = "Badoo",
		.query = "badoo",
		.url = "https://badoo.com/settings/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the top right corner click 'Settings', then on the left hand side click 'Delete'. Type your information, to delete Badoo, enter your password and in the other box, explain why you want to leave. Click on the 'Confirm' button, you will receive a message page confirming your request was successfully completed."
	},
	{
		.name = "Baidu",
		.query = "baidu",
		.url = "https://passport.baidu.com/v6/cancelAccount",
		.email = NULL,
		.difficulty = 0x800,
		.notes = NULL
	},
	{
		.name = "Balance",
		.query = "balance",
		.url = "https://balanceapp.com/balance-privacy",
		.email = "mailto:privacy@balanceapp.com?subject=Account%20Information%20Deletion%20Request",
		.difficulty = 0x1000,
		.notes = "Send an email to their Privacy address. Within 24 hours, a support representative should respond to your request and ask for confirmation. Once they receive and respond to your request confirmation, your login credentials should no longer work."
	},
	{
		.name = "Bambuser",
		.query = "bambuser",
		.url = "https://bambuser.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your Settings page and scroll down to find 'Deactivate' account. Click on 'Close Account' button, and confirm the account deletion."
	},
	{
		.name = "Bandcamp",
		.query = "bandcamp",
		.url = "https://bandcamp.com/settings?pane=fan",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "To terminate an artist account, you must click on the 'Artists' pane, click on the desired artist's profile, and click the termination link there."
	},
	{
		.name = "Bangumi",
		.query = "bangumi",
		.url = "https://bgm.tv/group/forum",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Submit an account deletion request at this link."
	},
	{
		.name = "Barnes & Noble",
		.query = "barnes noble",
		.url = "https://www.barnesandnoble.com/account/manage/settings/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Visit the linked page, scroll to the bottom to 'Data Rights Request' and click on 'Submit a Request'. Complete and submit the form."
	},
	{
		.name = "Basecamp",
		.query = "basecamp",
		.url = "https://3.basecamp-help.com/article/156-cancel-your-basecamp-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Data will be permanently deleted after 30 days."
	},
	{
		.name = "Basicversity",
		.query = "basicversity",
		.url = "https://basicversity.com/privacy.php#:~:text=If%20you%20have%20questions%20about%20accessing%20or%20correcting%20your%20personal%20data%20please%20send%20an%20email%20to%20simpleversity%20At%20gmail.com.",
		.email = "mailto:simpleversity@gmail.com",
		.difficulty = 0x2000,
		.notes = "There is no option to delete accounts. Furthermore, their Privacy page includes an e-Mail address to redirect any inquiries, but it seems it has been left unattended, as no one answers it since, at least, 2018."
	},
	{
		.name = "Basilica di San Pietro",
		.query = "basilica di san pietro",
		.url = "https://www.basilicasanpietro.va",
		.email = "mailto:privacy@fsp.va?subject=PERSONAL%20DATA.&body=Please%20delete%20the%20account%20associated%20with%20my%20e-mail%2C%20YOUR_EMAIL%2C%20and%20all%20its%20associated%20data.",
		.difficulty = 0x1000,
		.notes = "Send them an e-mail to request deletion."
	},
	{
		.name = "Basin",
		.query = "basin",
		.url = "https://usebasin.com/users/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down to the bottom of the page and click the 'Completely obliterate all my data' button"
	},
	{
		.name = "Bato.to",
		.query = "batoto",
		.url = "https://bato.to/account/deletion",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked site and click \"Delete account\". Remember that you won't be able to reuse e-mail associated with this account, and all uploaded chapters and comments will not be deleted."
	},
	{
		.name = "Battle.net / Blizzard",
		.query = "battlenet blizzard",
		.url = "https://eu.battle.net/support/en/article/2659",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Requests may take up to 30 days to complete and may require to submit a government-issued photo ID."
	},
	{
		.name = "BBC",
		.query = "bbc",
		.url = "https://account.bbc.com/account/settings/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Same account also covers BBC iPlayer and BBC Sounds."
	},
	{
		.name = "Be Welcome",
		.query = "be welcome",
		.url = "https://www.bewelcome.org/deleteprofile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "There's a 'Remove profile' option on the side menu at the 'Edit my profile' page. You can even select an option to have your data deleted within 24 hours."
	},
	{
		.name = "BeamNG",
		.query = "beamng",
		.url = "https://support.beamng.com/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to contact support on the linked page to request account deletion."
	},
	{
		.name = "Bearblog",
		.query = "bearblog",
		.url = "https://bearblog.dev/accounts/delete/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Follow the link and confirm account deletion."
	},
	{
		.name = "Beatport",
		.query = "beatport",
		.url = "https://support.beatport.com/hc/en-us/articles/4412533928596-How-can-I-close-my-account-",
		.email = "mailto:support@beatport.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "beecrowd (for talents)",
		.query = "beecrowd for talents",
		.url = "https://judge.beecrowd.com/en/users/deactivate?utm_source=judge&utm_medium=page&utm_campaign=deactivate",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Go to the linked page, and at the bottom, type the word \"deactivate\" (in lowercase letters and without quotes), and click on \"Delete\". This action does not delete everything, though: posts, place in ranks, created tournaments, teams on which you're a member, and progress in disciplines are only username-anonimized. Furthermore, no anonimization is done to data related to progress in disciplines, as only professors who created them are able to remove students and stop tracking."
	},
	{
		.name = "Behance",
		.query = "behance",
		.url = "https://help.behance.net/hc/en-us/articles/204484854-How-do-I-delete-cancel-my-account-",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "To delete your account, please click on your avatar in the top right navigation, visit Account Settings, and hit the 'Delete Account' tab. There, you'll have the option to delete."
	},
	{
		.name = "BeMyEye",
		.query = "bemyeye",
		.url = "https://bemyeye.zendesk.com/hc/en-us/articles/360009596613-How-do-I-delete-my-account-",
		.email = "mailto:support@bemyeye.com",
		.difficulty = 0x1000,
		.notes = "Contact the customer support via email and request to delete your account. You can only completely delete your account if you have not performed missions or have not made any money using the BeMyEye app, otherwise they will only deactivate it."
	},
	{
		.name = "Benfeitoria",
		.query = "benfeitoria",
		.url = "https://benfeitoria.com/restrito/conta/deletar-conta",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log-in, then go to the page linked above, type \"EXCLUIR\" then click the button to permanently delete the account."
	},
	{
		.name = "BeReal",
		.query = "bereal",
		.url = "https://help.bereal.com/hc/articles/7531255012381",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "The exact steps vary by device. Account will be deleted after 15 days."
	},
	{
		.name = "BerryByte",
		.query = "berrybyte",
		.url = "https://billing.berrybyte.net/submitticket.php",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Log into your BerryByte client area and send a ticket asking for account deletion. If you only have a game control panel account, you can submit a ticket without having to login."
	},
	{
		.name = "Best Buy",
		.query = "best buy",
		.url = "https://www.bestbuy.com/sentry/confirm/residency?context=ca&type=delete",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Process will be much smoother if you sign in. Alternatively, you can call 888-237-8289."
	},
	{
		.name = "Best Buy Canada",
		.query = "best buy canada",
		.url = "https://cloudpage.bestbuypromotions.ca/privacy-request",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form with the information on your account."
	},
	{
		.name = "bet365",
		.query = "bet365",
		.url = "https://help.bet365.com/contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "To delete the account, contact customer service. It is recommended to do it via chat and ask to close the account, as there is no link to do so."
	},
	{
		.name = "Betano",
		.query = "betano",
		.url = "https://betano.com/myaccount/profile/protection",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Access Account -> Profile -> Player Protection and select Self-exclusion option. You can choose remove your account for a desired time, or definitely."
	},
	{
		.name = "Bethesda",
		.query = "bethesda",
		.url = "https://help.bethesda.net/app/incident10/?prod=711&cat=1220",
		.email = "mailto:privacy@support.zenimax.com",
		.difficulty = 0x1000,
		.notes = "To delete the account, login first on Bethesda.net, then click on the above link and select Bethesda as the product (note that the page takes a while to load), then select 'Delete Personal Information and Account' and fill out the form, this will send a prefilled support contact form for account deletion. You may also send an email to privacy@support.zenimax.com "
	},
	{
		.name = "Betnacional",
		.query = "betnacional",
		.url = "https://assets.bet6.com.br/sistemans/skins/betnacional/doc/5eef829d8f.pdf",
		.email = "mailto:contato@betnacional.com",
		.difficulty = 0x1000,
		.notes = "According to privacy policy (item 8), you have to send an e-mail to them requesting the account removal."
	},
	{
		.name = "Betterment",
		.query = "betterment",
		.url = "https://www.betterment.com",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Account can only be closed, but not truly deleted."
	},
	{
		.name = "BeyondMenu",
		.query = "beyondmenu",
		.url = "https://www.beyondmenu.com/manageaccount.aspx",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Bidoo",
		.query = "bidoo",
		.url = "https://it.bidoo.com",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Click the assistance link on the website and fill in the contact form. A representative will mail you to confirm the account deletion."
	},
	{
		.name = "Bigstock",
		.query = "bigstock",
		.url = "https://support.bigstockphoto.com/s/article/How-do-I-close-my-Bigstock-contributor-account",
		.email = "mailto:support@bigstockphoto.com",
		.difficulty = 0x1000,
		.notes = "To delete your account, you must email them and request that your account be deleted."
	},
	{
		.name = "Bikemap",
		.query = "bikemap",
		.url = "https://www.bikemap.net/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login, click settings, click 'Delete Account', confirm."
	},
	{
		.name = "Biletyna",
		.query = "biletyna",
		.url = "https://biletyna.pl/profile/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Bilibili",
		.query = "bilibili",
		.url = "https://passport.bilibili.com/register/logout.html",
		.email = NULL,
		.difficulty = 0x800,
		.notes = NULL
	},
	{
		.name = "Binance",
		.query = "binance",
		.url = "https://www.binance.com/en/my/security",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "First you have to empty your account from all cryptocurrencies, then go to the website linked, scroll down and click on \"delete account\", then follow the steps."
	},
	{
		.name = "BingX",
		.query = "bingx",
		.url = "https://bingx.com/removeAccount/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Once you open the url and accept the terms and services your account goes into review. The account is deleted within 1 to 5 business days."
	},
	{
		.name = "BioParque Pantanal",
		.query = "bioparque pantanal",
		.url = "https://agendamentobioparquepantanal.ms.gov.br/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to request the deletion of your account by whatsapp. The phone number is +55 67 9217 8189 and it might take a few tries to get it done."
	},
	{
		.name = "Bitdefender Central",
		.query = "bitdefender central",
		.url = "https://account.bitdefender.com/delete_account/info",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To delete your account, login, go to the 'My Account' page, click the 'Delete Account' link, click the 'Delete Account' button, and click the 'Send Email' button. A confirmation email will be sent to the account email. Click the 'Delete Account' link in the email sent to you, log into your account, and click the 'Delete Account' button."
	},
	{
		.name = "Bitfinex",
		.query = "bitfinex",
		.url = "https://support.bitfinex.com/hc/en-us/articles/115002403694",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Visit the Account Settings page from the menu in the top right corner of the Bitfinex platform. Deactivate your Bitfinex account by changing your account status. Finally, confirm this via the confirmation email. This process is irreversible and your data will be retained for as long as needed to meet audit and regulatory purposes."
	},
	{
		.name = "BitLaunch",
		.query = "bitlaunch",
		.url = "https://app.bitlaunch.io/account/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Press the destroy my account button"
	},
	{
		.name = "Bitly",
		.query = "bitly",
		.url = "https://app.bitly.com/settings/profile/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the linked page, click the red 'Delete Account' button. Select an option specifying why you want to leave Bitly, and confirm your action by typing \"DELETE ACCOUNT\", then click 'Delete Account' again."
	},
	{
		.name = "Bitstamp",
		.query = "bitstamp",
		.url = "https://www.bitstamp.net/settings/deactivate/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Process described on their [FAQ](https://www.bitstamp.net/faq/how-can-i-close-my-account/). You will need to enter your password to confirm the operation."
	},
	{
		.name = "Bittrex",
		.query = "bittrex",
		.url = "https://bittrex.zendesk.com/hc/en-us/requests/new?ticket_form_id=114093958171",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "The only way to delete an account is to send a customer support request, select 'Close account' and fill the form, you will then receive an email ironically asking you to create a Bittrex support account password so you can follow the status of your request."
	},
	{
		.name = "Bitwarden",
		.query = "bitwarden",
		.url = "https://bitwarden.com/help/article/delete-your-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Bkool",
		.query = "bkool",
		.url = "https://support.bkool.com/hc/en-us/articles/360024682171-Privacy-policy",
		.email = "mailto:dpo@bkool.com",
		.difficulty = 0x1000,
		.notes = "To delete an account, the user must write to the following email address: dpo@bkool.com"
	},
	{
		.name = "BlackBox",
		.query = "blackbox",
		.url = "https://www.blackbox.global/contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to contact support to delete your account."
	},
	{
		.name = "BlackSpigot",
		.query = "blackspigot",
		.url = "https://blackspigot.com/threads/delete-account.9291/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "As noted on the forum, account removals are not an option."
	},
	{
		.name = "Bleep",
		.query = "bleep",
		.url = "https://bleep.com/account/show",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Make sure you're logged in and go to the linked URL and click \"Delete Account\", this will show some text telling you to contact support. Click the \"Contact Support\" button and click the \"Contact Us\" button in the pop-up. Fill out the form and ask to delete your account."
	},
	{
		.name = "BlendSwap",
		.query = "blendswap",
		.url = "https://blendswap.com/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your profile and press the 'delete account' button"
	},
	{
		.name = "Blind",
		.query = "blind",
		.url = "https://www.teamblind.com/faqs",
		.email = "mailto:blindapp@teamblind.com",
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "Blinkee",
		.query = "blinkee",
		.url = "https://blinkee.city/en-pl/faq",
		.email = "mailto:contact.pl@blinkee.city",
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "Blinkist",
		.query = "blinkist",
		.url = "https://www.blinkist.com/nc/settings/account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'I want to delete my account' at the bottom of the page."
	},
	{
		.name = "Blogger",
		.query = "blogger",
		.url = "https://support.google.com/blogger/answer/41932",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can't delete your Blogger Account without deleting your entire Google Account. But you can delete your blog.\nIf you want to delete your entire google account, use the instructions for [Google](https://justdeleteme.xyz/#google)."
	},
	{
		.name = "Bloomberg",
		.query = "bloomberg",
		.url = "https://www.bloomberg.com/notices/tos/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You cannot delete your account by yourself. Apparently, they delete it automatically after a long period of inactivity but nothing in their website talks about it."
	},
	{
		.name = "Bloomingdales",
		.query = "bloomingdales",
		.url = "https://customerservice-bloomingdales.com/articles/contact-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Only residents of California and Nevada are allowed to make official data removal requests. However, if you contact Customer Service via one of the methods listed, they may submit a 30-day account deletion request for you anyway."
	},
	{
		.name = "Blue Apron",
		.query = "blue apron",
		.url = "https://www.blueapron.com/cancel_subscription",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Bluebird by American Express",
		.query = "bluebird by american express",
		.url = "https://secure.bluebird.com/manage/settings/ProfileSettings",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Remove all funds from your account. Then go to settings in your account, click on the profile tab, and click close account."
	},
	{
		.name = "Bluejeans",
		.query = "bluejeans",
		.url = "https://support.bluejeans.com/s/contactsupport",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact support via the contact form and request deletion of your account."
	},
	{
		.name = "Bluesky",
		.query = "bluesky",
		.url = "https://bsky.app/settings",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Scroll to the bottom and click \"Delete My Account...\". Then provide the confirmation code sent to your email and your account password. No confirmation is given, but the account is deleted instantly."
	},
	{
		.name = "Board Game Arena",
		.query = "board game arena",
		.url = "https://boardgamearena.com/preferences?section=account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log-in, go to your account settings and click 'Delete my BGA account'."
	},
	{
		.name = "Board Games Online",
		.query = "board games online",
		.url = "https://boardgamesonline.net/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log-in -> My Profile -> Click Profile (Settings Icon) -> Click on Delete Profile. Account will be deleted in about one week."
	},
	{
		.name = "BoardGameGeek",
		.query = "boardgamegeek",
		.url = "https://boardgamegeek.com/geekaccount.php?action=requestdeletion",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log-in and use the link provided to request account deletion."
	},
	{
		.name = "bobatea",
		.query = "bobatea",
		.url = "https://git.boba.best/user/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log-in, go to Settings -> Account then at the bottom you can delete your account."
	},
	{
		.name = "BodBot",
		.query = "bodbot",
		.url = "https://www.bodbot.com/Account_Settings.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the 'Delete My Account' link."
	},
	{
		.name = "Bodybuilding",
		.query = "bodybuilding",
		.url = "https://www.bodybuilding.com/help?account-inquiries&deactivate-account",
		.email = "mailto:privacy@bodybuilding.com",
		.difficulty = 0x2000,
		.notes = "You can only deactivate your account by contacting support as they state on the help page. There is no way to permanently delete your account or data, and an inactive public profile will always be visible to public."
	},
	{
		.name = "Boeing",
		.query = "boeing",
		.url = "https://privacyportal.onetrust.com/webform/7a02e6ee-4433-4d2d-b133-66ab66311d80/7fda90ac-fe12-4a4b-a816-4cb09137423d.html",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form at the link provided and click Submit. Make sure to click Confirm Email in the email they send you."
	},
	{
		.name = "Bohemia Interactive",
		.query = "bohemia interactive",
		.url = "https://support.bohemia.net/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Submit a support ticket to them at the URL and they will send you an email asking to confirm after which the account will be deleted."
	},
	{
		.name = "Boingo Wireless",
		.query = "boingo wireless",
		.url = "https://support.boingo.com/s/contactsupport",
		.email = "mailto:support@boingo.com",
		.difficulty = 0x1000,
		.notes = "Fill the form or send an e-mail to them from the account you want to delete."
	},
	{
		.name = "Bol.com",
		.query = "bolcom",
		.url = "https://www.bol.com/nl/rnwy/account/privacy/delete",
		.email = "mailto:dpo@aholddelhaize.com",
		.difficulty = 0x1000,
		.notes = "Need to request deletion on a page within the account settings. After a few days you receive a link to confirm deletion. You need to be logged in to the account for the confirmation link to be working. Check after 30 days if the account is really removed, as it doesn't always work. If you can't figure it out complain by email, but this process takes even longer."
	},
	{
		.name = "Bolt",
		.query = "bolt",
		.url = "https://bolt.eu/en/support/articles/360000336273/",
		.email = "mailto:privacy@bolt.eu",
		.difficulty = 0x1000,
		.notes = "You will need to contact support team via the app or request account deletion by sending an e-mail to the Data Protection Officer."
	},
	{
		.name = "Bolt Driver",
		.query = "bolt driver",
		.url = "https://bolt.eu/en/support/articles/360000329553/",
		.email = "mailto:privacy@bolt.eu",
		.difficulty = 0x1000,
		.notes = "You will need to contact support team via the app or request account deletion by sending an e-mail to the Data Protection Officer."
	},
	{
		.name = "Bolt Food",
		.query = "bolt food",
		.url = "https://bolt.eu/en/support/articles/360007153180/",
		.email = "mailto:privacy@bolt.eu",
		.difficulty = 0x1000,
		.notes = "You will need to contact support team via the app or request account deletion by sending an e-mail to the Data Protection Officer."
	},
	{
		.name = "Bones Coffee Company",
		.query = "bones coffee company",
		.url = "https://www.bonescoffee.com/pages/contact-us",
		.email = "mailto:Support@BonesCoffee.com ",
		.difficulty = 0x1000,
		.notes = "You will need to contact support team via chat or email to request account deletion."
	},
	{
		.name = "BookBub",
		.query = "bookbub",
		.url = "https://www.bookbub.com/contact/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the contact form to request deletion."
	},
	{
		.name = "Booking",
		.query = "booking",
		.url = "https://secure.booking.com/login.en-us.html?tmpl=profile/delete_account",
		.email = "mailto:privacyrequests@booking.com",
		.difficulty = 0x1000,
		.notes = "There is a button on the site to delete your account, but you will never receive a confirmation email. Instead, you need to email them and request account deletion."
	},
	{
		.name = "Booklooker",
		.query = "booklooker",
		.url = "https://secure.booklooker.de/pages/contact.php",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to request deletion of your data via the contact form after logging in."
	},
	{
		.name = "Bookmark OS",
		.query = "bookmark os",
		.url = "https://bookmarkos.com/privacy_policy",
		.email = "mailto:dave@bookmarkos.com",
		.difficulty = 0x1000,
		.notes = "Send an email and request account deletion."
	},
	{
		.name = "Boostcamp",
		.query = "boostcamp",
		.url = "https://www.boostcamp.app/data-deletion-request",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and confirm the deletion."
	},
	{
		.name = "BOOTH",
		.query = "booth",
		.url = "https://accounts.booth.pm/settings/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your profile page and the \"Delete Account\" button. If you did not set a password, it will ask you to create one before you can delete your account."
	},
	{
		.name = "Boots Viewpoint",
		.query = "boots viewpoint",
		.url = "https://www.bootsviewpoint.co.uk",
		.email = "mailto:claire@bootsviewpoint.co.uk",
		.difficulty = 0x1000,
		.notes = "Have to contact them, email used was claire@bootsviewpoint.co.uk"
	},
	{
		.name = "BorgBase",
		.query = "borgbase",
		.url = "https://www.borgbase.com/account?tab=5",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Remove all your backup repositories, then in the account tab click on profile and on the bottom of the page you'll find a button to remove your account."
	},
	{
		.name = "Borussia Dortmund",
		.query = "borussia dortmund",
		.url = "https://account.bvb.de/s/",
		.email = "mailto:datenschutz@bvb.de?subject=Datenl%C3%B6schung%20gem%C3%A4%C3%9F%20DSGVO&body=Guten%20Tag%2C%0A%0ABitte%20l%C3%B6schen%20Sie%20gem%C3%A4%C3%9F%20DSGVO%20den%20Account%20und%20die%20Daten%20f%C3%BCr%20den%20Account%20mit%20der%20E-Mail%20Adresse%3A%20XXX%0A%0AVielen%20Dank%20und%20mit%20freundlichen%20Gr%C3%BC%C3%9Fen.",
		.difficulty = 0x1000,
		.notes = "Go to 'Account-Einstellungen' and klick 'BVB-Account deaktivieren. Then contact them via mail to get all data deleted."
	},
	{
		.name = "Bountysource",
		.query = "bountysource",
		.url = "https://github.com/bountysource/core/issues/409",
		.email = "mailto:support@bountysource.com",
		.difficulty = 0x1000,
		.notes = "Only possible via e-mail, where they'll (eventually) delete the account."
	},
	{
		.name = "Box",
		.query = "box",
		.url = "https://app.box.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Boxcryptor",
		.query = "boxcryptor",
		.url = "https://www.boxcryptor.com/app/account/delete-account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Braiins",
		.query = "braiins",
		.url = "https://help.braiins.com/en/support/solutions/articles/77000434063-how-can-i-delete-my-account-",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the menu on the top right corner, click 'Account', scroll down and click 'Request Account Deletion'."
	},
	{
		.name = "Brain.fm",
		.query = "brainfm",
		.url = "https://www.brain.fm/privacy",
		.email = "mailto:privacy@brain.fm?subject=Account%20Deletion%20Request",
		.difficulty = 0x1000,
		.notes = "Send an email to their Privacy support address to request account deletion. After a brief exchange with a support representative to confirm your intention, there will be a several-day delay while they process your request, after which your login credentials will stop working."
	},
	{
		.name = "Braintrust",
		.query = "braintrust",
		.url = "https://app.usebraintrust.com/settings/privacy_security/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to Settings -> Privacy & Security -> My Account and click on Delete Account Button. You will receive a confirmation email."
	},
	{
		.name = "Brandpad",
		.query = "brandpad",
		.url = "https://create.brandpad.io/account/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You need to cancel your subscription first, as deleting your account does not automatically unpublish or delete the brands connected to your account. Then on Account-Circle on the top right -> Account -> Delete Account."
	},
	{
		.name = "Brevo",
		.query = "brevo",
		.url = "https://app.brevo.com/settings/advanced",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Brilliant",
		.query = "brilliant",
		.url = "https://brilliant.org/account/settings/deactivate/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Bring!",
		.query = "bring",
		.url = "https://go.getbring.com/?link=https%3A%2F%2Fdeeplink.getbring.com%2Fview%2Fdeleteaccount&apn=ch.publisheria.bring&isi=580669177&ibi=ch.publisheria.bring",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Log in to the account you'd like to delete and click the link on the same device."
	},
	{
		.name = "British Airways",
		.query = "british airways",
		.url = "https://naprepin.custhelp.com/app/answers/detail/a_id/770/~/cancelling-your-executive-club-membership",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Must send a request in writing. See [this page](https://www.britishairways.com/travel/contact-executive-club/execclub/_gf/en_us) for contact details."
	},
	{
		.name = "Broadcom Support",
		.query = "broadcom support",
		.url = "https://knowledge.broadcom.com/external/article/368293/deleting-or-removing-broadcom-support-ac.html",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to send a request to the support"
	},
	{
		.name = "BrowserStack",
		.query = "browserstack",
		.url = "https://www.browserstack.com/accounts/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down and click on the \"Delete Account\" button, then enter 'delete' into the dialog and confirm."
	},
	{
		.name = "Brut",
		.query = "brut",
		.url = "https://www.brut.media/us/terms",
		.email = "mailto:support-web@brut.media",
		.difficulty = 0x1000,
		.notes = "Contact the customer support via email and request the deletion of your account."
	},
	{
		.name = "BrutX",
		.query = "brutx",
		.url = "https://help.brutx.com/hc/fr/articles/360020090299",
		.email = "mailto:bonjour@brutx.com",
		.difficulty = 0x1000,
		.notes = "Contact the customer support via email and request the deletion of your account."
	},
	{
		.name = "Bruun-rasmussen.dk",
		.query = "bruunrasmussendk",
		.url = "https://bruun-rasmussen.dk/m/about/privacy",
		.email = "mailto:privacy@bruun-rasmussen.dk?subject=Request%20for%20the%20deletion%20of%20personal%20information&body=I%20would%20like%20to%20request%20the%20deletion%20of%20my%20personal%20information%20as%20allowed%20per%20your%20privacy%20policy.%20My%20customer%20number%20is%20XXXXXXX.%20Thank%20you",
		.difficulty = 0x1000,
		.notes = "Contact customer support to request account deletion."
	},
	{
		.name = "Bubbl.us",
		.query = "bubblus",
		.url = "https://help.bubbl.us/article/110-remove-my-account",
		.email = "mailto:support@bubbl.us",
		.difficulty = 0x1000,
		.notes = "You need to contact support and request account deletion, but the address listed on the help page is incorrect. You need to send an email to the address listed below."
	},
	{
		.name = "Buddy UniCredit",
		.query = "buddy unicredit",
		.url = "https://www.buddyunicredit.it",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "From the app, contact the support chat and request to close your account, then follow the procedure."
	},
	{
		.name = "Buffer",
		.query = "buffer",
		.url = "https://bufferapp.com/app/account/leave",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Builder.io",
		.query = "builderio",
		.url = "https://builder.io/spaces",
		.email = "mailto:support@builder.io?subject=Account%20Deletion%20Request%20and%20Data%20Erasure&body=Dear%20Builder.io%20Support%20Team%2C%20I%20am%20requesting%20the%20deletion%20of%20my%20account%20and%20all%20associated%20personal%20data%20in%20accordance%20with%20your%20Privacy%20Policy%20and%20GDPR.%20Below%20are%20my%20account%20details%3A%20Account%20Email%3A%20XXXX%20Account%20Name%3A%20XXXX%20Please%20ensure%20the%20permanent%20removal%20of%20my%20data%20from%20your%20systems%20and%20any%20third-party%20services.%20Kindly%20confirm%20once%20this%20has%20been%20completed.",
		.difficulty = 0x1000,
		.notes = "Either you can write them a support ticket from their built-in application under the question mark or write them a mail."
	},
	{
		.name = "Buildspace",
		.query = "buildspace",
		.url = "https://buildspace.so",
		.email = "mailto:support@buildspace.so?subject=Account%20Delection%20Request",
		.difficulty = 0x1000,
		.notes = "Email support@buildspace.so requesting to delete your account."
	},
	{
		.name = "BuiltByBit",
		.query = "builtbybit",
		.url = "https://builtbybit.com/account/removal",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login -> Account Details -> Settings -> Account Removal -> Delete account"
	},
	{
		.name = "Bukalapak",
		.query = "bukalapak",
		.url = "https://www.bukalapak.com",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Open Akun (Account)->BukaBantuan (Open Help)->In Akun & Info Personal (Account & Personal Info), tap Selanjutnya (Next)->Tap Menonaktifkan Akun (Disable Account)->Tap Isi Form Bantuan (Type on Help Form)->Explain the reason why you delete it->Tap Kirim (Send)."
	},
	{
		.name = "Bukkit",
		.query = "bukkit",
		.url = "https://bukkit.org",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Message an [administrator](https://bukkit.org/XenStaff/') ([timtower](https://bukkit.org/members/timtower.87695/) is the most active) and tell them you want your account deleted, and they will tell you it will be done when it's possible.\n So deletion of an account is not an option."
	},
	{
		.name = "Bungie.net",
		.query = "bungienet",
		.url = "https://help.bungie.net/hc/requests/new",
		.email = "mailto:privacyrequests@bungie.com",
		.difficulty = 0x1000,
		.notes = "Send an email or fill out either the \"GDPR Request\" or \"Right to Know or Delete\" form."
	},
	{
		.name = "BurstNET",
		.query = "burstnet",
		.url = "http://burst.net",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Support staff refuses to delete accounts due to 'accounting purposes'"
	},
	{
		.name = "Buser",
		.query = "buser",
		.url = "https://www.buser.com.br/ajuda/conta-e-dados",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click in 'Perfil' on the right side top and click on 'Editar perfil'. At the bottom of the page click on 'Opções Avançadas' and click on 'Deletar minha conta'."
	},
	{
		.name = "Busuu",
		.query = "busuu",
		.url = "https://www.busuu.com/dashboard#/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the 'Delete my account' button at the bottom of the page, then confirm you'd like to delete your account"
	},
	{
		.name = "Buy Me a Coffee",
		.query = "buy me a coffee",
		.url = "https://www.buymeacoffee.com/terms",
		.email = "mailto:support@buymeacoffee.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Buycott",
		.query = "buycott",
		.url = "https://www.buycott.com",
		.email = "mailto:info@buycott.com",
		.difficulty = 0x1000,
		.notes = "To cancel your account you have to send them an email"
	},
	{
		.name = "Buycraft",
		.query = "buycraft",
		.url = "https://server.tebex.io",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Buycraft was moved to Tebex, contact customer support to request account deletion"
	},
	{
		.name = "ByDoor",
		.query = "bydoor",
		.url = "https://portal.bydoor.com/meusdados",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Login, head to your account details, scroll to the bottom and click to deactivate your account. The text states it will remove all of your data, but after confirming on the e-mail, it's just deactivated and can be reactivated later."
	},
	{
		.name = "C&M News by Rеss.at",
		.query = "cm news by rеssat",
		.url = "https://ress.at/profil/profil_entfernen.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Just click 'Abschicken'"
	},
	{
		.name = "CA Cert",
		.query = "ca cert",
		.url = "http://wiki.cacert.org/FAQ/AccountRemoval",
		.email = "mailto:support@cacert.org",
		.difficulty = 0x1000,
		.notes = "Support have to be emailed with a request and it may be months before the account is deleted, depending on circumstance."
	},
	{
		.name = "Cabify",
		.query = "cabify",
		.url = "https://cabify.com",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Login and go to Contact us -> My Account, payment method, and invoices -> I want to delete my account. Write a message and it will create a ticket."
	},
	{
		.name = "Cacoo",
		.query = "cacoo",
		.url = "https://cacoo.com/unsubscribe",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "CafePress",
		.query = "cafepress",
		.url = "https://www.cafepress.com/account/close-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Visit the linked page and close your account, then contact customer service and ask to have your personal information deleted."
	},
	{
		.name = "CakeReader",
		.query = "cakereader",
		.url = "https://cakereader.com/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = NULL
	},
	{
		.name = "Call of Duty Mobile",
		.query = "call of duty mobile",
		.url = "https://support.activision.com/privacy",
		.email = "mailto:privacy@activision.com",
		.difficulty = 0x1000,
		.notes = "Must put in a request, via a ticket system, while logged in to the account (to verify the identity of the account owner). You may also need to install and log into the game to get PlayerID/UID/PrivacyID needed for account deletion."
	},
	{
		.name = "Calligraphr",
		.query = "calligraphr",
		.url = "https://www.calligraphr.com/en/profile/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Press 'DELETE MY ACCOUNT' then press 'DELETE MY ACCOUNT' again."
	},
	{
		.name = "CamelCamelCamel",
		.query = "camelcamelcamel",
		.url = "https://camelcamelcamel.com/close_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account first. Confirm by ticking both boxes, 'I want to close my Camel account.' and 'I’m really sure!', and click 'Close Account'."
	},
	{
		.name = "CamScanner",
		.query = "camscanner",
		.url = "https://www.camscanner.com/",
		.email = "mailto:support@camscanner.com",
		.difficulty = 0x1000,
		.notes = "Either e-mail them requesting deletion or download the app, cancel the premium subscription, go to the bottom menu, account, tap the account name and click \"Permanently delete/cancel an account\". This will delete all data you have stored too."
	},
	{
		.name = "Canva",
		.query = "canva",
		.url = "https://www.canva.com/settings/login-and-security",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the page click on the button that says 'Delete account.' There will be a 14 day waiting period, after this period, all your account data will be deleted."
	},
	{
		.name = "Capcut",
		.query = "capcut",
		.url = "https://www.capcut.com/settings?current_page=landing_page&enter_from=click_view_personal_page&from_page=personal_page&start_tab=video&settings_tab=info_page",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In the 'Delete Account' section of the 'Account settings', click the red colored 'Ok' button. After 30 Days your account will be deleted."
	},
	{
		.name = "Capsule",
		.query = "capsule",
		.url = "https://www.capsule.com/privacy",
		.email = "mailto:privacy@capsule.com",
		.difficulty = 0x1000,
		.notes = "Contact support by email or by phone at 1-888-910-1808 and request that your account be deleted. Your request can be denied if you still have an active service or transaction with them."
	},
	{
		.name = "Captain.tv",
		.query = "captaintv",
		.url = "https://streamcaptain.zendesk.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Send a request using the 'Account Deletion' type"
	},
	{
		.name = "Car2Go",
		.query = "car2go",
		.url = "https://www.car2go.com/US/en/contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to call customer support and even after that can take weeks before confirmation of deletion"
	},
	{
		.name = "Carbonmade",
		.query = "carbonmade",
		.url = "https://carbonmade.app/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "When logged in, use the link to be taken to the deletion page."
	},
	{
		.name = "CardCastle",
		.query = "cardcastle",
		.url = "https://cardcastle.co/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Navigate to Settings and select 'delete account?'."
	},
	{
		.name = "CareerBuilder.com",
		.query = "careerbuildercom",
		.url = "https://www.careerbuilder.com/User/UserConfirmation.aspx",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Must remove uploaded files first"
	},
	{
		.name = "Carrd.co",
		.query = "carrdco",
		.url = "https://carrd.co/dashboard/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Just enter password and confirm deletion!"
	},
	{
		.name = "Cars Région Isère",
		.query = "cars region isere",
		.url = "https://carsisere.auvergnerhonealpes.fr/fr/mon-espace/159/Member/editprofile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your profile settings, scroll down and click on \"Delete my account\", then confirm by clicking on \"Delete my subscription\"."
	},
	{
		.name = "Cars Région Savoie / Altibus",
		.query = "cars region savoie altibus",
		.url = "https://www.cars-region-savoie.fr/suggestions-reclamations/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to contact the support to delete your account."
	},
	{
		.name = "Cash'em All",
		.query = "cashem all",
		.url = "https://cashemall.online/legal/v1/privacy/online.cashemall.app",
		.email = "mailto:contact@cashemall.online",
		.difficulty = 0x800,
		.notes = "Go to settings in the profile page, then click \"Cancel Membership\" and confirm the email. You can also request the deletion via email."
	},
	{
		.name = "Cash'em All Web",
		.query = "cashem all web",
		.url = "https://cashem-all.com/profile",
		.email = "mailto:contact@appstation.online",
		.difficulty = 0x800,
		.notes = "Go to settings in the profile page, then click \"Delete account\" and confirm the email. You can also request the deletion via email."
	},
	{
		.name = "Castbox",
		.query = "castbox",
		.url = "https://helpcenter.castbox.fm/portal/en/kb/articles/delete-account",
		.email = "mailto:contact@castbox.fm?body=Please%20delete%20my%20account.%20I%20use%20XXX%20to%20sign%20in.%20My%20email%20address%20is%20XXX.",
		.difficulty = 0x1000,
		.notes = "You must request account deletion by email. Include what method you use to sign in (Google, Twitter or Facebook, etc.) and your email address. If you have their Android app, visit the linked page for instructions on how to delete your account yourself."
	},
	{
		.name = "Catappult ",
		.query = "catappult",
		.url = "https://developers.catappult.io/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to Manage Users Access section, click Request account deletion."
	},
	{
		.name = "Catawiki",
		.query = "catawiki",
		.url = "https://www.catawiki.com/en/accounts/pre_delete_account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Go to the profile icon in the top right corner and click \"Settings\", scroll down and click \"Continue\" under \"Delete my account\", and \"Confirm\". Then confirm the deletion from your email."
	},
	{
		.name = "CATME",
		.query = "catme",
		.url = "https://info.catme.org/student-faq/can-i-delete-my-student-account/",
		.email = "mailto:support@catme.org",
		.difficulty = 0x2000,
		.notes = "Contact support to request account deactivation. Accounts cannot be deleted by CATME, but your instructor/s may be able to anonymize your data."
	},
	{
		.name = "CBC",
		.query = "cbc",
		.url = "https://cbchelp.cbc.ca/hc/en-ca/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Go to the link and make a request about deleting your account. Account deletion can take up to 30 days."
	},
	{
		.name = "CCMA (TV3 i CatRàdio)",
		.query = "ccma tv3 i catradio",
		.url = "https://registreusuari.ccma.cat/usuaris/baixa",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "cda",
		.query = "cda",
		.url = "https://www.cda.pl/kontakt",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to contact with support"
	},
	{
		.name = "CDEK Forward",
		.query = "cdek forward",
		.url = "https://global.cdek.ru",
		.email = "mailto:mf@cdek.ru?subject=%D0%A3%D0%B4%D0%B0%D0%BB%D0%B5%D0%BD%D0%B8%D0%B5%20%D0%B0%D0%BA%D0%BA%D0%B0%D1%83%D0%BD%D1%82%D0%B0&body=%D0%97%D0%B4%D1%80%D0%B0%D0%B2%D1%81%D1%82%D0%B2%D1%83%D0%B9%D1%82%D0%B5.%20%D0%9F%D0%BE%D0%B6%D0%B0%D0%BB%D1%83%D0%B9%D1%81%D1%82%D0%B0%2C%20%D1%83%D0%B4%D0%B0%D0%BB%D0%B8%D1%82%D0%B5%20%D0%BC%D0%BE%D0%B9%20%D0%B0%D0%BA%D0%BA%D0%B0%D1%83%D0%BD%D1%82%20%D0%BD%D0%B0%20CDEK%20Forward.",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "CDKeys",
		.query = "cdkeys",
		.url = "https://www.cdkeys.com/user/profile/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Use the delete account button at the bottom of the page"
	},
	{
		.name = "CDON.COM",
		.query = "cdoncom",
		.url = "https://help.cdon.com/hc/sv/articles/360022459751-Hur-tar-jag-bort-mitt-konto-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact customer service via the support e-mail form and request deletion of your account under General Questions."
	},
	{
		.name = "CEEOL",
		.query = "ceeol",
		.url = "https://www.cdkeys.com/user/profile/",
		.email = "mailto:info@ceeol.com",
		.difficulty = 0x2000,
		.notes = "To request account cancellation & remove your personal information, please email them. Note: CEEOL will retain and use your information as necessary to comply with their legal obligations, resolve disputes, and enforce their agreements."
	},
	{
		.name = "Celcoin",
		.query = "celcoin",
		.url = "https://celcoin.com.br",
		.email = "mailto:contato@celcoin.com.br",
		.difficulty = 0x1000,
		.notes = "Contact the customer support via email and request the deletion of your account. In order for them to identify your account, include your full name and Tax ID in your request."
	},
	{
		.name = "celio",
		.query = "celio",
		.url = "https://www.celio.com/fr-fr/contactus",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Send a customer service request asking to delete your account."
	},
	{
		.name = "Cengage",
		.query = "cengage",
		.url = "https://cengage.my.site.com/s/rtbf",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Complete the \"Privacy Rights Request Form\" for the \"Right to Delete/Right to be Forgotten\". Otherwise, the account will automatically be deleted after 5 years of inactivity (or 1 year for minors)."
	},
	{
		.name = "Certiport",
		.query = "certiport",
		.url = "https://www.certiport.com/portal/Pages/ModifyProfile.aspx",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In your profile preferences, click in 'Delete My Account' then confirm."
	},
	{
		.name = "CEX.IO",
		.query = "cexio",
		.url = "https://support.cex.io/",
		.email = "mailto:support@cex.io?subject=Delete%20Account",
		.difficulty = 0x1000,
		.notes = "You can't delete your account without contacting them. You must set the subject to 'Delete Account'"
	},
	{
		.name = "Cfx.re",
		.query = "cfxre",
		.url = "https://support.cfx.re/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to send a support request. The button in your forum profile page leads you to that."
	},
	{
		.name = "cgtrader",
		.query = "cgtrader",
		.url = "https://help.cgtrader.com/hc/en-us/articles/4402420280081-How-can-I-delete-my-account-",
		.email = "mailto:support@cgtrader.com",
		.difficulty = 0x1000,
		.notes = "Request account removal by sending an email to them requesting for account deletion. Personal data will be stored for 2 years after your last login"
	},
	{
		.name = "Challonge",
		.query = "challonge",
		.url = "https://challonge.com/settings/delete_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Chamonix Mobilité",
		.query = "chamonix mobilite",
		.url = "https://www.chamonix-mobilite.com/en/nous-contacter",
		.email = "mailto:assistance@secureticket.fr?subject=Suppression%20de%20compte&body=%20Je%20demande%20la%20suppression%20de%20mon%20compte%20Chamonix%20Mobilit%C3%A9",
		.difficulty = 0x1000,
		.notes = "You need to contact support through email to delete your account."
	},
	{
		.name = "Change.org",
		.query = "changeorg",
		.url = "https://www.change.org/policies/privacy",
		.email = "mailto:help@change.org",
		.difficulty = 0x1000,
		.notes = "Send an email from the address you registered with asking to have your account deleted. You will need to answer to some questions about your account."
	},
	{
		.name = "ChangeIP",
		.query = "changeip",
		.url = "https://www.changeip.com/tos.php#:~:text=Account%20Cancellation",
		.email = "mailto:support@changeip.com",
		.difficulty = 0x1000,
		.notes = "All requests for canceling accounts must be made via email or by opening a support ticket from the client area. It may take up to 7 days to be processed. You must have all account information to cancel."
	},
	{
		.name = "changelly",
		.query = "changelly",
		.url = "https://changelly.com/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'Delete account' under 'Email settings'"
	},
	{
		.name = "character.ai",
		.query = "characterai",
		.url = "https://beta.character.ai/settings/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom of the settings page on your profile and click ”Remove Account“, then insert your username and choose whether you want to export your data while deleting it or not."
	},
	{
		.name = "ChatForma",
		.query = "chatforma",
		.url = "https://www.chatforma.com/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = NULL
	},
	{
		.name = "Cheap Ass Gamer",
		.query = "cheap ass gamer",
		.url = "https://www.cheapassgamer.com/index.php?app=core&module=help&do=01&HID=15",
		.email = "mailto:cheapyd@cheapassgamer.com",
		.difficulty = 0x1000,
		.notes = "Please email cheapyd@cheapassgamer.com from your account on file with CAG."
	},
	{
		.name = "Check24 Deutschland",
		.query = "check24 deutschland",
		.url = "https://kundenbereich.check24.de/user/account/data.html",
		.email = "mailto:datenloeschung@check24.de?subject=Vollst%C3%A4ndige%20L%C3%B6schung%20meiner%20Daten&body=Sehr%20geehrte%20Damen%20und%20Herren%2C%20ich%20habe%20vor%20kurzem%20mein%20CHECK24-Konto%20gel%C3%B6scht.%20Ich%20bitte%20Sie%20jedoch%2C%20sicherzustellen%2C%20dass%20alle%20meine%20Daten%20vollst%C3%A4ndig%20aus%20dem%20System%20von%20CHECK24%20sowie%20aus%20dem%20gesamten%20Verbund%20entfernt%20werden.%20Die%20betreffende%20E-Mail-Adresse%20lautet%3A%20%27your.mail%40address.tld%27%20Ich%20danke%20Ihnen%20im%20Voraus%20f%C3%BCr%20Ihre%20Unterst%C3%BCtzung%20und%20bitte%20um%20eine%20Best%C3%A4tigung%20der%20L%C3%B6schung.%20Mit%20freundlichen%20Gr%C3%BC%C3%9Fen%20%27Your%20name%27",
		.difficulty = 0x1000,
		.notes = "Go to the provided link, click on 'Kundenkonto entfernen', tick the checkbox for confirmation, and then click 'Entfernen'. After that, you will need to write an additional email to support to request the deletion of the rest of your data from their systems."
	},
	{
		.name = "Checklist",
		.query = "checklist",
		.url = "https://api.checklist.com/account/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in and go to your account. Scroll to 'Close your account' and click on 'Close Account'. Confirm by clicking on 'Yes' in the pop-up window. The account will be deleted immediately."
	},
	{
		.name = "Checksub",
		.query = "checksub",
		.url = "https://www.checksub.com",
		.email = "mailto:team@checksub.com",
		.difficulty = 0x1000,
		.notes = "Contact the customer support to delete your account."
	},
	{
		.name = "Cheezburger",
		.query = "cheezburger",
		.url = "https://cheezburgernetwork.wordpress.com/faq/#q14",
		.email = "mailto:contactus@cheezburger.com?subject=Request%20to%20delete%20account&body=Please%20delete%20my%20Cheezburger%20account%20with%20username%20XXXX%20and%20e-mail%20XXXX%2C%20the%20reason%20for%20my%20request%20is%20XXXX",
		.difficulty = 0x1000,
		.notes = "Write them an e-mail with your user name and email address attached to the account, along with the reason why you wish to delete the account."
	},
	{
		.name = "Chegg",
		.query = "chegg",
		.url = "https://www.chegg.com/contactus",
		.email = "mailto:closemyaccount@chegg.com",
		.difficulty = 0x1000,
		.notes = "To close your account, contact support with the email listed, call/message (408)-351-0942, or request assistance via their twitter [@CheggHelp](https://twitter.com/chegghelp). For data deletion, click [here](https://privacyportal-cdn.onetrust.com/dsarwebform/a21a74f4-2f93-44a2-a887-302a9213c997/06b040b7-49eb-464a-b19a-ea35c85c79fc.html)."
	},
	{
		.name = "Chemaxon",
		.query = "chemaxon",
		.url = "https://account.chemaxon.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked page and delete your account."
	},
	{
		.name = "Chess.com",
		.query = "chesscom",
		.url = "https://www.chess.com/my-data",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Enter your email, do the CAPTCHA and click \"Show my data\". Scroll to the bottom, enter your username, and click \"Delete\". Any comments and public posts must be deleted individually before deleting your account."
	},
	{
		.name = "Chessable",
		.query = "chessable",
		.url = "https://www.chessable.com/settings/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Once you submit your account for deletion, your account (and all data associated with it, including your purchased content) will be scheduled for deletion in compliance with the applicable legislation."
	},
	{
		.name = "Chessfactor",
		.query = "chessfactor",
		.url = "https://www.chessfactor.com/accounts/delete/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Chesspuzzle.net",
		.query = "chesspuzzlenet",
		.url = "https://chesspuzzle.net/Manage/RequestDeletion",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Chewy",
		.query = "chewy",
		.url = "https://www.chewy.com/app/account/privacy",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login -> Account -> Settings -> Privacy Preferences -> Continue to Delete"
	},
	{
		.name = "Chick-fil-A",
		.query = "chickfila",
		.url = "https://privacyportal.onetrust.com/webform/63dc78c7-5612-4181-beae-47dead0569ee/01252c81-82df-4db5-9cb8-bf23a62a9a55",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the provided [privacy web form](https://privacyportal.onetrust.com/webform/63dc78c7-5612-4181-beae-47dead0569ee/01252c81-82df-4db5-9cb8-bf23a62a9a55), send an email to mailto:privacy@chick-fil-a.com, or call 1-866-232-2040."
	},
	{
		.name = "Chocolatey",
		.query = "chocolatey",
		.url = "https://chocolatey.org/contact/general",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Visit the link, select the section \"General\" and fill out the form, in which request the deletion of your account."
	},
	{
		.name = "Cineplex",
		.query = "cineplex",
		.url = "https://www.cineplex.com/Global/PrivacyPolicy",
		.email = "mailto:privacy@cineplex.com",
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "CircleCI",
		.query = "circleci",
		.url = "https://privacy.circleci.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and click 'Make a Privacy Request', and then 'Delete all my data'. Enter your email address. You will receive an email; In that email, click 'Log in', and then 'Confirm Request'. More info [here](https://support.circleci.com/hc/en-us/articles/360037058873)."
	},
	{
		.name = "Cisco",
		.query = "cisco",
		.url = "https://privacyrequest.cisco.com/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill in the fields on the form, confirm the request in your email and then wait for their privacy team to respond."
	},
	{
		.name = "Citadel Servers",
		.query = "citadel servers",
		.url = "https://citadelservers.com",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Open a ticket with their billing department to request removal."
	},
	{
		.name = "Classmates",
		.query = "classmates",
		.url = "https://secure.classmates.com/auth/removemember",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Provide a reason by selecting a radio button and select 'Remove Registration'."
	},
	{
		.name = "ClassPass",
		.query = "classpass",
		.url = "https://classpass.com/settings/membership",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can deactivate your account from settings but not entirely delete the account itself."
	},
	{
		.name = "Classy",
		.query = "classy",
		.url = "https://preferences.gofundme.com/form/deletion",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Fill out the form and submit the request to delete your account and data. If you need to change the country of residence, click on the 'Back to Privacy Request Center' link, change your country of origin, then return to the form and submit. After, you will receive an email to the listed address containing a link that you must click to confirm the email address and finish the process."
	},
	{
		.name = "Claude",
		.query = "claude",
		.url = "https://claude.ai/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "just click the 'Delete Account' button"
	},
	{
		.name = "CleverReach",
		.query = "cleverreach",
		.url = "https://www.cleverreach.com",
		.email = "mailto:info@cleverreach.de",
		.difficulty = 0x1000,
		.notes = "Email customer services to request deletion"
	},
	{
		.name = "ClevGuard",
		.query = "clevguard",
		.url = "https://www.clevguard.com/account-faq/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Site currently does not allow for accounts to be deleted."
	},
	{
		.name = "ClickUp",
		.query = "clickup",
		.url = "https://app.clickup.com/settings/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom of the page and click the \"Delete Account\" button."
	},
	{
		.name = "Clipchamp",
		.query = "clipchamp",
		.url = "https://app.clipchamp.com/account/general",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom and click \"Delete your account\"."
	},
	{
		.name = "Clippings.io",
		.query = "clippingsio",
		.url = "https://my.clippings.io/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and click \"Delete Account\""
	},
	{
		.name = "Clockify",
		.query = "clockify",
		.url = "https://app.clockify.me/user/settings/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Cloud Convert",
		.query = "cloud convert",
		.url = "https://cloudconvert.com/delete#",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the dashboard -> account -> details, and fill your username and password. The account is deleted after 72 hours."
	},
	{
		.name = "CloudApp",
		.query = "cloudapp",
		.url = "https://share.getcloudapp.com/dashboard",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page. Click your name in the top right corner, then click 'Settings'. In the left column, select 'Account Details' and click the red 'Remove account' button."
	},
	{
		.name = "Cloudflare",
		.query = "cloudflare",
		.url = "https://dash.cloudflare.com/profile/delete-user",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You must have no domains, add-ons, payment methods or ongoing investigations attached to your account prior to account deletion."
	},
	{
		.name = "CloudMagic",
		.query = "cloudmagic",
		.url = "https://cloudmagic.com/a/v2/preferences",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "CNET Download",
		.query = "cnet download",
		.url = "https://cbsi.secure.force.com/CBSi/submitcase?template=template_cnet&referer=cnet.com&cfs=SFS_1",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to ask the support to get your account deleted. Choose the category CNET Registration"
	},
	{
		.name = "CNIL",
		.query = "cnil",
		.url = "https://www.cnil.fr/en/contact-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to contact them in order to ask to delete your account."
	},
	{
		.name = "CNN",
		.query = "cnn",
		.url = "https://www.cnn.com/account/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down to the bottom of the page and click 'Delete Account'"
	},
	{
		.name = "Cocoleech",
		.query = "cocoleech",
		.url = "https://members.cocoleech.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to [your profile](https://members.cocoleech.com/settings) and press 'Delete Account'."
	},
	{
		.name = "Coda",
		.query = "coda",
		.url = "https://coda.io/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click \"Advanced Settings\" on the bottom of the page and the option to delete your account should appear"
	},
	{
		.name = "Code Red",
		.query = "code red",
		.url = "https://cne.coderedweb.com",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can't delete yourself. You can only change your phone nr. to a bogus number."
	},
	{
		.name = "Codeanywhere",
		.query = "codeanywhere",
		.url = "https://codeanywhere.com/dashboard",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login then click Delete Account button and enter your password."
	},
	{
		.name = "Codeberg",
		.query = "codeberg",
		.url = "https://codeberg.org/user/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log into your account, go to settings -> account and type in your password to delete your account."
	},
	{
		.name = "Codecademy",
		.query = "codecademy",
		.url = "https://www.codecademy.com/account/delete_acct",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Simply click the \"I understand, delete my account.\" button."
	},
	{
		.name = "CodeChef",
		.query = "codechef",
		.url = "https://discuss.codechef.com/t/how-do-i-delete-a-codechef-account/30476",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Navigate to the Privacy tab in your edit profile section. Scroll all the way down and click on \"I don’t want to continue with CodeChef\". Alternatively login to codechef and visit \"https://www.codechef.com/users/<username>/discontinue\", after substituting in your username."
	},
	{
		.name = "Codeforces",
		.query = "codeforces",
		.url = "https://codeforces.com/blog/entry/69245",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can't delete your account yet. The feature is being worked on and might become available in the future."
	},
	{
		.name = "Codeium",
		.query = "codeium",
		.url = "https://codeium.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down and press the 'delete your account' button."
	},
	{
		.name = "CodePen",
		.query = "codepen",
		.url = "https://blog.codepen.io/documentation/faq/how-do-i-delete-my-account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "CodeProject",
		.query = "codeproject",
		.url = "https://www.codeproject.com/script/Membership/Modify.aspx",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Beneath the gravatar image, check the 'Close my account' checkbox. Then click on 'Save my Settings'."
	},
	{
		.name = "CoderByte",
		.query = "coderbyte",
		.url = "https://coderbyte.com/privacy#:~:text=You%20may%20also%20delete%20your,detailed%20in%20this%20Privacy%20Policy.",
		.email = "mailto:support@coderbyte.com",
		.difficulty = 0x1000,
		.notes = "You can only delete your account by emailing their support team. Certain activity data may remain stored and may be shared with third parties."
	},
	{
		.name = "CodersRank",
		.query = "codersrank",
		.url = "https://profile.codersrank.io/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down to the bottom of the \"Account settings\" page to the \"Danger Zone\" section and click on \"Delete your account\""
	},
	{
		.name = "Coderwall",
		.query = "coderwall",
		.url = "https://coderwall.com/delete_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Sign in then visit [https://coderwall.com/delete_account](https://coderwall.com/delete_account)"
	},
	{
		.name = "CodeSignal",
		.query = "codesignal",
		.url = "https://app.codesignal.com/account/username-password",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Sign in, visit the provided link and press delete profile"
	},
	{
		.name = "Codetasty",
		.query = "codetasty",
		.url = "https://codetasty.com/settings/security",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in, press the url, press 'Deactivate Account' which will disable your account for some time and then permanently delete"
	},
	{
		.name = "Codewars",
		.query = "codewars",
		.url = "https://www.codewars.com/users/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your 'Account Settings' and scroll to the bottom to find the 'Delete Account' section"
	},
	{
		.name = "Codingame",
		.query = "codingame",
		.url = "https://www.codingame.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your 'Settings' and scroll to the bottom to find the 'Danger Zone' section. However, the source code one has published will be kept in the system with a GPLv3 license."
	},
	{
		.name = "CoffeeCup",
		.query = "coffeecup",
		.url = "https://www.coffeecup.com/contact/",
		.email = "mailto:helpme@coffeecup.com?subject=Account%20Deletion%20Request%20and%20Data%20Erasure&body=Dear%20CoffeeCup%20Support%20Team%2C%20I%20am%20requesting%20the%20deletion%20of%20my%20account%20and%20all%20associated%20personal%20data%20in%20accordance%20with%20your%20Privacy%20Policy%20and%20GDPR.%20Below%20are%20my%20account%20details%3A%20Account%20Email%3A%20XXXX%20Title%3A%20XXXX%20Please%20ensure%20the%20permanent%20removal%20of%20my%20data%20from%20your%20systems%20and%20any%20third-party%20services.%20Kindly%20confirm%20once%20this%20has%20been%20completed.",
		.difficulty = 0x1000,
		.notes = "You need to contact them via email. They usually reply quickly."
	},
	{
		.name = "Cohost",
		.query = "cohost",
		.url = "https://cohost.org/rc/user/settings",
		.email = "mailto:support@cohost.org",
		.difficulty = 0x400,
		.notes = "Click settings on the left, scroll to the bottom of the page, confirm your email address and password, and wait for 3 days. Accounts can be deleted faster than the default 3 days by emailing Cohost."
	},
	{
		.name = "Coin",
		.query = "coin",
		.url = "https://support.coinapp.co/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact them via ticketing system and ask for account to be deleted"
	},
	{
		.name = "Coinbase",
		.query = "coinbase",
		.url = "https://www.coinbase.com/settings/privacy-rights",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Sign in then visit [their website](https://www.coinbase.com/settings/privacy-rights) and request the deletion of all of your data. You will then be directed to [their account activity page](https://www.coinbase.com/settings/account_activity) where you must close your account after withdrawing all funds."
	},
	{
		.name = "CoinBR/Stratum",
		.query = "coinbrstratum",
		.url = "https://stratum.hk/support",
		.email = "mailto:support@stratum.hk?subject=%5B%20Permanently%20Account%20Deletion%20Request%20%5D&body=I%20have%20no%20further%20interest%20in%20using%20the%20services%20provided%20by%20Stratum%2C%20so%20I%20would%20like%20my%20account%20to%20be%20permanently%20deleted.",
		.difficulty = 0x1000,
		.notes = "Contact the customer support via email and request the deletion of your account. In order for them to identify your account, make the request through the same email address that you have used to create your CoinBR/Stratum account."
	},
	{
		.name = "CoinGecko",
		.query = "coingecko",
		.url = "https://support.coingecko.com/hc/en-us/articles/4537981325977-How-can-I-delete-my-account-",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You can delete your CoinGecko account directly from the website by clicking the 'Profile' icon -> 'Login' and 'Security'. At the 'Login and Security' page, please click on 'Delete my account' to proceed with account deletion"
	},
	{
		.name = "CoinMarketCap",
		.query = "coinmarketcap",
		.url = "https://coinmarketcap.com/community/edit-profile/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "CoinMarketCap provides a button to automatically request account deletion. The account deletion process is said to take up to 21 days."
	},
	{
		.name = "CoinPayments",
		.query = "coinpayments",
		.url = "https://www.coinpayments.net/help-support",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "According to their own policy, accounts can never be deleted."
	},
	{
		.name = "CoinSpot",
		.query = "coinspot",
		.url = "https://coinspot.zendesk.com/hc/en-us/articles/360001328796-Closing-your-Account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Once you have removed all wallet balances, you need to create a ticket. "
	},
	{
		.name = "Cointree",
		.query = "cointree",
		.url = "https://cointree.formstack.com/forms/account_closure_request",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Complete the form and wait for their support to delete the account."
	},
	{
		.name = "Collegeboard",
		.query = "collegeboard",
		.url = "https://pages.collegeboard.org/account-help/how-do-i-delete-my-account",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can't delete your College Board account, but you can close it by calling their customer service at 866-315-6068"
	},
	{
		.name = "Comment ça marche",
		.query = "comment ca marche",
		.url = "https://auth.ccm.net/user/delete_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Your messages will remain on the forums."
	},
	{
		.name = "commiss.io",
		.query = "commissio",
		.url = "https://commiss.io/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = NULL
	},
	{
		.name = "Commun",
		.query = "commun",
		.url = "https://commun.it/content/cancel_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Compiled",
		.query = "compiled",
		.url = "https://cosoc.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Enter your user settings and select \"Delete Account,\" and \"Delete\" when prompted again. This is irreversible."
	},
	{
		.name = "Computeruniverse",
		.query = "computeruniverse",
		.url = "https://www.computeruniverse.net/en/page/computeruniverse-privacy-policy#hbmpp-toc-III-4",
		.email = "mailto:computeruniverse@datenschutzanfrage.de",
		.difficulty = 0x1000,
		.notes = "You need to email them to request deletion of your data."
	},
	{
		.name = "Contabo",
		.query = "contabo",
		.url = "https://help.contabo.com/en/support/solutions/articles/103000269314-how-can-i-close-my-contabo-account-or-cancel-a-contabo-service-",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "The account will be deleted automatically shortly after the last product on the account itself is canceled."
	},
	{
		.name = "Conte.it",
		.query = "conteit",
		.url = "https://www.conte.it/privacy-unsubscribe/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Fill out the form to request cancellation from Conte.it's insurance services."
	},
	{
		.name = "Cook It",
		.query = "cook it",
		.url = "https://www.chefcookit.com/unsubscribe",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "It is only possible to permanently disable the automatic subscription fee. Doing so will also set your stars back to 0."
	},
	{
		.name = "Cool Shirtz",
		.query = "cool shirtz",
		.url = "https://shirtz.cool/pages/store-policies",
		.email = "mailto:help@shirtz.cool",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Coolors",
		.query = "coolors",
		.url = "https://coolors.co/account/delete",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Use the link provided to request account deletion. Enter your password, then you get an e-mail with a code. Enter this code in the next input field. If you created the account with a 'Social Login' you need to set a password first."
	},
	{
		.name = "Coolshop.dk",
		.query = "coolshopdk",
		.url = "https://www.coolshop.dk/my/gdpr/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Account deletion can be requested from within ones account settings. It takes them up to 24 hours to process the request."
	},
	{
		.name = "Copyleaks",
		.query = "copyleaks",
		.url = "https://id.copyleaks.com/security",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Account -> Security -> Delete Account (On the bottom of the page). If you wish to delete all data, use [this page](https://id.copyleaks.com/security/delete-internal-data)."
	},
	{
		.name = "Copyrighted",
		.query = "copyrighted",
		.url = "https://app.copyrighted.com/users/settings/cancel",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Enter your current password to confirm deletion."
	},
	{
		.name = "Corellium",
		.query = "corellium",
		.url = "https://app.corellium.com/admin/subscription",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the Delete Account button."
	},
	{
		.name = "Correl.app",
		.query = "correlapp",
		.url = "https://correl.app/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "CoSpaces",
		.query = "cospaces",
		.url = "https://edu.cospaces.io/Studio/Account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked page and scroll down to the bottom of page. From there, click the 'Delete' button next to the 'Delete account' section."
	},
	{
		.name = "Coub",
		.query = "coub",
		.url = "https://coub.com/account/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page. From the left column, select your username. Scroll to the bottom of the page and click \"Delete Account\"."
	},
	{
		.name = "Couchsurfing",
		.query = "couchsurfing",
		.url = "https://support.couchsurfing.org/hc/en-us/articles/200640880-How-can-I-Hide-or-Delete-my-profile",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Go the [Account & Settings](https://www.couchsurfing.com/preferences/account) page. Click Deactivate My Account in the bottom right corner. Enter your email and click Delete. Check your email and click the button to complete deletion."
	},
	{
		.name = "Couponut",
		.query = "couponut",
		.url = "https://couponut.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in then visit the linked page, click on Security tab, scroll to the bottom of the page and click \"Delete Account\"."
	},
	{
		.name = "Coursera",
		.query = "coursera",
		.url = "https://www.coursera.org/account-settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Delete account button is at the bottom of the account settings page."
	},
	{
		.name = "Covoitéo par Karos",
		.query = "covoiteo par karos",
		.url = "https://moncompte.tisseo.fr/fr/questions-frequentes?question=comment-supprimer-mon-compte-covoiteo",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "To delete your account, go at the bottom of the \"Help\" category, and click on \"Delete my account\"."
	},
	{
		.name = "Cracker Barrel",
		.query = "cracker barrel",
		.url = "http://www.crackerbarrel.com/privacy",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Visit their Privacy Policy website -> Section E, number 9, PRIVACY PORTAL link -> Click URL -> Fill out form (includes filling out personal info) -> Verify your email -> Wait for a response"
	},
	{
		.name = "Craigslist",
		.query = "craigslist",
		.url = "https://www.craigslist.org/about/help/user_accounts",
		.email = "mailto:abuse@craigslist.org",
		.difficulty = 0x1000,
		.notes = "Send an email to abuse@craigslist.org and request deletion."
	},
	{
		.name = "CrashPlan",
		.query = "crashplan",
		.url = "https://helpdesk.code42.com",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Start a live chat session and a representative will delete your account."
	},
	{
		.name = "Credit Karma",
		.query = "credit karma",
		.url = "https://www.creditkarma.com/myprofile/security/deactivate",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Membership can be canceled either online or by mail. Once you cancel, you will no longer have access to your Credit Karma account history and you won’t be able to create a new account for six months."
	},
	{
		.name = "CreditExpert",
		.query = "creditexpert",
		.url = "https://www.creditexpert.co.uk",
		.email = "mailto:Customerservice@creditexpert.co.uk",
		.difficulty = 0x1000,
		.notes = "You can cancel by email but only if your membership includes insurance. Otherwise, an email cancellation will be ignored. You have to call 0800 561 0083 to cancel your account. This is the only way. More info [here](http://experian.metafaq.com/help/CreditExpertBRS/Cancel_and_duration/CancelBRS)"
	},
	{
		.name = "Credly",
		.query = "credly",
		.url = "https://www.credly.com/earner/settings/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the profile settings page, scroll down and click 'Delete my Profile'."
	},
	{
		.name = "Crevado Portfolios",
		.query = "crevado portfolios",
		.url = "https://crevado.com/admin/account/cancel",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Cronometer",
		.query = "cronometer",
		.url = "https://support.cronometer.com/hc/en-us/articles/360018760151-Account-Settings#h_440005960211545174984655",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login -> More -> Account -> Delete Account"
	},
	{
		.name = "Crowdcast.io",
		.query = "crowdcastio",
		.url = "https://crowdcast.notion.site/Deleting-Your-Crowdcast-Account-952b7f9ff09648f7960e7d9ecfb6a1b4",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can pause your account for $10/mo or cancel your account."
	},
	{
		.name = "Crowdfinder",
		.query = "crowdfinder",
		.url = "https://crowdfinder.be/privacy",
		.email = "mailto:info@crowdfinder.be",
		.difficulty = 0x1000,
		.notes = "Request requires sending a proof of identity"
	},
	{
		.name = "Crowdfire",
		.query = "crowdfire",
		.url = "https://support.crowdfireapp.com/support/solutions/articles/5000712205-deleting-your-crowdfire-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Deleted after 48 hours of request"
	},
	{
		.name = "Crowdin",
		.query = "crowdin",
		.url = "https://crowdin.com/settings#account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account. Click on 'Settings', then 'Delete Account' (at the bottom). Choose one of the options why you want to delete your account and click 'Delete Account'."
	},
	{
		.name = "Crowdsorsa",
		.query = "crowdsorsa",
		.url = "https://crowdsorsa.com/contact/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "As of now there's not a simple way to delete your account. You have to contact their team, your account will be quickly deleted upon request."
	},
	{
		.name = "Crunchyroll",
		.query = "crunchyroll",
		.url = "https://www.crunchyroll.com/nuke",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "CryEngine",
		.query = "cryengine",
		.url = "https://www.cryengine.com/user/dashboard/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your dashboard, click 'Delete your account' and confirm."
	},
	{
		.name = "Crypton.sh",
		.query = "cryptonsh",
		.url = "https://crypton.sh/app/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down the page, click at \"Delete My Account\", type your password and confirm your action by clicking \"Delete Account\"."
	},
	{
		.name = "CryptoPanic",
		.query = "cryptopanic",
		.url = "https://cryptopanic.com/accounts/delete/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click on 'Yes, send confirmation email', and you should receive an email to delete your account."
	},
	{
		.name = "CryptoVoucher",
		.query = "cryptovoucher",
		.url = "https://cryptovoucher.io/account/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Just click the close account button in the account settings"
	},
	{
		.name = "CryptPad",
		.query = "cryptpad",
		.url = "https://cryptpad.fr/settings/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down to the red 'Delete your account' button and then select 'OK (enter)'"
	},
	{
		.name = "Crytek",
		.query = "crytek",
		.url = "https://www.crytek.com/privacy-policy#:~:text=VII.%20Review%2C%20Correction%20of%20Your%20Information%2C%20Requesting%20Removal%20from%20Mailing%20Lists%20and%20Deactivating%20Your%20Account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You can delete your account by navigating to the profile settings or e-mailing them"
	},
	{
		.name = "CTFLearn",
		.query = "ctflearn",
		.url = "https://ctflearn.com/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "There is no guaranteed way to delete your account, as the website does not offer a button or a form. The provided email addresses do not work probably due to server misconfigurations. The only potential option is to contact an admin on their Discord, but success is not guaranteed."
	},
	{
		.name = "cTrader",
		.query = "ctrader",
		.url = "https://help.ctrader.com/ctrader-id/delete",
		.email = "mailto:community@spotware.com?subject=cTrader%20account%20deletion%20request&body=Please%20delete%20my%20cTrader%20account%20that%20uses%20the%20e-mail%20XXXXX%20and%20the%20passport%20is%20YYYYY.",
		.difficulty = 0x1000,
		.notes = "You need to contact customer support and they will ask for very sensitive information such as your passport number."
	},
	{
		.name = "Cubeast",
		.query = "cubeast",
		.url = "https://app.cubeast.com/settings/user_settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select \"Remove Account,\" confirm your email, then select \"DELETE MY ACCOUNT.\""
	},
	{
		.name = "CubieCloud",
		.query = "cubiecloud",
		.url = "https://sso.cubie.com.br/delacc",
		.email = "mailto:suporte@cubie.com.br",
		.difficulty = 0x1000,
		.notes = "Send an email asking to delete your account, providing your private id and other evidence."
	},
	{
		.name = "Cultura",
		.query = "cultura",
		.url = "https://mesdroits.my.onetrust.com/webform/657f7c55-2752-4af4-b8a2-0c1c352400a9/1a5e60f4-9b49-4948-b10a-247d726aa821",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Send a request to personal data rights service. They will delete your account without contacting you to confirm."
	},
	{
		.name = "Curio",
		.query = "curio",
		.url = "https://curio.io/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Curiosity Stream",
		.query = "curiosity stream",
		.url = "https://curiositystream.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Curriculum",
		.query = "curriculum",
		.url = "https://www.curriculum.com.br/01_02_habilitacao1.asp",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "There's no way to delete an account. The maximum that can be done is to hide the curriculum."
	},
	{
		.name = "CurseForge",
		.query = "curseforge",
		.url = "https://support.curseforge.com/en/support/tickets/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Send a support ticket from the email associated with your account and include the following information: your account username; a screenshot of you logged in to account settings / authors dashboard."
	},
	{
		.name = "Cursor",
		.query = "cursor",
		.url = "https://www.cursor.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Follow the link. Expand the \"Advanced\" section. Click \"Delete Account\"."
	},
	{
		.name = "Curve",
		.query = "curve",
		.url = "https://support.imaginecurve.com/hc/en-gb/articles/214179685-How-do-I-cancel-my-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "They cannot delete your account immediately as they are obliged by the Money Laundering Regulations 2017 to keep your data for 5 years after you stop using Curve."
	},
	{
		.name = "Cutout",
		.query = "cutout",
		.url = "https://www.cutout.pro/user/set",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to My Dashboard, then Account Settings to delete your account."
	},
	{
		.name = "CV online",
		.query = "cv online",
		.url = "https://cvonline.me/en/support/accounts/removing-account",
		.email = "mailto:hello@cvonline.me",
		.difficulty = 0x1000,
		.notes = "Request account removal by sending an email to them from the same email address appearing on your CVs."
	},
	{
		.name = "CVS Pharmacy",
		.query = "cvs pharmacy",
		.url = "https://www.cvs.com/account/account-management.jsp",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "They allow account deletions under the CCPA, but only for California residents. However, the way they check your location is simply a ZIP code of your choosing. You can input any California ZIP (ex. 94102) and they will allow you to delete your account. Visit the linked page, and select 'CA residents: request or delete personal information.' Enter any California ZIP code, then click 'Delete my info and account', and finally 'Yes, delete my info and account'."
	},
	{
		.name = "Cybrary",
		.query = "cybrary",
		.url = "https://app.cybrary.it/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to \"Delete Your Account -> Delete Account\"."
	},
	{
		.name = "CZC",
		.query = "czc",
		.url = "https://www.czc.cz/soukromi/sprava-udaju",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You have to fill out a form. (BUT IT'S ONLY IN CZECH)"
	},
	{
		.name = "DaFONT",
		.query = "dafont",
		.url = "https://www.dafont.com/forum/read/12643/how-do-i-delete-my-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Send a private message to [Rodolphe](http://www.dafont.com/fr/profile.php?user=1)."
	},
	{
		.name = "DagsHub",
		.query = "dagshub",
		.url = "https://dagshub.com/user/settings/delete",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You first need to delete/transfer all your repositories. After that you can visit the linked page and delete your account."
	},
	{
		.name = "The Daily Wire",
		.query = "the daily wire",
		.url = "https://privacy.dailywire.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click \"Delete Your Data\" and enter the verification code the company sends to your account email."
	},
	{
		.name = "Dailymotion",
		.query = "dailymotion",
		.url = "https://www.dailymotion.com/settings/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Type your password and confirm your action by clicking \"Delete account\"."
	},
	{
		.name = "Dan Murphy's",
		.query = "dan murphys",
		.url = "https://www.danmurphys.com.au/dm/home",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You can delete your account either using the mobile app and accessing 'Account' at the bottom right, or by using the live chat in a website browser."
	},
	{
		.name = "DansTonChat",
		.query = "danstonchat",
		.url = "https://danstonchat.com/user/delete.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "danwin1210.me",
		.query = "danwin1210me",
		.url = "https://danwin1210.me/mail/manage_account.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You can either disable or remove your account. After removal, username is free to be taken again."
	},
	{
		.name = "Darty",
		.query = "darty",
		.url = "https://www.darty.com/services/solutions/foire_aux_questions?question=comment-supprimer-compte-client-ainsi-mes-donnees-personnelles",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to send an account deletion request."
	},
	{
		.name = "Dashlane",
		.query = "dashlane",
		.url = "https://app.dashlane.com/#/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "After entering the email address and selecting a reason for deletion, you will receive a security code by email. Enter the security code. After that, the account will be irretrievably deleted."
	},
	{
		.name = "data.gouv.fr",
		.query = "datagouvfr",
		.url = "https://doc.data.gouv.fr/gestion-du-compte/supprimer-un-compte/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your profile page, click on the arrow next to the \"Edit\" button, in the top right of your screen, then on \"Delete my profile\""
	},
	{
		.name = "DataCamp",
		.query = "datacamp",
		.url = "https://www.datacamp.com/profile/account_settings/advanced",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the red 'delete account' button at the bottom."
	},
	{
		.name = "DataQuest",
		.query = "dataquest",
		.url = "https://app.dataquest.io/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the red 'delete account' button"
	},
	{
		.name = "Day One",
		.query = "day one",
		.url = "https://dayone.me/user/request-account-deletion",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "dbrand",
		.query = "dbrand",
		.url = "https://dbrand.com/contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact customer support to request account deletion."
	},
	{
		.name = "Deadspin",
		.query = "deadspin",
		.url = "https://notice.sp-prod.net/sar/index.html?message_id=539278&account_id=1195&ccpa_type=delete",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form using the email address of your account and click on the verification link that is sent."
	},
	{
		.name = "Decathlon",
		.query = "decathlon",
		.url = "https://account.decathlon.com/privacy/account-deletion",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "On your account page, go to \"Privacy and Security\" and \"Delete my account\" then scroll down to click on \"Delete my account\". You will be asked to confirm through SMS or Email"
	},
	{
		.name = "Decathlon India",
		.query = "decathlon india",
		.url = "https://decathlononline.freshdesk.com/support/tickets/new",
		.email = "mailto:care.india@decathlon.com?subject=Decathlon.in%20Account%20Deletion%20Request&body=Please%20delete%20my%20decathlon.in%20account%20and%20erase%20all%20data%20associated%20with%20it.",
		.difficulty = 0x1000,
		.notes = "Send them a deletion request from the linked contact form and remember to mention your decathlon.in registered email there. After some hours of submitting the request their support representative will email you asking for your confirmation to have your decathlon account permanently deleted. Alternatively, you can email them."
	},
	{
		.name = "DeepL",
		.query = "deepl",
		.url = "https://www.deepl.com/en/privacy#section_6_1",
		.email = "mailto:support@deepl.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "DeepSeek",
		.query = "deepseek",
		.url = "https://chat.deepseek.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Using a PC, go to \"My Profile\" in the lower-left hand corner, then click \"Settings\". A pop-up window appears. Click on the \"Profile\" tab and then click on the red \"Delete\" button. If using mobile, tap the burger menu in the upper-left hand corner, then tap your username in the lower-left. After that, tap the last option in red, \"Delete account\"."
	},
	{
		.name = "Deezer",
		.query = "deezer",
		.url = "https://www.deezer.com/account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "If you signed up via Google/Facebook setup a Deezer password at [https://www.deezer.com/password/reset](https://www.deezer.com/password/reset) and click the confirmation link you'll get via mail. If you have your Deezer password, open your account settings. Click 'Delete my Account' at the bottom of the page. Enter your Deezer password and confirm the deletion in the confirmation mail."
	},
	{
		.name = "Deliveroo",
		.query = "deliveroo",
		.url = "https://deliveroo.co.uk/account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "At the bottom of the account page is the option to permanently deactivate your account. It is unclear if your data will be retained after this so you may wish to contact dpo@deliveroo.com to exercise your right to erasure under UK GDPR."
	},
	{
		.name = "Delivery Code",
		.query = "delivery code",
		.url = "https://www.deliverycode.com",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Go to My Account and select Edit Profile and then Delete Account. A confirmation e-mail will be sent to the address on file with a link you must visit."
	},
	{
		.name = "Dell",
		.query = "dell",
		.url = "https://www.dell.com/preferences/pcrp/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Submitting a privacy request allows you to request permanent deletion of your personal information, instead of simply deactivating your account, the default option in account settings."
	},
	{
		.name = "Delta Airlines (SkyMiles)",
		.query = "delta airlines skymiles",
		.url = "https://www.delta.com/contactus/pages/comment_complaint/index.jsp",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You can not delete your account on the site. You must use the linked form. Then select SkyMiles -> Update SkyMiles Account and request them to close your account."
	},
	{
		.name = "DelugeRPG",
		.query = "delugerpg",
		.url = "https://www.delugerpg.com/faq#delete",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "There is no way to delete an account. Inactive accounts are deleted automatically after 15 months."
	},
	{
		.name = "Demiplane",
		.query = "demiplane",
		.url = "https://support.demiplane.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You must submit a support ticket to request account closure."
	},
	{
		.name = "Depop",
		.query = "depop",
		.url = "https://depophelp.zendesk.com/hc/en-gb/articles/360001772988-How-can-I-delete-my-Depop-account-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Select 'I want to delete my account' in the support request page."
	},
	{
		.name = "Depositphotos",
		.query = "depositphotos",
		.url = "https://depositphotos.com",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Enter live chat in the other department and request cancellation of your account or if it is not available use the contact form."
	},
	{
		.name = "Deutsche Bahn / DB",
		.query = "deutsche bahn db",
		.url = "https://int.bahn.de/en/faq/delete-data-customer-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In the \"Manage customer account\" section, go to \"Personal details\" and then select the \"Delete account\" option at the bottom. Now follow the instructions to delete your customer account."
	},
	{
		.name = "Deutsche Post",
		.query = "deutsche post",
		.url = "https://www.dhl.de/content/dpks/de/themenauswahl/kundenservice-formulare/f1b-datenschutz.html",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form to request erasure."
	},
	{
		.name = "DEV",
		.query = "dev",
		.url = "https://dev.to/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your 'Settings'. On the left select 'Account'. Click 'Delete Account', and follow the instructions sent via email to confirm."
	},
	{
		.name = "DeviantArt",
		.query = "deviantart",
		.url = "https://www.deviantart.com/settings/deactivation",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "All your data is erased immediately, except comments which will remain. Accounts can be reactivated within 30 days. After that, Accounts can't be reactivated."
	},
	{
		.name = "DevITjobs",
		.query = "devitjobs",
		.url = "https://devitjobs.com/contact",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click on the 'Log in here' button. After logging in, go to 'Account', then 'Delete Account'. You will be redirected to write to the support email. Account gets deleted within 48 hours."
	},
	{
		.name = "Devpost",
		.query = "devpost",
		.url = "https://devpost.com/settings/delete_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "DHL",
		.query = "dhl",
		.url = "https://www.dhl.de/de/privatkunden/kundenkonto/meine-daten.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Under 'Kundenkonto', click on 'Konto löschen'."
	},
	{
		.name = "Dia",
		.query = "dia",
		.url = "https://diabrowser.com/help",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Open the first tab of the settings inside the app, click the \"...\" button in the bottom right corner, select \"Delete Account...\", then confirm deletion."
	},
	{
		.name = "DialLink",
		.query = "diallink",
		.url = "https://app.diallink.com/v1/settings/company",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Under 'Settings' go to 'Company' and click on 'Delete account'."
	},
	{
		.name = "diasp.eu (Diaspora)",
		.query = "diaspeu diaspora",
		.url = "https://diasp.eu/user/edit#close_account_pane",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click close my account and confirm with your password."
	},
	{
		.name = "Dice",
		.query = "dice",
		.url = "https://www.dice.com/dashboard/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your 'Settings'. Scroll to the bottom to find the 'Delete Account' section."
	},
	{
		.name = "DiceCloud",
		.query = "dicecloud",
		.url = "https://dicecloud.com/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "There are no settings on the website to delete your account and the contact form is never answered."
	},
	{
		.name = "dict.cc",
		.query = "dictcc",
		.url = "https://users.dict.cc/my-account/close-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Account data will be deleted; the user name will be blocked to prevent reuse."
	},
	{
		.name = "Dictionary.com",
		.query = "dictionarycom",
		.url = "https://www.dictionary.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Account data will be deleted along with all the saved data and words. You fill find the detele button at the bottom of the page."
	},
	{
		.name = "Didsoft",
		.query = "didsoft",
		.url = "https://didsoft.com/contact.html",
		.email = "mailto:support@didsoft.com",
		.difficulty = 0x1000,
		.notes = "Create a ticket on the website, or email them."
	},
	{
		.name = "Dietollemode.com",
		.query = "dietollemodecom",
		.url = "https://dietollemode.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Digg",
		.query = "digg",
		.url = "https://digg.com/privacy#:~:text=How%20Can%20I%20Delete%20My%20Account%3F",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to \"Settings -> Delete my account\"."
	},
	{
		.name = "Digio",
		.query = "digio",
		.url = "https://www.digio.com.br/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "There is no delete button and talking to the customer support gets you nowhere, they only understand you want to cancel the bank account or the credit card, but not remove the login information."
	},
	{
		.name = "DigitalOcean",
		.query = "digitalocean",
		.url = "https://cloud.digitalocean.com/deactivate",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click in the checkbox \"Purge all of my account data\" and confirm your action by clicking \"Deactivate Account\"."
	},
	{
		.name = "Diigo",
		.query = "diigo",
		.url = "https://www.diigo.com/setting",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down the page, click at \"I'd like to delete my account.\", type your password and confirm your action by clicking \"Confirm Delete\"."
	},
	{
		.name = "Directleaks",
		.query = "directleaks",
		.url = "https://directleaks.net/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Discogs",
		.query = "discogs",
		.url = "https://www.discogs.com/users/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Discord",
		.query = "discord",
		.url = "https://support.discordapp.com/hc/en-us/articles/212500837-How-do-I-permanently-delete-my-account-",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Account deletion will not delete your messages, which you must do manually or by following this tutorial to ask messages deletion: [https://khcrysalis.dev/blog/mass-deletion/](https://khcrysalis.dev/blog/mass-deletion/) (Take 24 hours to fully remove messages). NOTE: Only not-accessible messages will be removed, meaning you need to leave every servers you're on and close all of your DMs before submitting your demand. If you're a server owner, you'll need to either [delete the server](https://support.discordapp.com/hc/en-us/articles/213595197-How-do-I-delete-a-server-), or [transfer ownership](https://support.discordapp.com/hc/en-us/articles/216273938-How-do-I-transfer-server-ownership-) for account deletion to succeed. Account deletion takes 15 days on average (You can restore your account in this time)."
	},
	{
		.name = "Discourse",
		.query = "discourse",
		.url = "https://www.discourse.org/privacy#heading--change",
		.email = "mailto:privacy@discourse.org",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "discovery+",
		.query = "discovery",
		.url = "https://privacyportal.onetrust.com/webform/1b21e05d-c206-4e0b-970e-2d73a23e42e8/5b504afe-dd1e-47f6-9af6-56144531eced",
		.email = NULL,
		.difficulty = 0x800,
		.notes = NULL
	},
	{
		.name = "Disney",
		.query = "disney",
		.url = "https://support.disney.com/hc/en-gb/articles/115005418823-How-do-I-delete-my-Disney-account-",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Disney+",
		.query = "disney",
		.url = "https://help.disneyplus.com/csp?id=csp_article_content&sys_kb_id=bf6bf352db101558331d6fddd39619c7",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Your Disney+ account is different from your Disney account. Deleting your Disney+ account will not delete your Disney account."
	},
	{
		.name = "Displate",
		.query = "displate",
		.url = "https://displate.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the \"Deactivate account\" button."
	},
	{
		.name = "Disqus",
		.query = "disqus",
		.url = "https://disqus.com/home/settings/account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Disroot",
		.query = "disroot",
		.url = "https://user.disroot.org/pwm/private/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the home page, click the user icon then press 'Delete my Account', nobody will be able to use the same username after deletion."
	},
	{
		.name = "distill.io",
		.query = "distillio",
		.url = "distill.io",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the button to delete the account."
	},
	{
		.name = "Divize",
		.query = "divize",
		.url = "https://divize.io/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on \"Delete\" and confirm by clicking on \"Yes, Delete it!\"."
	},
	{
		.name = "DJI",
		.query = "dji",
		.url = "https://account.dji.com/account/userCancel",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "DLH",
		.query = "dlh",
		.url = "https://dlh.net/en/profile.html",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Complete the captcha and press the button to request account deletion. An email will be sent to you to confirm such action."
	},
	{
		.name = "DLive",
		.query = "dlive",
		.url = "https://dlive.tv/s/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In settings scroll to the bottom, click the delete account button and enter your password. Your account will be deleted in 30 days."
	},
	{
		.name = "Dmwithme",
		.query = "dmwithme",
		.url = "https://dmwithme.com/privacy",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "DNSimple",
		.query = "dnsimple",
		.url = "https://dnsimple.com/user/cancellation",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Do IT",
		.query = "do it",
		.url = "https://doit.life/privacy-policy",
		.email = "mailto:data@doit.life",
		.difficulty = 0x2000,
		.notes = "E-mailing them is a deadend even after waiting for several weeks."
	},
	{
		.name = "DocHub",
		.query = "dochub",
		.url = "https://dochub.com/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in, under \"Account\" click \"Delete my Account\"."
	},
	{
		.name = "Docker",
		.query = "docker",
		.url = "https://hub.docker.com/settings/deactivate",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in, under account settings find and use \"Deactivate Account\"."
	},
	{
		.name = "DocMorris",
		.query = "docmorris",
		.url = "https://www.docmorris.de/kontaktformular",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact customer service using their web contact form and ask them to delete your account."
	},
	{
		.name = "Doctolib",
		.query = "doctolib",
		.url = "https://www.doctolib.de/account/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down to the bottom of the page and click on 'Delete my account'."
	},
	{
		.name = "DocuSign",
		.query = "docusign",
		.url = "https://support.docusign.com/en/articles/How-do-I-cancel-or-downgrade-my-account#steps",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Follow the instructions at the linked support page; directions vary depending on account type and privileges."
	},
	{
		.name = "Dollskill",
		.query = "dollskill",
		.url = "https://www.dollskill.com/pages/contact-us",
		.email = "mailto:dataprotection@dollskill.com?subject=Hello%0A%2C%20please%20delete%20the%20account%20associated%20to%20this%20email.%20My%20phone%20number%20is%20XXXXXXXX%20and%20I%20would%20like%20all%20data%20associated%20to%20my%20account%20to%20be%20removed.",
		.difficulty = 0x1000,
		.notes = "Email customer service and they will reply once that is complete."
	},
	{
		.name = "DonationAlerts",
		.query = "donationalerts",
		.url = "https://www.donationalerts.com/dashboard/general-settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Press \"Delete account\" under the \"Account removal\". Your account will be deleted within a month."
	},
	{
		.name = "Doneo",
		.query = "doneo",
		.url = "http://www.doneo.org/2_index_membre.php?action=desinscription_membre&block=block2",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Doodle",
		.query = "doodle",
		.url = "https://doodle.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In your Doodle account select 'Delete Doodle account' at the bottom of the page."
	},
	{
		.name = "DoorDash",
		.query = "doordash",
		.url = "https://www.doordash.com/consumer/privacy/delete_account/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You will need the phone tied to your account to receive the 2FA code."
	},
	{
		.name = "Douban",
		.query = "douban",
		.url = "https://www.douban.com/accounts/suicide/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Douyin",
		.query = "douyin",
		.url = "https://aweme.snssdk.com/ucenter_web/app/aweme/delete-account-notice?_theme=light&hide_nav_bar=1&title=%E6%8A%96%E9%9F%B3%E6%B3%A8%E9%94%80%E9%A1%BB%E7%9F%A5&hide_status_bar=0&disable_auto_expose=1&font_scale=1.0",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You can log out of your account at 'Me'->'≡'->'Settings'->'Account and Security'->'Cancel Account'. However, your account has to meet the conditions linked."
	},
	{
		.name = "DOWN",
		.query = "down",
		.url = "https://www.downapp.com",
		.email = "mailto:feedback@downapp.com",
		.difficulty = 0x400,
		.notes = "You can delete it in the settings page"
	},
	{
		.name = "Dr. Martens",
		.query = "dr martens",
		.url = "https://www.drmartens.com/us/en/faq",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Send an email stating that you want them to close your account. Include: full name on account, full billing address and registered email address. Once they confirm deletion it may take 7-10 days to take effect."
	},
	{
		.name = "Draft",
		.query = "draft",
		.url = "https://draftin.com/draft/users/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Drawabox",
		.query = "drawabox",
		.url = "https://drawabox.com",
		.email = "mailto:support@drawabox.com",
		.difficulty = 0x1000,
		.notes = "Send an email from the address associated with the account you'd like to delete."
	},
	{
		.name = "Drawpile",
		.query = "drawpile",
		.url = "https://drawpile.net/accounts/delete/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Draxlr",
		.query = "draxlr",
		.url = "https://www.draxlr.com/contact/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact customer support to request account deletion. They should respond and will delete any personal information, database credentials and result caches that you have provided along with your account within 4 working days."
	},
	{
		.name = "DreamHost",
		.query = "dreamhost",
		.url = "https://panel.dreamhost.com/index.cgi?tree=support.msg",
		.email = "mailto:privacypolicy@dreamhost.com",
		.difficulty = 0x1000,
		.notes = "Contact customer support using the customer service form or privacy contact email."
	},
	{
		.name = "Dreamstime",
		.query = "dreamstime",
		.url = "https://www.dreamstime.com/account/edit-profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on the \"Delete account\" link towards the bottom of the page and then confirm your action in the opened pop-up. Accounts can be deleted only if you have no activity registered (uploads, downloads, comments,blogs etc)."
	},
	{
		.name = "Dreamwidth",
		.query = "dreamwidth",
		.url = "https://www.dreamwidth.org/accountstatus",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Changing your account status to Deleted will immediately hide your profile and journal from other users, but your account will not be removed for 30 days."
	},
	{
		.name = "Dribbble",
		.query = "dribbble",
		.url = "https://dribbble.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "DriveThruRPG",
		.query = "drivethrurpg",
		.url = "https://support.drivethrurpg.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Submit a request asking for the deletion of your account providing your username"
	},
	{
		.name = "Drivvo",
		.query = "drivvo",
		.url = "https://www.drivvo.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the app, open the 'Menu' -> 'My Account' -> tap the three dots on the upper right corner, click 'Delete Account' and confirm."
	},
	{
		.name = "Drizly",
		.query = "drizly",
		.url = "https://privacyportal.onetrust.com/webform/d3790e60-9408-4ab8-9ac6-511ad32593a0/edb91c18-e5fd-42cb-a0ce-4b1832410687",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form and/or email them through their contact page: https://drizly.com/contact-us. They will email you promptly to let you know that your account has been deleted."
	},
	{
		.name = "Drone.io",
		.query = "droneio",
		.url = "https://drone.io",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Dronebase",
		.query = "dronebase",
		.url = "https://dronebase.com/contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact support to find out if you can delete your account."
	},
	{
		.name = "Drop (Massdrop)",
		.query = "drop massdrop",
		.url = "https://helpdesk.drop.com/hc/en-us/articles/360019265073-How-do-I-delete-my-account-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Log into your Drop account and submit a Support ticket on drop.com/support. Under Reason for Contacting Support, select Account inquiries."
	},
	{
		.name = "Dropbox",
		.query = "dropbox",
		.url = "https://www.dropbox.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Droplr",
		.query = "droplr",
		.url = "https://d.pr/settings/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click at \"Delete Account\", type your email address and confirm your action by clicking \"Delete\"."
	},
	{
		.name = "Dropmark",
		.query = "dropmark",
		.url = "https://support.dropmark.com/article/92-how-do-i-delete-my-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Personal accounts can be deleted from the \"Danger Zone\" section at the bottom of your [Account page](https://app.dropmark.com/account). Note: Before deleting your personal account, you must first [transfer ownership](https://support.dropmark.com/article/53-transferring-collection-ownership) or [delete all collections](https://support.dropmark.com/article/20-deleting-a-collection) owned by your account."
	},
	{
		.name = "DTF",
		.query = "dtf",
		.url = "https://dtf.ru",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log into your account. Click on your profile picture in the top right corner (bottom right on mobile), then on \"Настройки\". Select \"Основные\". There click on the blue \"удалить свой аккаунт\" link at the bottom. Type your deletion reason and press the red \"Удалить\" button, then the red \"Подтвердить\" button."
	},
	{
		.name = "Dunkindonuts",
		.query = "dunkindonuts",
		.url = "https://www.dunkindonuts.com/en/about/contact-us",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click Personal Information, Click Delete My Account, Confirm ‘Yes, I want to proceed’, Reason for deleting your account, Choose ‘Other’, Type: I want to delete all of my private information. Then check both boxes if you agree. First box asks: Check here if you would like Dunkin’ Donuts to delete all of the personal information we have collected from you (subject to permitted exceptions). Second box: I understand that by deleting my information, I will no longer be able to use my DD Perks Account and will forfeit any accrued Perks Rewards. Then click Next, Then confirm by clicking ‘Delete My Account’.  Then you will get a confirmation page that says: Thank you for your request, this confirms that your account has been deleted! You then get an email that says it can take 48 hours to update."
	},
	{
		.name = "Duo",
		.query = "duo",
		.url = "https://help.duo.com/s/article/2162",
		.email = "mailto:support@duosecurity.com",
		.difficulty = 0x1000,
		.notes = "Delete all applications, users and other administrators in the Admin Panel according to the [support article](https://help.duo.com/s/article/2162), then contact support via email."
	},
	{
		.name = "Duolicious",
		.query = "duolicious",
		.url = "https://web.duolicious.app/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log into your account. Go to the \"Profile\" tab. Scroll down and press \"Delete My Account\". Type \"delete\" then press \"Done\"."
	},
	{
		.name = "Duolingo",
		.query = "duolingo",
		.url = "https://drive-thru.duolingo.com/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Scroll down and click \"ERASE PERSONAL DATA\". You will receive an e-mail in which you have to click the link after \"Delete my data link:\". This confirms the erasure of your personal data and account."
	},
	{
		.name = "Duotrope",
		.query = "duotrope",
		.url = "https://duotrope.com/contact/customerservice.aspx",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You must submit a support ticket to request account deletion."
	},
	{
		.name = "Dwell",
		.query = "dwell",
		.url = "https://dwell.co.uk/contactus.php",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "It’s not possible to delete an account, you can either remove or replace your contact information with bogus details."
	},
	{
		.name = "Dwolla",
		.query = "dwolla",
		.url = "https://www.dwolla.com",
		.email = "mailto:support@dwolla.com",
		.difficulty = 0x2000,
		.notes = "Dwolla accounts cannot be deleted, only disabled. To request deactivation of your account, contact support via email."
	},
	{
		.name = "DWService",
		.query = "dwservice",
		.url = "https://www.dwservice.net/session.dw#s",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Dynadot",
		.query = "dynadot",
		.url = "https://www.dynadot.com/community/help/question/close-dynadot-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the red \"Deactivate\" button under \"Advanced Settings\" in \"Account Settings\". Although easy to do, it may take several years for them to actually delete your account."
	},
	{
		.name = "DynDNS",
		.query = "dyndns",
		.url = "https://account.dyn.com/profile/close.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "e621",
		.query = "e621",
		.url = "https://e621.net/maintenance/user/deletion",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Even though there is a delete option, the site states it will only change your account to a generic name and lock it. Your contributions (submissions, comments, etc) will remain."
	},
	{
		.name = "EA Games / Origin / Electronic Arts",
		.query = "ea games origin electronic arts",
		.url = "https://help.ea.com/help-tools/rtbf",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Sign in, accept the deletion terms, and confirm to delete your account and data."
	},
	{
		.name = "EasyEDA",
		.query = "easyeda",
		.url = "https://easyeda.com/account/user/account/setting/advance",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log into easyeda.com first, then click on the provided URL. Type 'DELETE' into the input box and click the Delete button."
	},
	{
		.name = "easyfundraising",
		.query = "easyfundraising",
		.url = "https://www.easyfundraising.org.uk/account/delete-account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'account' on the top right, then click 'Manage your data'. Click 'Learn more' under 'Delete your account and information' section. You will be prompted to enter your password."
	},
	{
		.name = "easyJet",
		.query = "easyjet",
		.url = "https://www.easyjet.com/en/policy/privacy-promise/request-data-form",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to fill out the Data protection request form on their website, providing your identification."
	},
	{
		.name = "EatStreet",
		.query = "eatstreet",
		.url = "https://eatstreet.com/contact",
		.email = "mailto:customer.service@eatstreet.com",
		.difficulty = 0x1000,
		.notes = "Though you can deactivate your account under \"My Account\", in order to permanently delete your account, you must contact support and request deletion at: customer.service@eatstreet.com."
	},
	{
		.name = "EBANX",
		.query = "ebanx",
		.url = "https://ebanx.com",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Customer support says that EBANX accounts can't be deleted, as the information about user transactions (e.g: payments) may be necessary in the future for, according to them, \"legal obligations and legitimate interests\"."
	},
	{
		.name = "eBay",
		.query = "ebay",
		.url = "https://accountsettings.ebay.com/uas",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Hover over name on top left, click 'Account settings', click 'Close account' under the Account preferences column, then scroll down and click 'Close account and delete my data'. Select why you are leaving from drop down and continue. Click on checkmark and then click the left button to close your account. If you want an extra safety measure, replace all of your personal info with fake info before closing the account."
	},
	{
		.name = "eBonus",
		.query = "ebonus",
		.url = "https://ebonus.gg/contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "After submitting a contact form, they will ask for confirmation using email. After confirmation, account deletion takes 30 days."
	},
	{
		.name = "Economist",
		.query = "economist",
		.url = "https://myaccount.economist.com/s/contact-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "There are two ways to contact this website, such as calling a phone number that is based on where you reside, or use the live chat."
	},
	{
		.name = "Ecwid",
		.query = "ecwid",
		.url = "https://my.ecwid.com/cp/#profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'Close Account' in profile settings and then click 'Yes'."
	},
	{
		.name = "Edabit",
		.query = "edabit",
		.url = "https://edabit.com/challenges",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the website, click on your avatar, click on Settings, click Account, and hit the 'Delete Account' button"
	},
	{
		.name = "Edizioni Simone",
		.query = "edizioni simone",
		.url = "https://edizioni.simone.it/informativa-sulla-privacy/",
		.email = "mailto:privacy@simone.it",
		.difficulty = 0x1000,
		.notes = "Contact support via email and request your account to be deleted."
	},
	{
		.name = "Edpuzzle",
		.query = "edpuzzle",
		.url = "https://edpuzzle.com/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll the bottom of the linked page and click 'Delete account'. Student accounts can only be deleted by request of a school teacher or administrator, or after 18 months of account inactivity. See their support article for more information: https://support.edpuzzle.com/hc/en-us/articles/4407364156557-How-Do-I-Delete-My-Account-"
	},
	{
		.name = "Edraw Software",
		.query = "edraw software",
		.url = "https://www.edrawsoft.com/faq/#account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to contact Edraw Software support through their support center."
	},
	{
		.name = "eDreams",
		.query = "edreams",
		.url = "https://www.edreams.co.uk/travel/secure/#accountpreferences/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on \"I want to delete My Account\"."
	},
	{
		.name = "Educaplay",
		.query = "educaplay",
		.url = "https://www.educaplay.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You must go to your profile, click on Account Settings and then on Delete Account"
	},
	{
		.name = "Eduonix",
		.query = "eduonix",
		.url = "https://www.eduonix.com/settings/mang_pass",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select the \"Delete My Account\" button. The profile will be deleted effectively within 2-3 days."
	},
	{
		.name = "Edvisors/ScholarshipPoints",
		.query = "edvisorsscholarshippoints",
		.url = "https://www.edvisors.com/delete-request/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Go to the URL and fill out the form with the information associated with your account. Edvisors will respond with a confirmation email. Click the enclosed link and fill out the next form. Between a few hours and 45 days later, Edvisors should send a confirmation email that your account has been deleted."
	},
	{
		.name = "EdX",
		.query = "edx",
		.url = "https://account.edx.org/#delete-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Go to the account deletion page and select Delete Account. If you have logged in through a social media account, you'll first have to unlink them, reset your password then delete the account."
	},
	{
		.name = "Electroneum",
		.query = "electroneum",
		.url = "https://support.electroneum.com/hc/en-gb/requests/new",
		.email = "mailto:support@electroneum.com",
		.difficulty = 0x1000,
		.notes = "Contact the customer support using the form or via email and request the deletion of your account."
	},
	{
		.name = "Element",
		.query = "element",
		.url = "https://app.element.io/#/home",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to \"All Settings\" scroll all the way down, and click on Deactivate Account."
	},
	{
		.name = "Elevate",
		.query = "elevate",
		.url = "https://elevateapp.com",
		.email = "mailto:hello@elevateapp.com",
		.difficulty = 0x1000,
		.notes = "You must send an e-mail to hello@elevateapp.com requesting deletion. You will then receive a response from support asking for feedback and to confirm the deletion. The next e-mail you receive from support will notify you that your account has been deleted."
	},
	{
		.name = "Elfster",
		.query = "elfster",
		.url = "https://www.elfster.com/settings/account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to 'Account Settings' and scroll to the very bottom to see an option to delete your account."
	},
	{
		.name = "Ello",
		.query = "ello",
		.url = "https://ello.co/wtf/help/settings/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Quoted from Ello: Go to your Settings page and click the “Delete Account” link. Once you delete your account neither you, nor we, can recover it. Also note that your username may become available for another person to use."
	},
	{
		.name = "elmah.io",
		.query = "elmahio",
		.url = "https://app.elmah.io/profile/#actions",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the Delete Account button to remove your user account."
	},
	{
		.name = "Elpais",
		.query = "elpais",
		.url = "https://registro.elpais.com.uy/regasistencia.asp",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Complete the form, they will send you an email where you must respond indicating the identity document."
	},
	{
		.name = "ELSA Speak",
		.query = "elsa speak",
		.url = "https://elsaspeak.com/app/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "(Desktop version) Click the \"Delete my account\" button and follow the simple instructions."
	},
	{
		.name = "Elsevier",
		.query = "elsevier",
		.url = "https://service.elsevier.com/app/answers/detail/a_id/30148/supporthub/ecommerce/~/how-do-i-request-deletion-of-my-elsevier.com-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form with your Account name, Email and a reason for deletion request."
	},
	{
		.name = "Embark Studios",
		.query = "embark studios",
		.url = "https://id.embark.games/id/connected-platforms",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Login to your account with the platform you use (Steam, Epic, etc.). Then click either the \"Contact Player Support\" link or use the chatbot on the bottom right corner to request account deletion."
	},
	{
		.name = "Emby",
		.query = "emby",
		.url = "https://emby.media/community/index.php?/settings/deletemyaccount/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "To delete your account, you must [log into the community](https://emby.media/community/index.php?/login/) (not the app)."
	},
	{
		.name = "Empik",
		.query = "empik",
		.url = "https://www.empik.com/polityka-prywatnosci-empik",
		.email = "mailto:obsluga.klienta@empik.com",
		.difficulty = 0x1000,
		.notes = "Send an e-mail asking for the deletion."
	},
	{
		.name = "Engadget",
		.query = "engadget",
		.url = "https://engadget.mydashboard.oath.com/#section-manage",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down to the bottom of the page and click 'Delete Account'."
	},
	{
		.name = "Enhancv",
		.query = "enhancv",
		.url = "https://app.enhancv.com/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down to the bottom of the page and click \"Delete account\"."
	},
	{
		.name = "enjin",
		.query = "enjin",
		.url = "https://www.enjin.com/dashboard/account/privacy",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down and click on 'Delete Account'."
	},
	{
		.name = "enjoei",
		.query = "enjoei",
		.url = "https://www.enjoei.com.br/perfil/alterar",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down on the configurations of your profile and click on 'Delete Account'. An e-mail will be sent for you to confirm the deletion by clicking a link."
	},
	{
		.name = "Enphase",
		.query = "enphase",
		.url = "https://support.enphase.com/s/article/deleting-your-enphase-app-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down on your account page and click on 'Delete Account'."
	},
	{
		.name = "ENSHAN",
		.query = "enshan",
		.url = "https://www.right.com.cn/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = NULL
	},
	{
		.name = "Envato",
		.query = "envato",
		.url = "https://help.market.envato.com/hc/en-us/articles/202500394-How-Do-I-Close-My-Account-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to send them a request to delete the account using the contact form."
	},
	{
		.name = "Epic Games",
		.query = "epic games",
		.url = "https://www.epicgames.com/help/en-US/epic-accounts-c74/general-support-c79/how-do-i-delete-my-epic-games-account-a3636",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Log in to your account. On the \"General Info\" page, scroll to the \"Delete Account\" section, request deletion and follow the steps."
	},
	{
		.name = "Epidemic Sound",
		.query = "epidemic sound",
		.url = "https://support.epidemicsound.com/s/article/how-do-i-delete-my-account-2020-05-27-050641?language=en_US",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Follow the link to the contact form by following the link in \"If you still want to delete your account please contact us by clicking here.\". In the contact form choose \"My account\" from the dropdown."
	},
	{
		.name = "Epik",
		.query = "epik",
		.url = "https://www.epik.com/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Log in to your account. Start a new chat with customer support and request the deletion of your account and personal data. Make sure you have your customer support PIN on hand."
	},
	{
		.name = "Epoch Times",
		.query = "epoch times",
		.url = "https://help.theepochtimes.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Send a request to customer support demanding for the deletion of your account."
	},
	{
		.name = "eProject.me",
		.query = "eprojectme",
		.url = "https://eproject.me",
		.email = "mailto:services@eproject.me",
		.difficulty = 0x1000,
		.notes = "Send an e-mail asking for the deletion."
	},
	{
		.name = "eRepublik",
		.query = "erepublik",
		.url = "https://www.erepublik.com/en/contact/none/none",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Create new Game Support ticket to request account removal."
	},
	{
		.name = "ESPN",
		.query = "espn",
		.url = "https://www.espn.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the account settings page there is a Remove Account button"
	},
	{
		.name = "EteSync",
		.query = "etesync",
		.url = "https://dashboard.etebase.com/user/partner/account/deactivate/request/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "It will send a Deletion verification email, follow the link there to delete your account."
	},
	{
		.name = "eToro",
		.query = "etoro",
		.url = "https://www.etoro.com/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the page, click the button to close your account, select the reason for your deletion and continue to confirm it."
	},
	{
		.name = "ETS Global",
		.query = "ets global",
		.url = "https://privacyportal-de.onetrust.com/webform/f194ee56-f900-441a-aca9-6a1807f9b2a5/4687a8cc-3095-439e-b369-39726e438235",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to send a data deletion request to delete your account. You will receive an email to confirm your email address."
	},
	{
		.name = "Etsy",
		.query = "etsy",
		.url = "https://www.etsy.com/your/account/privacy",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'Request deletion of your data' and then 'Yes, I'm sure'. You'll receive an e-mail with a link to finish the process."
	},
	{
		.name = "Even",
		.query = "even",
		.url = "https://www.even.com/employees/support",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Head to the account information page (Profile -> App settings -> Account info) and click on \"Delete your Even account & data\"."
	},
	{
		.name = "Eventbrite",
		.query = "eventbrite",
		.url = "https://www.eventbrite.com/account-close",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Eventim",
		.query = "eventim",
		.url = "https://www.eventim.de/help/contact/?help_id=6306",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Search for Account, select question 'How can I delete my account', then click on 'This answer was not helpful'. A ticket will be opened."
	},
	{
		.name = "Everand",
		.query = "everand",
		.url = "https://support.scribd.com/hc/en-us/articles/360000894843-Deleting-your-account#h_01HBVYCPRH4GEMX24PD473BHP8",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Follow the instructions from this link."
	},
	{
		.name = "Everhelper",
		.query = "everhelper",
		.url = "https://www.everhelper.me/remove-account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Evernote",
		.query = "evernote",
		.url = "https://help.evernote.com/hc/en-us/articles/360056549574-Permanently-close-your-Evernote-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Sign in to account settings, click 'Account Status', click 'Close your Evernote Account', read carefully and accept."
	},
	{
		.name = "EVGA",
		.query = "evga",
		.url = "https://www.evga.com/legal/privacy/#form",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Submit form to request deletion, open confirmation link from e-mail."
	},
	{
		.name = "Evike",
		.query = "evike",
		.url = "https://www.evike.com/contact/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Enter Name, Email, and Phone. Select 'Account Deletion Request' as the topic, complete CAPTCHA, and submit inquiry."
	},
	{
		.name = "Evite",
		.query = "evite",
		.url = "https://privacyportal-cdn.onetrust.com/dsarwebform/516d7c8e-88ca-4311-b9d9-a6a1aa23be02/5eb62c40-d057-4621-93ca-9842142c3443.html",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Go to the URL, select 'Delete My Info' as the request type, and fill out the form with your account information. Open the email they send you and confirm. Wait a few days while they review your request. You should eventually receive email confirmation that your account was deleted, after which your login credentials will no longer work."
	},
	{
		.name = "Examine",
		.query = "examine",
		.url = "https://examine.com/contact/",
		.email = "mailto:support@examine.com",
		.difficulty = 0x1000,
		.notes = "Contact support using the linked form or by email and request account deletion."
	},
	{
		.name = "Exclusive Car Registry",
		.query = "exclusive car registry",
		.url = "https://exclusivecarregistry.com/account/security",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click Profile icon -> Show Menu -> Security -> Delete Profile -> Type CONFIRM -> Click Delete account button -> Email Sent -> Click DELETE ACCOUNT button."
	},
	{
		.name = "Exercism",
		.query = "exercism",
		.url = "https://exercism.io/my/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login and click 'Delete my Account'. Then click again on the next page to confirm deletion."
	},
	{
		.name = "Exophase",
		.query = "exophase",
		.url = "https://www.exophase.com/account/removal/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "They delete your account in 72 hours and it also includes the forum account attached, but the posts are kept and *not* anonymized. You must keep your connected services attached during this time so they can be fully removed by an admin. Your connected services (Playstation, Xbox etc) also cannot be added to a future account without contacting a staff member."
	},
	{
		.name = "Expedia",
		.query = "expedia",
		.url = "https://www.expedia.com/helpcenter/?articleId=22910&pwaDialog=article-dialog",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to Account, Security and Settings, then Delete Account."
	},
	{
		.name = "Experian",
		.query = "experian",
		.url = "https://www.experian.com",
		.email = "mailto:support@experian.com",
		.difficulty = 0x1000,
		.notes = "You have to call or email them. They respond to email quickly, however, so it is not that painful."
	},
	{
		.name = "Experian UK",
		.query = "experian uk",
		.url = "https://prodmove.experian.co.uk/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Head to 'Your Subscriptions' and click the 'Close your Experian Account' button. This will cancel any subscriptions and closes your account."
	},
	{
		.name = "Expo",
		.query = "expo",
		.url = "https://expo.dev/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the settings page, scroll down to the bottom of the page and follow the steps under 'Delete your account'."
	},
	{
		.name = "ExpressVPN",
		.query = "expressvpn",
		.url = "https://www.expressvpn.com/support/",
		.email = "mailto:support@expressvpn.zendesk.com?subject=Request%20to%20Delete%20my%20Account&body=To%20whom%20it%20may%20concern%2C%250D%250A%250D%250AI%20am%20reaching%20out%20to%20you%20to%20request%20the%20cancellation%20and%20deletion%20of%20the%20ExpressVPN%20account%20attached%20to%20this%20Email%20address%20and%20its%20data%20as%20I%20am%20no%20longer%20using%20the%20service.%250D%250A%250D%250ABest%20Regards",
		.difficulty = 0x1000,
		.notes = "You must either go through live support on the support page and specifically request the deletion of your account or write an e-mail from the registered address. Either way you will probably be asked to confirm again by mail."
	},
	{
		.name = "EZsniper",
		.query = "ezsniper",
		.url = "https://www.ezsniper.com/contact.php",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to fill in the contact form with the appropriate details, then in the body request for the deletion of your account and all data attached."
	},
	{
		.name = "F95Zone",
		.query = "f95zone",
		.url = "https://f95zone.to/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked page, confirm your password and click \"Delete account\"."
	},
	{
		.name = "Facebook",
		.query = "facebook",
		.url = "https://www.facebook.com/help/delete_account?rdrhc",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "While you can delete your account easily, some of the data including messages, are there to stay forever, just as stated in the website's privacy policy."
	},
	{
		.name = "Facebook Messenger",
		.query = "facebook messenger",
		.url = "https://www.facebook.com/help/messenger-app/458908261952384?cms_platform=android-app&helpref=platform_switcher",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "If you logged in with your Facebook account, you can just delete that account. If you registered using your phone number, go to your account settings and tap on *Delete Your Account and Information*."
	},
	{
		.name = "Faceit",
		.query = "faceit",
		.url = "https://support.faceit.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "See ['How do I get my personal details deleted on FACEIT?'](https://support.faceit.com/hc/en-us/articles/360001449004-How-do-I-get-my-personal-details-deleted-on-FACEIT-)"
	},
	{
		.name = "Facile.it",
		.query = "facileit",
		.url = "https://www.facile.it/cancellazione/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Fairphone",
		.query = "fairphone",
		.url = "https://www.fairphone.com/en/legal/fairphone-privacy-policy/#yourresponsibilitiesandrights",
		.email = "mailto:privacy@fairphone.com",
		.difficulty = 0x1000,
		.notes = "Need to email privacy@fairphone.com and ask for your account to be deleted. Takes around 14 working days for the account to be deleted."
	},
	{
		.name = "FamilySearch",
		.query = "familysearch",
		.url = "https://www.familysearch.org/identity/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go into your account settings and then click \"Delete Account\" at the bottom of the page."
	},
	{
		.name = "Fanatical",
		.query = "fanatical",
		.url = "https://www.fanatical.com/en/account/login",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and click 'Delete Account'."
	},
	{
		.name = "Fandom Wikia",
		.query = "fandom wikia",
		.url = "https://community.wikia.com/wiki/Special:CloseMyAccount",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click on 'Close my account'. Disables the account but cannot delete user data completely. Retains user contributions and username is not released."
	},
	{
		.name = "FanFiction",
		.query = "fanfiction",
		.url = "https://www.fanfiction.net/account/data_delete.php",
		.email = "mailto:support@fanfiction.com",
		.difficulty = 0x1000,
		.notes = "On the linked page, copy the provided code and send it to support@fanfiction.com using the email you registered with. Staff will respond and delete your account within 24 hours."
	},
	{
		.name = "Fastcompany",
		.query = "fastcompany",
		.url = "https://fastcompany.com",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can contact support if you would like to cancel a subscription but it is not possible to delete your account."
	},
	{
		.name = "FastWeb",
		.query = "fastweb",
		.url = "https://www.fastweb.com/login",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the URL and log in with your credentials. Go to 'My Account' -> 'Account' and select 'Delete My Account'. Answer 'Yes' to the prompt. FastWeb will immediately log you out, and your credentials will no longer work."
	},
	{
		.name = "FaucetPay",
		.query = "faucetpay",
		.url = "https://faq.faucetpay.io/knowledge-base/i-want-to-delete-my-account-how-can-i-do-it/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Accounts cannot be deleted by the users, they can only be suspended by writing at Customer Support"
	},
	{
		.name = "Fauna",
		.query = "fauna",
		.url = "https://support.fauna.com/hc/en-us/articles/1260807007229-How-do-I-delete-my-account-entirely-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "In the Fauna dashboard, create a new database named 'delete-request-{today's date in DDMMYYY}'. Then open a support ticket to request deletion."
	},
	{
		.name = "FDM Group",
		.query = "fdm group",
		.url = "https://www.fdmgroup.com/privacy/",
		.email = "mailto:DPO@FDMGroup.com",
		.difficulty = 0x1000,
		.notes = "Send an email to them."
	},
	{
		.name = "Featurebase",
		.query = "featurebase",
		.url = "https://help.featurebase.app/en/articles/8033192-how-to-delete-my-featurebase-account-organization-and-data",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "FedEx",
		.query = "fedex",
		.url = "https://privacyportal.onetrust.com/webform/8a471a7b-6a52-49d0-bcb0-fa8bdb61598f/c121cce6-6cfb-4c3d-9b61-334f56a01b5f",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You will be asked to upload photo ID after the initial form submission. Alternatively, you can call customer service to have your user ID deleted."
	},
	{
		.name = "Fedora",
		.query = "fedora",
		.url = "https://pagure.io/fedora-pdr/new_issue",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Create a new issue and ask for your account to be deleted."
	},
	{
		.name = "FeedBin",
		.query = "feedbin",
		.url = "https://feedbin.com/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the linked page, click 'Cancel Account'."
	},
	{
		.name = "Feedly",
		.query = "feedly",
		.url = "https://feedly.com/i/erase",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in and click the 'Delete Account' button."
	},
	{
		.name = "Ferox Hosting",
		.query = "ferox hosting",
		.url = "https://tickets.feroxhosting.nl/newissue",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to create a ticket regarding account deletion and you will be asked to prove ownership of the account."
	},
	{
		.name = "Fever",
		.query = "fever",
		.url = "https://feverup.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the app, tap 'profile' at the bottom right, then the gear icon at the upper right, scroll to the end and click 'Delete Account'. State the reason why and confirm. Deletion is immediate"
	},
	{
		.name = "Fidélité TCL",
		.query = "fidelite tcl",
		.url = "https://fidelite.tcl.fr/dashboard/profile/documentation/deleteAccount",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your profile page, go to \"Confidentialité\", then \"Supprimer mon compte\"."
	},
	{
		.name = "Figma",
		.query = "figma",
		.url = "https://www.figma.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in, click on your profile picture in the top right of the header, click on 'Settings', scroll down to the account section, click on 'Delete account', re-enter your account password, type 'delete my account' into the dialog box, and click on 'Delete account'."
	},
	{
		.name = "Filen.io",
		.query = "filenio",
		.url = "https://drive.filen.io/#/account/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "The deletion option is at the bottom of the second tab of the user settings page when logged in."
	},
	{
		.name = "Fin.do",
		.query = "findo",
		.url = "https://www.fin.do/support",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Request account deletion via the contact form."
	},
	{
		.name = "Finanzblick",
		.query = "finanzblick",
		.url = "https://finanzblick.de/webapp",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click on your username (top left) -> click on 'Profileinstellungen' -> 'Account löschen'. All data is fully erased."
	},
	{
		.name = "FinnishPod101.com",
		.query = "finnishpod101com",
		.url = "https://www.finnishpod101.com/#privacy_policy",
		.email = "mailto:contactus@finnishpod101.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Finviz",
		.query = "finviz",
		.url = "https://finviz.com/contact.ashx",
		.email = "mailto:support@finviz.com?subject=Data%20Deletion%20Request&body=Please%20delete%20my%20account%20registered%20with%20this%20email%20address.",
		.difficulty = 0x1000,
		.notes = "One must contact customer support via email or contact form to request account deletion."
	},
	{
		.name = "Firefox",
		.query = "firefox",
		.url = "https://accounts.firefox.com/settings/delete_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "“Cancel your account” link at the bottom of the page."
	},
	{
		.name = "fishtank",
		.query = "fishtank",
		.url = "https://www.fishtank.live",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Starting on the main page, click your profile picture, then 'Profile', press 'Delete Account' and type your email address."
	},
	{
		.name = "Fitbit",
		.query = "fitbit",
		.url = "https://www.fitbit.com/settings/profile",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "From the dashboard website, click 'Settings', then scroll down and click 'Delete Account'. You'll receive an e-mail with the link for the actual deletion."
	},
	{
		.name = "FitnessSyncer",
		.query = "fitnesssyncer",
		.url = "https://www.fitnesssyncer.com/account#Profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login, click profile link, scroll down to delete and confirm."
	},
	{
		.name = "Fitocracy",
		.query = "fitocracy",
		.url = "https://www.fitocracy.com/account/deletion/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Fiverr",
		.query = "fiverr",
		.url = "https://www.fiverr.com/support_tickets/account-and-security/data-and-privacy/remove-personal-data",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log-in, go to the link and make the request to **deactivate account**"
	},
	{
		.name = "Fixer.io",
		.query = "fixerio",
		.url = "https://fixer.io/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your account page, click 'delete account' at the bottom."
	},
	{
		.name = "FixMyCar",
		.query = "fixmycar",
		.url = "https://www.whocanfixmycar.com/terms#termination-of-services",
		.email = "mailto:team@whocanfixmycar.com",
		.difficulty = 0x1000,
		.notes = "You must contact support."
	},
	{
		.name = "Flat",
		.query = "flat",
		.url = "https://flat.io/settings/account/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log-in, go to the link and click the **Delete my account** button"
	},
	{
		.name = "Flathub",
		.query = "flathub",
		.url = "https://flathub.org/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in to your account, go to the linked page, click \"Delete account\" and confirm the deletion."
	},
	{
		.name = "Flaticon",
		.query = "flaticon",
		.url = "https://www.flaticon.com/profile/me",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down to the bottom of the linked page and click 'Close my account'."
	},
	{
		.name = "Flattr",
		.query = "flattr",
		.url = "https://flattr.com/settings/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Type your password and confirm your action by clicking \"Permanently delete account\"."
	},
	{
		.name = "Fleek",
		.query = "fleek",
		.url = "https://fleek.xyz/support/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Although the delete button exists, you cannot delete your Fleek account because \"that feature isn't live yet\""
	},
	{
		.name = "Flickr",
		.query = "flickr",
		.url = "https://www.flickr.com/profile_delete.gne",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Flightradar24",
		.query = "flightradar24",
		.url = "https://www.flightradar24.com/terms-and-conditions",
		.email = "mailto:support@fr24.com",
		.difficulty = 0x1000,
		.notes = "According to their Terms and Conditions, you must email them to delete your account."
	},
	{
		.name = "Flip",
		.query = "flip",
		.url = "https://admin.flip.com/manage/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down to the bottom of the page and click 'Delete Account'."
	},
	{
		.name = "Flipboard",
		.query = "flipboard",
		.url = "https://accounts.flipboard.com/accounts/remove",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Flixster",
		.query = "flixster",
		.url = "https://www.flixster.com",
		.email = "mailto:privacy@flixster-inc.com",
		.difficulty = 0x1000,
		.notes = "Email privacy@flixster-inc.com and ask to have your account deleted."
	},
	{
		.name = "Flo Health",
		.query = "flo health",
		.url = "https://help.flo.health/hc/en-us/requests/new",
		.email = "mailto:support@flo.health",
		.difficulty = 0x1000,
		.notes = "Contact support using the linked form or by email and request account deletion."
	},
	{
		.name = "Floatplane",
		.query = "floatplane",
		.url = "https://www.floatplane.com/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the 'Delete Account' button and type your password. Your account will be deleted in 2 weeks."
	},
	{
		.name = "FlokiNET",
		.query = "flokinet",
		.url = "https://flokinet.is/privacy",
		.email = "mailto:info@flokinet.is",
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "Floor Plan Creator",
		.query = "floor plan creator",
		.url = "https://floorplancreator.net/account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the 'Delete Account' button and confirm your selection."
	},
	{
		.name = "Floorplanner.com",
		.query = "floorplannercom",
		.url = "https://floorplanner.com/home/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Browse to your profile and select 'Account settings' then 'Delete my account forever'."
	},
	{
		.name = "Flowkey",
		.query = "flowkey",
		.url = "https://help.flowkey.com/en/articles/4466433-how-to-unsubscribe-or-delete-your-account",
		.email = "mailto:support@flowkey.com",
		.difficulty = 0x1000,
		.notes = "You need to send an email requesting to delete your account."
	},
	{
		.name = "Fluid UI",
		.query = "fluid ui",
		.url = "https://www.fluidui.com/contact",
		.email = "mailto:support@fluidui.com",
		.difficulty = 0x1000,
		.notes = "The easiest way is to log into your account, start the support chat in the bottom right corner and ask for account deletion. You can also contact the support by email."
	},
	{
		.name = "Fly.io",
		.query = "flyio",
		.url = "https://fly.io/user/deactivate",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Go to Account -> Settings -> Delete Account. Some steps need to be completed before deleting the account, e.g. delete apps and remove certificates. Then, just click 'Delete'."
	},
	{
		.name = "FMOD",
		.query = "fmod",
		.url = "https://fmod.com/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the linked page under Profile select 'To delete your account, click here'."
	},
	{
		.name = "Fnac",
		.query = "fnac",
		.url = "https://www.fnac.com/aide?question=comment-reinitialiser-mon-mot-de-passe",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Send a GDPR rights request to support."
	},
	{
		.name = "Foap",
		.query = "foap",
		.url = "https://www.foap.com/pages/contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting customer support."
	},
	{
		.name = "FogBugz",
		.query = "fogbugz",
		.url = "https://support.fogbugz.com/hc/en-us/articles/360011242754-Cancelling-a-FogBugz-or-Kiln-On-Demand-Subscription",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "The account retention period depends on the type of account you have."
	},
	{
		.name = "Follett",
		.query = "follett",
		.url = "https://www.follett.com/policies/",
		.email = "mailto:privacy@follett.com?subject=Data%20Deletion%20Request&body=Please%20delete%20my%20data%20from%20all%20Follett%20services%20under%20my%20email%20address%20XXXXXX.",
		.difficulty = 0x1000,
		.notes = "Scroll to the bottom and click the correct form or send an email."
	},
	{
		.name = "Followlike",
		.query = "followlike",
		.url = "https://www.followlike.net/settings.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On \"Delete Sites or Account\" section, click the red 'Delete account'."
	},
	{
		.name = "Font Awesome",
		.query = "font awesome",
		.url = "https://fontawesome.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Near the bottom of the linked page, click the red 'Delete Account' link. Confirm your password, then click 'Delete Account' again. If you have Font Awesome Pro, canceling your subscription will also start the process of deleting your account."
	},
	{
		.name = "FontStruct",
		.query = "fontstruct",
		.url = "https://fontstruct.com/private/user/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the linked page choose the 'Delete Everything' option, confirm your password and click 'Delete Account'."
	},
	{
		.name = "Foodmaxx",
		.query = "foodmaxx",
		.url = "https://foodmaxx.com/contact-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact customer service using the linked form and request account deletion, or call 1-800-692-5710."
	},
	{
		.name = "Fooducate",
		.query = "fooducate",
		.url = "http://fooducate.com/deleteaccount",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log into your profile, fill out reason (optional), click Delete"
	},
	{
		.name = "ForeverMissed",
		.query = "forevermissed",
		.url = "https://www.forevermissed.com/contactus",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Use the contact form to ask customer service to delete your account."
	},
	{
		.name = "Form.taxi",
		.query = "formtaxi",
		.url = "https://form.taxi/panel/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "If you are logged in, scroll down to the bottom of the page and click the 'Delete account' button."
	},
	{
		.name = "Formula 1",
		.query = "formula 1",
		.url = "https://account.formula1.com/#/en/privacy-policy",
		.email = "mailto:general@en.formula1.com",
		.difficulty = 0x1000,
		.notes = "Request deletion using the e-mail. There will be some back and forth on whether you want just the deletion or right to be forgotten, but it is all completed very quickly"
	},
	{
		.name = "Forvo",
		.query = "forvo",
		.url = "https://forvo.com/account-delete/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "forward2me",
		.query = "forward2me",
		.url = "https://www.forward2me.com/terms-of-trade/",
		.email = "mailto:info@forward2me.com",
		.difficulty = 0x1000,
		.notes = "You need to contact support to delete your account and personal information."
	},
	{
		.name = "Fotka",
		.query = "fotka",
		.url = "https://www.fotka.pl/ustawienia/konto_usun",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To delete your account, you must not post anything for at least three days."
	},
	{
		.name = "Foursquare",
		.query = "foursquare",
		.url = "https://foursquare.com/delete_me",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Foxford (Фоксфорд)",
		.query = "foxford фоксфорд",
		.url = "https://foxford.ru",
		.email = "mailto:ask@foxford.ru",
		.difficulty = 0x1000,
		.notes = "You have to email support to delete your account. You must have no active paid courses in order for your account to be deleted."
	},
	{
		.name = "Framer",
		.query = "framer",
		.url = "https://www.framer.com/contact/",
		.email = "mailto:support@framer.com",
		.difficulty = 0x1000,
		.notes = "You have to email the support to delete the account. They take a few hours to respond."
	},
	{
		.name = "Framework",
		.query = "framework",
		.url = "https://frame.work/support#contact_support",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to email Framework Support to delete the account. Simply press submit support request at bottom. Pick support category 'problem with account or website.'"
	},
	{
		.name = "France Identité",
		.query = "france identite",
		.url = "https.//idp.france-identite.gouv.fr/usager",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Enter your document number then a deletion code received by e-mail to delete your account."
	},
	{
		.name = "Franz",
		.query = "franz",
		.url = "https://meetfranz.com/user/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Navigate to the bottom of the profile page where you have the option to delete your account."
	},
	{
		.name = "FREAKHOSTING",
		.query = "freakhosting",
		.url = "https://freakhosting.com/clientarea/clientarea.php",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Create a ticket to the Billing department and request your account to be deleted."
	},
	{
		.name = "FreeBitco.In",
		.query = "freebitcoin",
		.url = "https://freebitco.in",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "This website does not provide options that allow the user to delete their account."
	},
	{
		.name = "FreeCodeCamp",
		.query = "freecodecamp",
		.url = "https://www.freecodecamp.org/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You'll need to access your account settings; it's under a section labeled Danger Zone"
	},
	{
		.name = "Freecycle",
		.query = "freecycle",
		.url = "https://freecycle.org/home/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "FreeDNS",
		.query = "freedns",
		.url = "https://freedns.afraid.org",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "It is impossible to delete your FreeDNS account. However, your account automatically gets tagged as \"dormant\" if you are using the free plan and haven't logged in for 6 months. When your account is dormant, all of your domains get temporarily suspended until you log back in and activate them again."
	},
	{
		.name = "Freejam",
		.query = "freejam",
		.url = "https://account.freejamgames.com/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the Account page, click \"Delete account\", type your username and confirm."
	},
	{
		.name = "Freelancer",
		.query = "freelancer",
		.url = "https://www.freelancer.in/users/settings.php#AccountSettings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click Close My Account in Account settings from above link. Complete the short survey, and click Close my account."
	},
	{
		.name = "Freeletics",
		.query = "freeletics",
		.url = "https://www.freeletics.com/en/settings/account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "After choosing to delete your account, a confirmation e-mail will be sent with a link you must visit."
	},
	{
		.name = "Freenom",
		.query = "freenom",
		.url = "https://my.freenom.com/clientarea.php?action=details",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "This website does not provide options that allow the user to delete their account."
	},
	{
		.name = "Freesound",
		.query = "freesound",
		.url = "https://freesound.org/home/delete/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You cannot delete your account yourself if you have sounds uploaded to your account. In their own words: \"Because you have sounds on freesound, deleting your user is not a trivial task. As such, we ask you to please [contact the administrators via the Contact Form](https://freesound.org/contact/). They will help you with the deletion of your account....\". Alternatively - you can go through all your sounds, delete them one-by-one, and then delete your account."
	},
	{
		.name = "Freshdesk",
		.query = "freshdesk",
		.url = "https://freshdesk.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the top tab, click 'Admin' then 'Account', at the bottom, and search for the 'cancel my account' on the right. It is not really deleted, just closed."
	},
	{
		.name = "Freshping",
		.query = "freshping",
		.url = "https://freshping.io",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to https://DOMAIN.freshping.io/settings/account (replace DOMAIN with your Freshping domain), scroll to the bottom of the page and press the \"Delete account\" button, then \"Yes, Proceed\" on the pop-up."
	},
	{
		.name = "Frontend Mentor",
		.query = "frontend mentor",
		.url = "https://www.frontendmentor.io/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the 'Delete Account' button and type your username."
	},
	{
		.name = "Fruux",
		.query = "fruux",
		.url = "https://fruux.com/account/login/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You will need to go to Account setting and click delete account"
	},
	{
		.name = "Function of Beauty",
		.query = "function of beauty",
		.url = "https://functionofbeauty.com/pages/contact-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You will need to request account deletion throught chat or email."
	},
	{
		.name = "Funimation",
		.query = "funimation",
		.url = "https://help.funimation.com/hc/en-us/articles/360046541711-How-do-I-delete-or-close-my-account-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "In the Submit a Request form, under \"How can we help you?,\" choose \"Subscription”, then \"Cancel or Delete Account\", and enter a brief description of your request in the “Description” field."
	},
	{
		.name = "Fur Affinity",
		.query = "fur affinity",
		.url = "https://www.furaffinity.net/controls/delete-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click the \"Send Account Deletion Confirmation Email\" button, which will trigger a mail with a deletion link"
	},
	{
		.name = "Furbase",
		.query = "furbase",
		.url = "https://forum.furbase.de/account-management/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the account management page, check the \"Delete User Account\" box and submit"
	},
	{
		.name = "FutureLearn",
		.query = "futurelearn",
		.url = "https://www.futurelearn.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down to the bottom of the page and click 'Delete my account'."
	},
	{
		.name = "FXhome",
		.query = "fxhome",
		.url = "https://fxhome.com",
		.email = "mailto:support@fxhome.com",
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "G2A",
		.query = "g2a",
		.url = "https://id.g2a.com/panel/account-details/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You will find a delete account button under 'My Account' -> 'Account details' click it and accept, you will then receive an email requiring you to confirm the account deletion. Confirm it, then your account will be deleted if you do not login in the next 14 days."
	},
	{
		.name = "G7",
		.query = "g7",
		.url = "https://aide.g7.fr/hc/fr/articles/7438978440476-Supprimer-mon-compte-G7",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "To delete the account, open the app and in the left menu at the bottom, click 'personal data' you will then find the 'delete account button'"
	},
	{
		.name = "Gab Social",
		.query = "gab social",
		.url = "https://gab.com/settings/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Under \"Account Settings\" there is an option to delete your account. Enter your password and press \"Delete Account\""
	},
	{
		.name = "Gadu-Gadu",
		.query = "gadugadu",
		.url = "https://www.gg.pl/pomoc/ustawienia-moje-konto-profil/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You will find option to remove your account under Profile - My Account tab, after log in. Removed GG account number is going back to available numbers for new users."
	},
	{
		.name = "Gaijin Entertainment",
		.query = "gaijin entertainment",
		.url = "https://support.gaijin.net/hc/en-us/articles/200071071-Account-Deletion-Suspension-",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "If you want to suspend your account on the Gaijin website, please press the \"Delete account\" link in your account's settings, or proceed directly through the \"Confirm account deletion\" link. After following the instructions from the letter, your account will be suspended."
	},
	{
		.name = "GAINSFIRE",
		.query = "gainsfire",
		.url = "https://www.gainsfire.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Open the App on your phone, navigate to your settings and select \"Delete account\" at the very bottom of the page."
	},
	{
		.name = "galaxy",
		.query = "galaxy",
		.url = "https://galaxy.click/settings#danger",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Navigate to the \"delete your account\" section of the \"danger zone\" in your account settings and follow the instructions. If you have published any games, you must delete them before you can proceed with account deletion. Games can be deleted within their edit page."
	},
	{
		.name = "Galaxy Play",
		.query = "galaxy play",
		.url = "https://galaxyplay.vn/account/info/delete-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Check the \"confirm\" checkbox and click \"Delete account\". Enter PIN code sent to your phone number. Your account will now be locked, logged out on all devices and will be permanently deleted after 14 days"
	},
	{
		.name = "Game Tracker",
		.query = "game tracker",
		.url = "http://www.gametracker.com/account/manage/edit.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down in the account manager and click on close account button. The account will be deleted 30 days after closing it."
	},
	{
		.name = "GameFAQs",
		.query = "gamefaqs",
		.url = "https://gamefaqs.gamespot.com/user/closedel",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To delete your account, first close it with the provided link, after that you will be able to delete it on the same page."
	},
	{
		.name = "Gameforge",
		.query = "gameforge",
		.url = "https://gameforge.com/support",
		.email = "mailto:support@gameforge.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "GameFront",
		.query = "gamefront",
		.url = "https://www.gamefront.com/account/delete",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Although the site claims to allow account deletion, it was not functional at the time of writing, instead returning a 500 status code (Internal Server Error). They claim that they will refuse to delete accounts through any other means."
	},
	{
		.name = "Gamefroot",
		.query = "gamefroot",
		.url = "https://make.gamefroot.com/privacypolicy",
		.email = "mailto:developer@gamefroot.com?subject=Account%20Deletion%20Request&body=Please%20delete%20my%20GameFroot%20account%20registered%20under%20this%20email%20address%2C%20and%20opt%20me%20out%20from%20receiving%20any%20marketing%20communications.",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting the developer. The privacy policy references a non-existent deletion link."
	},
	{
		.name = "GameGleam",
		.query = "gamegleam",
		.url = "https://www.gamegleam.com",
		.email = "mailto:support@gamegleam.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Gamehag",
		.query = "gamehag",
		.url = "https://www.gamehag.com/profile/edit",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Going to the bottom of the page and clicking on 'Delete Account' will only hide it, after deleting an account you can log back in and click recover even after years. E-mail does not work."
	},
	{
		.name = "GameJolt",
		.query = "gamejolt",
		.url = "https://gamejolt.com/account-deletion",
		.email = "mailto:contact@gamejolt.com?body=Please%20delete%20my%20GameJolt%20account%20under%20this%20email%20address.",
		.difficulty = 0x1000,
		.notes = "They only accept requests from the email address on your account."
	},
	{
		.name = "Gamemaker",
		.query = "gamemaker",
		.url = "https://auth.opera.com/account/delete-profile",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "There is no option to delete your gamemaker account without deleting your Opera account."
	},
	{
		.name = "GamersGate",
		.query = "gamersgate",
		.url = "https://www.gamersgate.com/account/delete/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "The account deletion form asks for a lot of information, some of which is already available in the account dashboard."
	},
	{
		.name = "Gamesplanet",
		.query = "gamesplanet",
		.url = "https://us.gamesplanet.com/support/17-account/141-delete-account",
		.email = "mailto:help@gamesplanet.com",
		.difficulty = 0x1000,
		.notes = "It is recommended to redeem/download any remaining purchases."
	},
	{
		.name = "Gamespot",
		.query = "gamespot",
		.url = "https://gamespot.com",
		.email = "mailto:support@gamespot.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Gamesradar",
		.query = "gamesradar",
		.url = "https://gamesradar.com",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "There is no way to delete your account."
	},
	{
		.name = "GameStop",
		.query = "gamestop",
		.url = "https://www.gamestop.com/PrivacyPolicy.html#section9",
		.email = "mailto:GSContentRequests@gamestop.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Gamma",
		.query = "gamma",
		.url = "https://gamma.app/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the profile icon in the top-right corner, go to Account Settings, select \"Delete my account\", check the confirmation box, and click \"Yes, delete my account\"."
	},
	{
		.name = "Garena",
		.query = "garena",
		.url = "https://www.garena.sg/support/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Accounts can only be deleted by opening a ticket to their support team."
	},
	{
		.name = "Garmin",
		.query = "garmin",
		.url = "https://www.garmin.com/account/datamanagement/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select the DELETE YOUR DATA option under the DATA MANAGEMENT section. Deletion process will be started and an email is sent upon finishing."
	},
	{
		.name = "GasBuddy",
		.query = "gasbuddy",
		.url = "https://help.gasbuddy.com/hc/en-us/requests/new?ticket_form_id=360001568313",
		.email = "mailto:privacyrequest@gasbuddy.com",
		.difficulty = 0x1000,
		.notes = "GasBuddy is unresponsive to account deletion requests, but you can try submitting a support ticket anyway using the linked form. If you're a California resident, you can submit a request to have your personal information deleted. You may be asked to submit more personal information to verify your identity."
	},
	{
		.name = "Gauges",
		.query = "gauges",
		.url = "https://gaug.es",
		.email = "mailto:support@gaug.es",
		.difficulty = 0x1000,
		.notes = "Contact support and request they delete your account."
	},
	{
		.name = "GBAtemp",
		.query = "gbatemp",
		.url = "https://gbatemp.net/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Gdeposylka",
		.query = "gdeposylka",
		.url = "https://gdeposylka.ru/auth/remove",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Gearbest",
		.query = "gearbest",
		.url = "https://wap-support.gearbest.com/ticket/ticket/ticket-add",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You will need to open a ticket. In the first field, select \"Account Management -> Advanced Account Information\" and then send your message requesting the deletion of the account. Within 48 hours, the customer support will return your message asking if you confirm the deletion of the account. You can also contact them [via email](mailto:support@gearbest.com)."
	},
	{
		.name = "GeekHunter",
		.query = "geekhunter",
		.url = "https://suporte.geekhunter.com.br/support/solutions/articles/9000185709-como-faco-para-excluir-minha-conta-",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In the right top menu, click on your profile then on 'Configurações'. Then click 'Excluir minha conta'."
	},
	{
		.name = "GeeksforGeeks",
		.query = "geeksforgeeks",
		.url = "https://auth.geeksforgeeks.org/delete-account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Gemini",
		.query = "gemini",
		.url = "https://support.gemini.com/hc/en-us/requests/new?ticket_form_id=1260809732969",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "To properly delete an account, go to the linked page, select \"Account Management & Verification\" in the left panel, and \"Data Privacy\" under the \"I need help with\" listbox. When the \"What type of data privacy request?\" listbox appears, select the appropriate option: CCPA, GDPR, or deletion request (for everyone else). This will send a ticket to their Support team."
	},
	{
		.name = "Genesis Cloud",
		.query = "genesis cloud",
		.url = "https://id.genesiscloud.com/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Geni",
		.query = "geni",
		.url = "https://www.geni.com/account_settings",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Delete any of the information you would like removed from the site. Then select 'Account Settings' and 'Close Account'"
	},
	{
		.name = "Genius",
		.query = "genius",
		.url = "https://support.genius.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Visit the linked page to submit a ticket. Select 'Account Deletion/Data Erasure Request' from the drop down and fill out the form. You will be sent an email that asks you to reply with 'Confirm Account Deletion' to process your request. You also won't be notified when your account is deleted."
	},
	{
		.name = "Gentoo Forums",
		.query = "gentoo forums",
		.url = "https://wiki.gentoo.org/wiki/Project:Forums#Account_removal_requests",
		.email = "mailto:forum-mods@gentoo.org?subject=Account%20Removal%20Request&body=I%20request%20for%20my%20Gentoo%20Forums%20account%20to%20be%20deleted.%20My%20username%20is%20XXXXXXXXX",
		.difficulty = 0x1000,
		.notes = "Send an email to forum-mods@gentoo.org requesting account deletion. However, all your forum posts and comments will still be shown, and your account will only be anonymized as detailed [here](https://wiki.gentoo.org/wiki/Project:Forums#Account_removal_requests)."
	},
	{
		.name = "Genymotion Cloud (SaaS)",
		.query = "genymotion cloud saas",
		.url = "https://support.genymotion.com/hc/en-us/requests/new?ticket_form_id=360000289657",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "First, log in to your account and go to the [Administration Panel](https://cloud.geny.io/administration/), cancel your plan and remove all credit cards. \nAfter doing that, you can [submit a support ticket requesting the account deletion](https://support.genymotion.com/hc/en-us/requests/new?ticket_form_id=360000289657)."
	},
	{
		.name = "Genymotion Desktop",
		.query = "genymotion desktop",
		.url = "https://www-v1.genymotion.com/account/#account-info",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in, and on the \"Account Info\" tab, scroll to the bottom and click \"Delete account\". There should then be a confirmation box, where you can delete your account."
	},
	{
		.name = "Geocaching",
		.query = "geocaching",
		.url = "https://www.geocaching.com/account/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click \"Delete your account\" at the bottom of the page, then click \"Yes, delete my account\"."
	},
	{
		.name = "GeoGebra",
		.query = "geogebra",
		.url = "https://accounts.geogebra.org/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down to the bottom of the linked page and click the button to delete your account."
	},
	{
		.name = "GeoGuessr",
		.query = "geoguessr",
		.url = "https://www.geoguessr.com/me/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Just click delete account at the bottom of the page and confirm account deletion."
	},
	{
		.name = "Geotastic",
		.query = "geotastic",
		.url = "https://geotastic.net/account/account-settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click \"delete account\" on the linked page."
	},
	{
		.name = "GermanTechJobs",
		.query = "germantechjobs",
		.url = "https://germantechjobs.de/contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Click on the 'Log in' button. Then, go to 'Account' and 'Delete Account'. You will be redirected to write to the support email. Account gets deleted within 48 hours."
	},
	{
		.name = "get.tech",
		.query = "gettech",
		.url = "https://get.tech/privacy-policy",
		.email = "mailto:privacy@radix.email",
		.difficulty = 0x1000,
		.notes = "Contact the following email from the registered email to remove your account."
	},
	{
		.name = "GetContact",
		.query = "getcontact",
		.url = "https://www.getcontact.com/manage",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You need to login on the website via WhatsApp, Telegram or SMS and then proceed to deletion."
	},
	{
		.name = "GetCreditScore",
		.query = "getcreditscore",
		.url = "https://www.getcreditscore.com.au",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select the Delete My Account option on the preferences page and click submit."
	},
	{
		.name = "Gettr",
		.query = "gettr",
		.url = "https://gettr.com/settings/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "GG2U",
		.query = "gg2u",
		.url = "https://www.gg2u.org/privacy.html",
		.email = "mailto:privacy@gg2u.org",
		.difficulty = 0x1000,
		.notes = "You need to email them for them to erase your account."
	},
	{
		.name = "GHash.IO",
		.query = "ghashio",
		.url = "https://support.cex.io/",
		.email = "mailto:support@cex.io?subject=Delete%20Account",
		.difficulty = 0x1000,
		.notes = "You can't delete your account without contacting them. You must set the subject to 'Delete Account'"
	},
	{
		.name = "Giant Bomb",
		.query = "giant bomb",
		.url = "https://www.giantbomb.com",
		.email = "mailto:support@giantbomb.com",
		.difficulty = 0x1000,
		.notes = "You can delete your account by contacting support."
	},
	{
		.name = "Giphy",
		.query = "giphy",
		.url = "https://giphy.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the \"Delete Your Account\" button at the bottom of the page."
	},
	{
		.name = "GitBook",
		.query = "gitbook",
		.url = "https://app.gitbook.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom of your account settings and click \"Delete Account\""
	},
	{
		.name = "GitHub",
		.query = "github",
		.url = "https://github.com/settings/admin#:~:text=Delete%20account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'Delete account' near the bottom of the page and follow the instructions. Some user content will continue to exist anonymously on the website."
	},
	{
		.name = "GitKraken",
		.query = "gitkraken",
		.url = "https://app.gitkraken.com/account-info/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Type in the verification message \"Delete My Account\" as required and confirm deletion."
	},
	{
		.name = "GitLab",
		.query = "gitlab",
		.url = "https://gitlab.com/-/profile/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'Delete account' near the bottom of the page. Some user content will continue to exist anonymously on the website."
	},
	{
		.name = "GitPod",
		.query = "gitpod",
		.url = "https://gitpod.io/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'Delete account' near the bottom of the page."
	},
	{
		.name = "Gizmodo",
		.query = "gizmodo",
		.url = "https://notice.sp-prod.net/sar/index.html?message_id=539278&account_id=1195&ccpa_type=delete",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form using the email address of your account and click on the verification link that is sent."
	},
	{
		.name = "Glassdoor",
		.query = "glassdoor",
		.url = "https://help.glassdoor.com/s/privacyrequest",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form on the linked page. Under the field \"What is your personal data request?\", select \"Delete my personal data\". You will be asked to verify your email and then your account will be deleted within 30 days."
	},
	{
		.name = "Glide (UK)",
		.query = "glide uk",
		.url = "https://prearrival.glidestudent.co.uk/privacy-policy",
		.email = "mailto:dpo@glide.co.uk?subject=Data%20Deletion%20Request&body=Please%20delete%20my%20account%20and%20data%20registered%20with%20this%20email%20address.",
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "Glitch",
		.query = "glitch",
		.url = "https://glitch.com/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in first, go to the url, scroll down and press delete account."
	},
	{
		.name = "Glorious Forums",
		.query = "glorious forums",
		.url = "https://gloriousforum.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select your account in the top right, select the bottom-most yellow button (contact icon), and select \"Delete My Account\". Confirm your selection, and it is done."
	},
	{
		.name = "Glovo",
		.query = "glovo",
		.url = "https://privacyportal-de.onetrust.com/webform/823e95df-5300-421a-bd72-0c9e0180184f/ff436245-5e5d-44f9-8463-eb48c2052eb5",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "It is also possible to file an account deletion request via the \"Contact Us\" section at the bottom of the page."
	},
	{
		.name = "Glyph / Trion Worlds / Gamigo",
		.query = "glyph trion worlds gamigo",
		.url = "https://support.gamigo.com/hc/en-us/articles/204884188-How-do-I-delete-my-Glyph-account-",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "In order to delete your account, you have to log in, go to \"Security and Privacy\" and press \"Delete my account\" and enter a code that has been sent to you with email."
	},
	{
		.name = "Gmail",
		.query = "gmail",
		.url = "https://myaccount.google.com/deleteservices",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click the trash can next to gmail, enter your new email address, and confirm the verification email. You can request a copy of your data, before you delete it.\nIf you want to delete your entire google account, use the instructions for [Google](https://justdeleteme.xyz/#google)."
	},
	{
		.name = "GMX",
		.query = "gmx",
		.url = "https://www.gmx.net",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You can delete your account, by following the steps provided here: 'https://hilfe.gmx.net/account/verwalten/loeschen.html'"
	},
	{
		.name = "GNC",
		.query = "gnc",
		.url = "https://www.gnc.com/help/contact-us.html#chat",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Open a live chat -> Ask for agent -> Request account deletion. Put a random phone number if you need to. It will take 7-10 days for it to be processed."
	},
	{
		.name = "GNOME",
		.query = "gnome",
		.url = "https://extensions.gnome.org/accounts/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In the section Account removal, you need to accept the option delete your account, and input your password."
	},
	{
		.name = "Gocatch",
		.query = "gocatch",
		.url = "https://gocatch.zendesk.com/hc/en-us/articles/115005902046-How-to-deactivate-or-reactivate-your-GoCatch-account",
		.email = "mailto:support@gocatch.com",
		.difficulty = 0x1000,
		.notes = "Either submit a request via the Gocatch support site or send an email to them and ask for your account to be permanently deleted (specify that you do not want it to be able to be reactivated at a later date). Although the information on the support page only mentions account 'deactivation', the company appears to honour requests for deletion."
	},
	{
		.name = "GoDaddy",
		.query = "godaddy",
		.url = "https://account.godaddy.com/preferences",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Navigate to account preferences, select to \"Close Account\" and confirm."
	},
	{
		.name = "GoFundMe",
		.query = "gofundme",
		.url = "https://www.gofundme.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in first, go to the url, scroll down and press delete account."
	},
	{
		.name = "GOG",
		.query = "gog",
		.url = "https://www.gog.com/en/account/settings/delete_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in first, go to the url, press DELETE ACCOUNT and an e-mail will be sent. After confirming your account will be permanently deleted after 14 days."
	},
	{
		.name = "Goggles4u",
		.query = "goggles4u",
		.url = "https://www.goggles4u.co.uk/privacy-policy",
		.email = "mailto:steve@goggles4u.com",
		.difficulty = 0x1000,
		.notes = "Email steve@goggles4u.com and ask to have your account deleted."
	},
	{
		.name = "Gogo",
		.query = "gogo",
		.url = "https://www.gogoair.com/dsar/",
		.email = "mailto:customercare@gogoair.com",
		.difficulty = 0x1000,
		.notes = "Select \"Delete My Data\" on the form for the request type."
	},
	{
		.name = "GoJek",
		.query = "gojek",
		.url = "https://www.go-jek.com/contact/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Email customer service to request deletion."
	},
	{
		.name = "GoldenLine",
		.query = "goldenline",
		.url = "https://www.goldenline.pl/ustawienia/kasuj-konto/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Golf GameBook Scorecard & GPS",
		.query = "golf gamebook scorecard gps",
		.url = "https://golfgamebook.com/privacy-policy/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You can delete profile from account settings in the app."
	},
	{
		.name = "Good Food",
		.query = "good food",
		.url = "https://www.makegoodfood.ca/en/faq#heading-13",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "It is impossible to close your account. You can contact the customer service just for them to suspend your account (and payments)."
	},
	{
		.name = "Good Noows",
		.query = "good noows",
		.url = "https://goodnoows.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the top bar, click on 'Your name', then click on the 'Delete Account' button at the bottom of the dialog."
	},
	{
		.name = "Goodlord",
		.query = "goodlord",
		.url = "https://www.goodlord.co/privacy-policy",
		.email = "mailto:privacy@goodlord.co",
		.difficulty = 0x1000,
		.notes = "You must send an e-mail to the privacy team."
	},
	{
		.name = "Goodreads",
		.query = "goodreads",
		.url = "https://www.goodreads.com/user/destroy",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Google",
		.query = "google",
		.url = "https://security.google.com/settings/security/deleteaccount",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Google One",
		.query = "google one",
		.url = "https://myaccount.google.com/deleteservices",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click the trash can next to Google One and confirm the verification email. You can request a copy of your data, before you delete it.\nIf you want to delete your entire google account, use the instructions for [Google](https://justdeleteme.xyz/#google)."
	},
	{
		.name = "Google Pay",
		.query = "google pay",
		.url = "https://myaccount.google.com/deleteservices",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click the trash can next to Google Pay and confirm the verification email. You can request a copy of your data, before you delete it.\nIf you want to delete your entire google account, use the instructions for [Google](https://justdeleteme.xyz/#google)."
	},
	{
		.name = "GoPetition",
		.query = "gopetition",
		.url = "https://www.gopetition.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Enter a reason for closing and your password and click delete, however this is more like a deactivation as you can contact them to undelete it"
	},
	{
		.name = "Gorila",
		.query = "gorila",
		.url = "https://app.gorila.com.br/app/configuracoes-da-conta/pessoal/preferencias",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login, go to your account configuration and click delete account"
	},
	{
		.name = "GoSquared",
		.query = "gosquared",
		.url = "https://www.gosquared.com/home/account/close",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select a reason for closing and it'll take 2 clicks."
	},
	{
		.name = "Gov.br",
		.query = "govbr",
		.url = "https://www.gov.br/governodigital/pt-br/identidade/conta-gov-br/exclusao-da-conta-gov.br",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "According to the help page, you can delete your account by contacting gov.br's help desk. The account is also deleted when the user/citizen passes away."
	},
	{
		.name = "gPodder",
		.query = "gpodder",
		.url = "https://www.gpodder.net/account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to account, select Delete Account at bottom of page, and click the red button labeled Delete Account."
	},
	{
		.name = "Grab",
		.query = "grab",
		.url = "https://www.grab.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Swipe left to right from the edge of screen, tap the profile picture, scroll down until you see delete account."
	},
	{
		.name = "Gradcracker",
		.query = "gradcracker",
		.url = "https://www.gradcracker.com/my-gradcracker/my-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page, scroll to the bottom of the page, click \"Delete my account\" and confirm."
	},
	{
		.name = "Gradescope",
		.query = "gradescope",
		.url = "https://guides.gradescope.com/hc/en-us/articles/21587242755341-Editing-Your-Account",
		.email = "mailto:help@gradescope.com",
		.difficulty = 0x1000,
		.notes = "Send an account deletion request to the provided email. The process will take several days since they need to contact the school/organization linked to your account to request deletion."
	},
	{
		.name = "Graduate-Jobs.com",
		.query = "graduatejobscom",
		.url = "https://www.graduate-jobs.com/sign-in/account/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click your name on the top right, click \"Settings\", scroll down and then click \"Delete Account\". You will be prompted to enter your password."
	},
	{
		.name = "Grafana",
		.query = "grafana",
		.url = "https://community.grafana.com/t/how-to-delete-account/18415",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Need to open a support ticket."
	},
	{
		.name = "Grailed",
		.query = "grailed",
		.url = "https://www.grailed.com",
		.email = "mailto:arun@grailed.com",
		.difficulty = 0x1000,
		.notes = "Send an email to arun@grailed.com and request deletion."
	},
	{
		.name = "Grammarly",
		.query = "grammarly",
		.url = "https://app.grammarly.com/profile/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Gravatar",
		.query = "gravatar",
		.url = "https://gravatar.com",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can't delete your Gravatar Account without deleting your entire WordPress Account."
	},
	{
		.name = "GreasyFork",
		.query = "greasyfork",
		.url = "https://greasyfork.org/en/users/delete_info",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Use the link provided to request account deletion. An e-mail will be sent to confirm it and then you're done."
	},
	{
		.name = "Green Man Gaming",
		.query = "green man gaming",
		.url = "https://corporate.greenmangaming.com/privacy-policy",
		.email = "mailto:dataprotection@greenmangaming.com",
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "Greip",
		.query = "greip",
		.url = "https://docs.greip.io/knowledge-base/account-management/account-deletion",
		.email = "mailto:support@greip.io?subject=Greip%20Account%20Deletion%20Request&body=Hi%2C%20Please%20delete%20my%20Greip%20account%20which%20is%20registered%20under%20this%20email%20address.",
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "Grindr",
		.query = "grindr",
		.url = "https://help.grindr.com/hc/en-us/requests/new?ticket_form_id=24054",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Submit an account deletion request via their web form, including all requested account details."
	},
	{
		.name = "GroupMe",
		.query = "groupme",
		.url = "https://app.groupme.com/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the GroupMe profile page, then click 'Delete GroupMe Account'. If you are the owner of any groups, you must transfer them to someone else first."
	},
	{
		.name = "Groupon (USA)",
		.query = "groupon usa",
		.url = "https://privacy.groupon.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select \"Delete all my data\" and verify your identity."
	},
	{
		.name = "Groupon (Worldwide)",
		.query = "groupon worldwide",
		.url = "https://privacy.groupon.co.uk/?modal=take-control",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select \"Delete all my data\" and verify your identity."
	},
	{
		.name = "GrubHub",
		.query = "grubhub",
		.url = "https://www.grubhub.com/help/privacy/manage-your-data",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click the link to submit a request under \"Delete your personal information\""
	},
	{
		.name = "Gryphline",
		.query = "gryphline",
		.url = "https://user.gryphline.com/cancellation",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Verify email and then wait for 14 days."
	},
	{
		.name = "GTmetrix",
		.query = "gtmetrix",
		.url = "https://gtmetrix.com/dashboard/delete_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account and click on 'Request Account Deletion' or follow the link, Answer questions and click on 'Continue', Confirm deletion via entering password and click 'Delete Account'."
	},
	{
		.name = "The Guardian",
		.query = "the guardian",
		.url = "https://profile.theguardian.com/delete",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Scroll to the bottom of the linked page, enter your password and confirm by clicking the \"Delete your account\" button. Deleting your account does not cancel subscriptions, see further information in the linked page."
	},
	{
		.name = "Guild Wars",
		.query = "guild wars",
		.url = "https://help.guildwars2.com/hc/de/requests/new?ticket_form_id=38933",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to create a support ticket and request for them to delete your account. Before your account gets deleted you need to answer why you want the account to be deleted."
	},
	{
		.name = "Guilded",
		.query = "guilded",
		.url = "https://www.guilded.gg",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In account settings under Overview select 'Edit account', then 'Delete account', confirm your password and choose a deletion reason."
	},
	{
		.name = "Guildtag",
		.query = "guildtag",
		.url = "https://guildtag.com",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Navigate to your profile editor and click 'Delete Account'. If you want your posts deleted, you must remove them individually beforehand."
	},
	{
		.name = "Gule Sider (Norwegian Yellow Pages)",
		.query = "gule sider norwegian yellow pages",
		.url = "https://oppdater.gulesider.no/person",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "In order to change your information on Gule Sider you'll have to find your profile by searching it in the search box from the link above, and sign in using BankID. You will be able to **edit** your information. **You can't fully remove yourself (remove your name), but you can remove your address and phone number.** Some people don't have BankID, for example minors. If you are a minor without BankID, try asking your parents for help. If you're an adult/teen without BankID you're probably screwed.  Their [help page](https://www.gulesider.no/hjelp/mine-opplysninger) about changing your details seems to be out of date."
	},
	{
		.name = "Gumroad",
		.query = "gumroad",
		.url = "https://gumroad.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "There is a link at the bottom of the Settings page to delete your account."
	},
	{
		.name = "Gumtree",
		.query = "gumtree",
		.url = "https://www.gumtree.com/manage-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "There is a link at the bottom of the page to deactivate your account."
	},
	{
		.name = "guns.lol",
		.query = "gunslol",
		.url = "https://guns.lol",
		.email = "mailto:support@guns.lol?subject=Delete%20Account%20Request&body=Dear%20guns.lol%20support%20team%2C%20I%20hope%20this%20message%20finds%20you%20well.%20I%20would%20like%20to%20formally%20request%20the%20closure%20and%20the%20deletion%20of%20all%20associated%20personal%20data%20and%20account.%20Below%20are%20my%20account%20details%3A%20Email%20Address%3A%20XXXXX%40XXXXX.XXXXX%2C%20UID%3A%20XXXXX.%20I%20would%20appreciate%20it%20if%20you%20could%20process%20my%20account%20closure%20request%20as%20soon%20as%20possible.%20Please%20confirm%20once%20the%20account%20has%20been%20deleted%20and%20all%20associated%20data%20has%20been%20deleted.%20Best%20regards%2C%20XXXXX",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "gutefrage",
		.query = "gutefrage",
		.url = "https://www.gutefrage.net/datenschutz",
		.email = "mailto:info@gutefrage.net",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Gyazo",
		.query = "gyazo",
		.url = "https://gyazo.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom of the webpage, and click the red \"Delete Account\" button"
	},
	{
		.name = "Habbo",
		.query = "habbo",
		.url = "https://help.habbo.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Log in on the respective site and submit a request to delete your account."
	},
	{
		.name = "Habitica",
		.query = "habitica",
		.url = "https://habitica.com/user/settings/general",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log into your account, click the User icon in the top-right corner, click Settings in the drop-down menu, and click the 'Learn More' next to Delete Account."
	},
	{
		.name = "Hack The Box",
		.query = "hack the box",
		.url = "https://app.hackthebox.eu/profile/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the page, click 'Delete Account'."
	},
	{
		.name = "Hack This Site",
		.query = "hack this site",
		.url = "https://www.hackthissite.org/user/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the page, click 'CONFIRM MY ACCOUNT DELETION'."
	},
	{
		.name = "Hackaday.io",
		.query = "hackadayio",
		.url = "https://hackaday.io",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, go to 'Edit my Account', then 'Delete your account'. You will then be prompted to enter your password. Then click delete."
	},
	{
		.name = "Hacker News",
		.query = "hacker news",
		.url = "https://news.ycombinator.com/item?id=23623799",
		.email = "mailto:hn@ycombinator.com",
		.difficulty = 0x1000,
		.notes = "You can remove your account's data, including your email, but removal of your posts should be negotiated with the staff, as it may harm the project."
	},
	{
		.name = "Hacker One",
		.query = "hacker one",
		.url = "https://hackerone.com/settings/deactivate/edit",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Deleting your account requires you to first create an account on their support platform, you can then request account deletion by creating a ticket."
	},
	{
		.name = "Hackerearth",
		.query = "hackerearth",
		.url = "https://www.hackerearth.com/users/profile-settings/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Scrolling all the way down to select the option \"Delete my account\", under \"Account Settings\", a pop-up window appears, indicating the real procedure: Click on the question mark (?) icon at the bottom right corner of the page, then click on \"Raise a ticket\" in the chat window that appears. When the chatbot asks for the account e-Mail address, reply with it, and finally, when the chatbot asks for details, reply with: \"I would like to have my account deleted.\". Their support team will reach out via e-Mail in at most 48 hours."
	},
	{
		.name = "Hackerrank",
		.query = "hackerrank",
		.url = "https://www.hackerrank.com/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "According to the site you must go to the profile settings url and there will be a button called 'delete account' which will delete the account if it is wished to."
	},
	{
		.name = "Happy Scribe",
		.query = "happy scribe",
		.url = "https://www.happyscribe.co/users/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to \"Settings -> Delete Account -> Delete my account\"."
	},
	{
		.name = "Hark Audio",
		.query = "hark audio",
		.url = "https://harkaudio.com/support",
		.email = "mailto:hello@harkaudio.com?subject=Account%20Deletion%20Request&body=Please%20delete%20my%20Hark%20Audio%20account%20which%20is%20registered%20under%20this%20email%20address.",
		.difficulty = 0x1000,
		.notes = "Email hello@harkaudio.com and ask to have your account deleted"
	},
	{
		.name = "Harney & Sons Fine Teas",
		.query = "harney sons fine teas",
		.url = "https://www.harney.com/pages/contact-us",
		.email = "mailto:customerservice@harneyteas.com",
		.difficulty = 0x1000,
		.notes = "Contact them through email or phone and ask for account to be deleted"
	},
	{
		.name = "Harvard Business Publishing Education",
		.query = "harvard business publishing education",
		.url = "https://hbsp.harvard.edu/privacy-policy/#8",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Login to your account and navigate to \"General Data Protection Regulation\" on the Privacy Policy page. A form will appear to submit a request to delete your data."
	},
	{
		.name = "HBO Max",
		.query = "hbo max",
		.url = "https://privacyportal.onetrust.com/webform/1b21e05d-c206-4e0b-970e-2d73a23e42e8/6555225c-a911-4af8-bdb5-20158994ece0",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "It is also possible to file an account deletion request in the iOS app (account settings -> subscription)"
	},
	{
		.name = "hCaptcha",
		.query = "hcaptcha",
		.url = "https://www.hcaptcha.com/privacy",
		.email = "mailto:support@hcaptcha.com?subject=Account%20Deletion%20Request&body=Please%20delete%20my%20hCaptcha%20account%20which%20is%20registered%20under%20this%20email%20address.",
		.difficulty = 0x1000,
		.notes = "You must send an email to delete your account."
	},
	{
		.name = "HeadHunter",
		.query = "headhunter",
		.url = "https://hh.ru/account/delete_me",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Headliner",
		.query = "headliner",
		.url = "https://learn.headliner.app/hc/en-us/articles/360003796513-How-do-I-delete-my-account-",
		.email = "mailto:support@headliner.app",
		.difficulty = 0x1000,
		.notes = "You have to send an email to support@headliner.app"
	},
	{
		.name = "HeadshotGenerator",
		.query = "headshotgenerator",
		.url = "https://www.headshotgenerator.io/dashboard",
		.email = "mailto:contact@headshotgenerator.io",
		.difficulty = 0x1000,
		.notes = "You have to send an email."
	},
	{
		.name = "Headspace",
		.query = "headspace",
		.url = "https://my.headspace.com/profile/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click \"Delete my account\" and follow the instructions that appear."
	},
	{
		.name = "HelloFax",
		.query = "hellofax",
		.url = "https://www.hellofax.com/home/myAccount",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click \"Delete my account\" and follow the instructions that appear."
	},
	{
		.name = "HelloFresh",
		.query = "hellofresh",
		.url = "https://privacy.hellofresh.com/data-privacy",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to fill out the form, then confirm your email. Once done, a request will be made. Don't get distracted by the confetti."
	},
	{
		.name = "HelloWallet",
		.query = "hellowallet",
		.url = "https://my.hellowallet.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login, go to setting, click 'Cancel My Membership' and confirm."
	},
	{
		.name = "HelpScout",
		.query = "helpscout",
		.url = "https://docs.helpscout.com/article/473-cancel-your-help-scout-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login, go to Account and click on Cancel Account"
	},
	{
		.name = "Hemingway Editor",
		.query = "hemingway editor",
		.url = "https://hemingwayapp.com/help#more-help",
		.email = "mailto:support@hemingwayapp.com",
		.difficulty = 0x1000,
		.notes = "Since there is no button, you must contact them through E-Mail. Thankfully, the wait time for their response is brief; however, this may differ from one to another."
	},
	{
		.name = "Hepsiburada",
		.query = "hepsiburada",
		.url = "https://www.hepsiburada.com/cozummerkezi/sikca-sorulan-sorular-detay/220",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to fill out a request form in order to get your account deleted."
	},
	{
		.name = "Heroes and Generals",
		.query = "heroes and generals",
		.url = "https://account.heroesandgenerals.com/deleteaccount.aspx/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You need to fill the form and submit it. There is a 30 days period in which you can reverse your decision. After that your account will be deleted."
	},
	{
		.name = "Heroku",
		.query = "heroku",
		.url = "https://dashboard.heroku.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "“Close your account...” link at the bottom of the page."
	},
	{
		.name = "HeroX",
		.query = "herox",
		.url = "https://www.herox.com/profile/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Account deletion button can be found at the bottom of the profile edit page."
	},
	{
		.name = "Hetzner",
		.query = "hetzner",
		.url = "https://accounts.hetzner.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Enter Hetzner account management, find user deletion seciton and click Delete User Account."
	},
	{
		.name = "Hi-Rez Studios",
		.query = "hirez studios",
		.url = "https://my.hirezstudios.com/security",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Go to the link provided, make sure the email address is verified and on the Security Tab click \"CLICK HERE TO REQUEST AN ACCOUNT DELETION OR MAKE AN ACCOUNT DATA REQUEST\" and follow the steps on the screen."
	},
	{
		.name = "Hi5",
		.query = "hi5",
		.url = "https://www.hi5.com/account_cancel.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "hide.me",
		.query = "hideme",
		.url = "https://member.hide.me/en/settings/delete-account/form",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click \"Account settings\" and then the red button \"Delete my account\" at the bottom of the page."
	},
	{
		.name = "HigherMe",
		.query = "higherme",
		.url = "https://app.higherme.com/profile/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select \"Delete Account,\" confirm your email, then select \"Yes, delete account.\" You have 30 days to recover the account."
	},
	{
		.name = "HiiCash",
		.query = "hiicash",
		.url = "https://www.hiicash.app/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "The account deletion feature isn't live yet.They say it’ll be added later – same thing they said a year ago. I don’t think it'll ever happen."
	},
	{
		.name = "HiNative",
		.query = "hinative",
		.url = "https://hinative.com/users/edit?type=delete_my_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click \"Settings\", then \"My Account\", then \"Delete my account\", and finally click the red \"Delete my account\" button."
	},
	{
		.name = "Histats",
		.query = "histats",
		.url = "https://www.histats.com/viewstats/?act=1",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the red 'Delete Account'."
	},
	{
		.name = "HitBTC",
		.query = "hitbtc",
		.url = "https://support.hitbtc.com/en/support/tickets/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact the customer support using the contact form and request the deletion of your account. After receiving a response from support, confirm the deletion by replying to that email. Note: Your balance must be empty before doing this process."
	},
	{
		.name = "HitFilm",
		.query = "hitfilm",
		.url = "https://fxhome.com/privacy",
		.email = "mailto:privacy@fxhome.com",
		.difficulty = 0x1000,
		.notes = "Must email them in order to get personal data deleted."
	},
	{
		.name = "HITHIT",
		.query = "hithit",
		.url = "https://www.hithit.com/en/article/privacyPolicy",
		.email = "mailto:info@hithit.cz",
		.difficulty = 0x1000,
		.notes = "Email their support with the associated E-mail address to delete your account."
	},
	{
		.name = "Hive Social",
		.query = "hive social",
		.url = "https://www.hivesocial.app/help-center/deactivation",
		.email = "mailto:support@hivesocial.app",
		.difficulty = 0x1000,
		.notes = "Email their support with username and associated Email address to delete your account."
	},
	{
		.name = "HOL Virtual Hogwarts",
		.query = "hol virtual hogwarts",
		.url = "https://hol.org.uk/profile.php?view=quithol",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can remove information and manually quit HOL, but your account stays forever."
	},
	{
		.name = "Holiday Pirates",
		.query = "holiday pirates",
		.url = "http://www.holidaypirates.com/user/profile/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "\"Delete\" button at the bottom of the page."
	},
	{
		.name = "Holland and Barrett",
		.query = "holland and barrett",
		.url = "hollandandbarrett.com/my-account/security-settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Just click the 'Delete Account' button. Account is deleted instantly, account details are stored for 3 years then erased completely."
	},
	{
		.name = "Holopin",
		.query = "holopin",
		.url = "https://www.holopin.io/privacy.html",
		.email = "mailto:support@holopin.io",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "The Home Depot México",
		.query = "the home depot mexico",
		.url = "https://www.homedepot.com.mx/ayuda-configuracion-cuenta#:~:text=a%20tu%20correo.-,Pasos%20para%20eliminar%20tu%20cuenta%20de%20The%20Home%20Depot%20M%C3%A9xico,-Para%20eliminar%20tu",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "To delete the account, it's necessary to call them at +52 800 004 6633, and request to the associate the account deletion."
	},
	{
		.name = "Honey",
		.query = "honey",
		.url = "https://www.joinhoney.com/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked and page, click \"DeleteAccount\" and confirm. For more details see this [help article](https://help.joinhoney.com/article/53-how-do-i-delete-my-honey-account)."
	},
	{
		.name = "Honeygain",
		.query = "honeygain",
		.url = "https://dashboard.honeygain.com/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your profile settings. Click 'Delete' next to your email address. For more info read this [article](https://support.honeygain.com/hc/en-us/articles/360011094940-How-can-I-delete-my-account)."
	},
	{
		.name = "Honeypot.io",
		.query = "honeypotio",
		.url = "https://app.honeypot.io/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the profile page, click the cog icon, click 'delete your account' and then 'yes delete'"
	},
	{
		.name = "Hooked (Deals)",
		.query = "hooked deals",
		.url = "https://www.hookedapp.com/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Hooked's privacy policy contains no provisions for deleting personal information once that information has been given, unless that information is inaccurate or the user is less than eighteen years of age. Falsely representing your age to get an account deleted is not recommended. The best that you can do is to forget your login credentials. If you re-used your account password elsewhere, be sure to change your password on those sites. (Changing your Hooked account password is also impossible.)"
	},
	{
		.name = "Hoop",
		.query = "hoop",
		.url = "https://hoop.photo/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Navigate to 'Account' -> 'gear icon' -> 'delete account' -> 'delete'. This will remove some of your account data, but not all. There is no way to remove all data, despite their privacy policy claiming it is."
	},
	{
		.name = "Hostelsclub",
		.query = "hostelsclub",
		.url = "https://www.hostelsclub.com",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can remove every information from your account or if you signed up using a social network disconnect it."
	},
	{
		.name = "Hostinger",
		.query = "hostinger",
		.url = "https://hpanel.hostinger.com/profile/personal-information",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'Delete account' at the bottom of the page, click on continue and then confirm you'd like to delete your account."
	},
	{
		.name = "Hot or Not",
		.query = "hot or not",
		.url = "https://hotornot.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Sign in to your account, go to the 'Account' options in your settings and delete your profile. See also ['Can I deactivate or delete my Profile?'](https://hotornot.com/privacy/)"
	},
	{
		.name = "Hotels.com",
		.query = "hotelscom",
		.url = "https://www.hotels.com/user/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Hotspot Shield",
		.query = "hotspot shield",
		.url = "https://www.hotspotshield.com",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "If you're a paid user, you can contact support. If you're a free user, it's only possible if you have regulations that require deletion."
	},
	{
		.name = "Hotstar",
		.query = "hotstar",
		.url = "https://help.hotstar.com/in/en/support/tickets/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Select account related, then delete my account and write your issue."
	},
	{
		.name = "Houzz",
		.query = "houzz",
		.url = "https://help.houzz.com/s/article/How-do-I-delete-my-account",
		.email = "mailto:EUprivacy@houzz.com",
		.difficulty = 0x1000,
		.notes = "Your Houzz -> Edit Profile and Settings -> Advanced Settings -> Deactivate Houzz Account (at the bottom of the page)"
	},
	{
		.name = "Hover",
		.query = "hover",
		.url = "https://help.hover.com/hc/en-us/articles/222421328-Canceling-services-with-Hover",
		.email = "mailto:help@hover.com",
		.difficulty = 0x1000,
		.notes = "First Cancel your service with Hover.com. Then proceed to contact Customer support to submit a request for account deletion."
	},
	{
		.name = "HowLongToBeat",
		.query = "howlongtobeat",
		.url = "https://howlongtobeat.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to 'My Account' -> 'Options', click 'Delete Profile & Data' and confirm."
	},
	{
		.name = "HoYoverse",
		.query = "hoyoverse",
		.url = "https://account.hoyoverse.com/?lang=en#/account/safetySettings",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Log in to your HoYoverse account, navigate to the 'Requesting Account Deletion' button at the bottom of the page, then follow the steps given. Afterwards, your account will be permanently deleted after 30 days."
	},
	{
		.name = "HP",
		.query = "hp",
		.url = "https://www8.hp.com/us/en/privacy/ww-privacy-form.html",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Select language -> Fill submission -> Submit"
	},
	{
		.name = "HRK Game",
		.query = "hrk game",
		.url = "https://www.hrkgame.com/en/account/settings/privacy",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Delete Account -> proceed -> confirm -> enter password and click ok."
	},
	{
		.name = "HTC",
		.query = "htc",
		.url = "https://www.htc.com/us/terms/privacy",
		.email = "mailto:global-privacy@htc.com",
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "HUAWEI ID",
		.query = "huawei id",
		.url = "https://consumer.huawei.com/ph/support/content/en-us00681307/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On mobile, go to Settings -> HUAWEI ID -> Account Security -> More -> Security Center -> Delete account. On the desktop, id.cloud.huawei.com -> Account Security -> Security Center -> Delete account."
	},
	{
		.name = "Huddle",
		.query = "huddle",
		.url = "https://huddle.zendesk.com/hc/en-us/articles/200124703-How-do-I-cancel-my-Huddle-account-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "Huel",
		.query = "huel",
		.url = "https://discuss.huel.com/t/how-do-i-delete-my-account/17617/4",
		.email = "mailto:team@huel.com",
		.difficulty = 0x1000,
		.notes = "To delete the account, send them an email"
	},
	{
		.name = "Huggingface",
		.query = "huggingface",
		.url = "https://huggingface.co/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in to your account, visit your [account settings](https://huggingface.co/settings/account), scroll to the bottom and click \"Delete my account\", and confirm."
	},
	{
		.name = "Hulu",
		.query = "hulu",
		.url = "https://secure.hulu.com/users/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Human Benchmark",
		.query = "human benchmark",
		.url = "https://humanbenchmark.com/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click \"Confirm delete account\"."
	},
	{
		.name = "Humata",
		.query = "humata",
		.url = "https://app.humata.ai/settings/personal",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your account settings, scroll down to the end and click the 'Delete account' button."
	},
	{
		.name = "Humble Bundle",
		.query = "humble bundle",
		.url = "https://dsar.humblebundle.com",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "The easiest method is to submit a Data Subject Access Request at their [DSAR Privacy Portal](https://dsar.humblebundle.com/) to request account deletion. Alternatively, you can also [submit a support request](https://support.humblebundle.com/hc/en-us/requests/new) for account deletion. In the linked page under \"What can we help you with?\" select \"Humble Bundle Account\" -> \"Delete Account\", fill in your email, enter \"Account deletion\" as subject, add your honest reason for account deletion in the message, and submit. Someone from support should contact you and guide you further."
	},
	{
		.name = "Hunter",
		.query = "hunter",
		.url = "https://hunter.io/users/edit?tab=delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "hxcy",
		.query = "hxcy",
		.url = "https://hxcy.top/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "There is no delete button or contact email."
	},
	{
		.name = "Hype",
		.query = "hype",
		.url = "https://support.hype.it/hc/it/articles/360003556214-Come-chiudere-il-conto",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "First of all, you must meet the requirements written in the linked page. From the app, click on the profile icon, then go to settings, click on the button to close the account and follow the instructions."
	},
	{
		.name = "Hype Machine",
		.query = "hype machine",
		.url = "http://hypem.com/remove_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Hypixel Forums",
		.query = "hypixel forums",
		.url = "https://hypixel.net/data-request",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Complete the form on the linked page. They require some PII such as name, address, and a government-issued ID."
	},
	{
		.name = "IBM Watson Media",
		.query = "ibm watson media",
		.url = "https://support.video.ibm.com/hc/en-us/articles/207851817-How-Do-I-Delete-My-IBM-Video-Streaming-Account-",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "IBMid",
		.query = "ibmid",
		.url = "https://www.ibm.com/ibmid/myibm/help/us/helpdesk.html",
		.email = "mailto:ibmidsupport@ibm.com",
		.difficulty = 0x1000,
		.notes = "Contact your relevant help desk, and an email should be sent back with confirmation of deletion. You need to contact ibmidsupportuk@ibm.com, if you live in one if the following countries: Austria, Belgium, Denmark, Finland, France, Germany, Italy, Netherlands, Sweden, Switzerland or UK. Else you should contact ibmidsupport@ibm.com."
	},
	{
		.name = "Ibotta",
		.query = "ibotta",
		.url = "https://help.ibotta.com/hc/en-us/articles/225528727-How-Do-I-Cancel-My-Ibotta-Account-",
		.email = "mailto:accountsupport@ibotta.com",
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "ICANN",
		.query = "icann",
		.url = "https://account.icann.org/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the account settings, click 'delete my data'."
	},
	{
		.name = "iCasei",
		.query = "icasei",
		.url = "https://suporte.icasei.com.br/hc/pt-br/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Open a support ticket requesting deletion. It will take a few days and they might only disable your account, try logging in and if it recognizes your mail, reply asking for full deletion."
	},
	{
		.name = "Icedrive",
		.query = "icedrive",
		.url = "https://icedrive.net/dashboard/#/page/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page. Select the 'Privacy' tab, scroll down, click \"Delete Account, Files, and Data\" then confirm your password."
	},
	{
		.name = "Iceland",
		.query = "iceland",
		.url = "https://www.iceland.co.uk/privacy-policy",
		.email = "mailto:dataprotection@iceland.co.uk",
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "iClicker",
		.query = "iclicker",
		.url = "https://mhe.my.site.com/iclicker/s/contactsupport",
		.email = "mailto:privacyisimportant@macmillan.com",
		.difficulty = 0x1000,
		.notes = "Send an email to the provided address and request deletion of your iClicker account. You may need to request deletion through the school/organization that is linked to your account in order for them to begin processing the deletion request."
	},
	{
		.name = "Icontem",
		.query = "icontem",
		.url = "https://accounts.icontem.com/remove",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "ICQ",
		.query = "icq",
		.url = "https://www.icq.com/delete-account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "ID.me",
		.query = "idme",
		.url = "https://account.id.me/signin/close",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Ideone",
		.query = "ideone",
		.url = "https://ideone.com/legal-tos#:~:text=In%20order%20to%20remove%20the,and%20file%20a%20proper%20motion.",
		.email = "mailto:contact@sphere-research.com",
		.difficulty = 0x1000,
		.notes = "The only way to delete the account is by emailing the Operator, as per section 3.12 of their TOS."
	},
	{
		.name = "iFixit",
		.query = "ifixit",
		.url = "https://forms.obsecom.eu/requests/654931-678694-057240-634891",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Visit the linked page and complete the form. In addition to a confirmation email, you may be required to submit further proof of identity."
	},
	{
		.name = "IFTTT",
		.query = "ifttt",
		.url = "https://ifttt.com/settings/confirm_deletion",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and follow the instructions. For good measure you might want to disconnect [your services](https://ifttt.com/my_services)."
	},
	{
		.name = "IGDB",
		.query = "igdb",
		.url = "https://www.igdb.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Just go to your privacy settings and press Delete Account."
	},
	{
		.name = "iHeart",
		.query = "iheart",
		.url = "https://help.iheart.com/hc/en-us/articles/4424516427021-How-to-Delete-your-iHeart-Account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You must use the mobile app to delete your account without contacting support."
	},
	{
		.name = "IKEA",
		.query = "ikea",
		.url = "https://www.ikea.com/gb/en/profile/dashboard/#login",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page (or go to the Login & Security section in 'Manage Account') and click 'Delete Account', then enter your password."
	},
	{
		.name = "illa / ILLA Cloud",
		.query = "illa illa cloud",
		.url = "https://www.illacloud.com/docs/privacy-policy#your-rights",
		.email = "mailto:vincent@illasoft.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "iLoveIMG",
		.query = "iloveimg",
		.url = "https://www.iloveimg.com/contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form, selecting the topic \"Privacy\", in which request the deletion of your account."
	},
	{
		.name = "iLovePDF",
		.query = "ilovepdf",
		.url = "https://www.ilovepdf.com/contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form, selecting the topic \"Privacy\", in which request the deletion of your account."
	},
	{
		.name = "ImageShack",
		.query = "imageshack",
		.url = "https://imageshack.com/my/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and click the 'Delete Account' button."
	},
	{
		.name = "IMDb",
		.query = "imdb",
		.url = "https://www.imdb.com/registration/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "imgBB",
		.query = "imgbb",
		.url = "https://imgbb.com/settings/delete",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "There is no visible option to delete an account in the user's settings, but if you use the linked page, you just need to provide your password, and your account will be deleted."
	},
	{
		.name = "Imgur",
		.query = "imgur",
		.url = "https://imgur.com/account/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Immersive Translate",
		.query = "immersive translate",
		.url = "https://immersivetranslate.com/profile/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click the 'Delete Account' link and follow the instructions sent to your email, wait 15 days after that"
	},
	{
		.name = "ImmiAccount (Australian Home Affairs)",
		.query = "immiaccount australian home affairs",
		.url = "https://online.immi.gov.au/usm/summary",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click the 'Delete my ImmiAccount' link and follow the instructions sent to your email."
	},
	{
		.name = "Immomio",
		.query = "immomio",
		.url = "https://tenant.immomio.com/de/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login, go to your account settings and click 'Delete Account'."
	},
	{
		.name = "Immowelt",
		.query = "immowelt",
		.url = "https://www.immowelt.de/benutzerkonto/loeschen/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login, go to your account settings and click on 'Delete Account' at the bottom."
	},
	{
		.name = "imo.im",
		.query = "imoim",
		.url = "https://imo.im",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You must login, go to your account settings and then click on the 'Delete Account' link on the bottom left."
	},
	{
		.name = "iMockup",
		.query = "imockup",
		.url = "https://www.imockup.app/",
		.email = "mailto:support@imockup.app?subject=Account%20Deletion%20Request",
		.difficulty = 0x1000,
		.notes = "You can contact them via email to request account deletion. The email address can be found in the sidebar."
	},
	{
		.name = "impots.gouv.fr",
		.query = "impotsgouvfr",
		.url = "https://www.impots.gouv.fr/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Your account depends on your fiscal number, you cannot delete it."
	},
	{
		.name = "Incogni",
		.query = "incogni",
		.url = "https://incogni.com/",
		.email = "mailto:support@incogni.com?subject=Account%20Deletion%20Request&body=Hello%2C%0A%0AI%20am%20requesting%20the%20deletion%20of%20my%20Incogni%20account%20and%20information%20associated%20with%20this%20email.%20I%20would%20also%20like%20to%20withdraw%20the%20consent%20given%20in%20the%20Authorization%20Form.%0A%0AI%20understand%20that%20by%20terminating%20my%20account%20I%20will%20lose%20any%20remaining%20time%20on%20my%20current%20subscription%20and%20I%20wish%20to%20proceed%20anyway.%0A%0AThanks.",
		.difficulty = 0x1000,
		.notes = "Must email Customer Support to delete account. No official help documentation exists for account deletion."
	},
	{
		.name = "Indeed",
		.query = "indeed",
		.url = "https://indeed.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You must login, go to your account settings and then click on the 'Close my account'."
	},
	{
		.name = "IndieGala",
		.query = "indiegala",
		.url = "https://docs.indiegala.com/support/contacts.html#customer-support",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Log into their Discord server and go to the \"customer-support\" channel. Type a message requesting account deletion. After a while a new ticket channel will be created (only you and the administrators can see it). You will be asked for your email and once you provide it they will delete your account"
	},
	{
		.name = "Indiegogo",
		.query = "indiegogo",
		.url = "https://www.indiegogo.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to “My Settings”, scroll down to the bottom, and click the “Delete” button."
	},
	{
		.name = "Infinibrowser",
		.query = "infinibrowser",
		.url = "https://infinibrowser.wiki/profile/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click \"Delete Account\" at the bottom of the page. It will then ask you to confirm that you want to delete your account."
	},
	{
		.name = "Infinite Story",
		.query = "infinite story",
		.url = "https://infinite-story.com/my/settings.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click \"Delete Infinite Story Account\" at the bottom of the page."
	},
	{
		.name = "Infinity Free",
		.query = "infinity free",
		.url = "https://dash.infinityfree.com/users",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Visit the URL. Click on 'Edit Profile'. Scroll down to 'Delete Profile' section, enter current password then click 'Delete Profile'. Note that it can take up to 30 days for all data to be fully removed."
	},
	{
		.name = "InfoCasas",
		.query = "infocasas",
		.url = "https://www.infocasas.com.uy/dashboard",
		.email = "mailto:info@infocasas.com.uy",
		.difficulty = 0x1000,
		.notes = "Contact the customer support via email and request the deletion of your account. In order for them to identify your account, make the request through the same email address that you have used to create your account."
	},
	{
		.name = "InfoJobs",
		.query = "infojobs",
		.url = "https://www.infojobs.net/candidate/settings/settings-cancel-account/cancel-account.xhtml",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Ingress",
		.query = "ingress",
		.url = "https://support.ingress.com/hc/en-us/articles/206618198-I-want-to-delete-my-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to fill in the form linked in the support article by clicking \"contact us\". Fill in your email address, agent name, device you play on and submit the form."
	},
	{
		.name = "Inhotim",
		.query = "inhotim",
		.url = "https://www.inhotim.org.br/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the app, tap your profile icon on the upper right corner, then tap \"Manage account\", edit \"Manage app stay\" and confirm you really want to delete the account."
	},
	{
		.name = "Inkbunny",
		.query = "inkbunny",
		.url = "https://inkbunny.net/account.php#remove",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "There is a checkbox to be ticked and you need to enter your current password for confirmation. Deletion has a grace period of 2 days."
	},
	{
		.name = "InnoGames",
		.query = "innogames",
		.url = "https://goodbye.innogames.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Inoreader",
		.query = "inoreader",
		.url = "https://www.inoreader.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select 'Reset or cancel' under preferences and click on 'Cancel account'."
	},
	{
		.name = "insights",
		.query = "insights",
		.url = "https://insights.gg/dashboard/settings/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Delete all of your teams, click on Delete Account and type 'DELETE'"
	},
	{
		.name = "Instacart",
		.query = "instacart",
		.url = "https://www.instacart.com/user_privacy/form/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Instagram",
		.query = "instagram",
		.url = "https://accountscenter.instagram.com/personal_info/account_ownership_and_control/deletion_and_deactivation",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Instapaper",
		.query = "instapaper",
		.url = "https://www.instapaper.com/user/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Instructables",
		.query = "instructables",
		.url = "https://www.instructables.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click your profile icon in the top right, click settings, and click 'Delete' under 'Delete Your Account'. You will be prompted for your password again before deleting."
	},
	{
		.name = "Intel",
		.query = "intel",
		.url = "https://www.intel.com/content/www/us/en/secure/my-intel/frequently-asked-questions.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Navigate to your profile settings, click the pencil icon on the top right corner and then \"Request personal data deletion\". The account will be immediately deleted and you'll get a e-mai confirming the action."
	},
	{
		.name = "Intelius People Finder",
		.query = "intelius people finder",
		.url = "https://www.intelius.com/dashboard/support/contact",
		.email = "mailto:support@mailer.intelius.com?subject=Information%20Deletion%20Request",
		.difficulty = 0x2000,
		.notes = "While Intellius will not delete your account login, you can request to have your records removed. Send an email to Intelius support to request deletion. A support representative will eventually respond with instructions on how to delete your account. Follow these directions CAREFULLY, as they describe a process that is VERY similar to a Public Records Opt Out, which does not necessarily involve data deletion. Note: The request process may include selecting your public records from a list. If your records do not appear, scroll to the bottom of the list and click the link to \"continue with your CCPA request\". Click the link in the resulting email confirmation. Within 24 hours, your records should no longer appear on Intelius, barring extenuating circumstances. To permanently close your account, the best option is to change and forget your login credentials."
	},
	{
		.name = "Intelligence X",
		.query = "intelligence x",
		.url = "https://intelx.io/account?tab=settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click \"Delete Account\" button and check the \"I want to permanently delete my Intelligence X account.\" box "
	},
	{
		.name = "Interactive Brokers",
		.query = "interactive brokers",
		.url = "https://www.interactivebrokers.com/RegTemplates/PDF/closeAccount.pdf",
		.email = "mailto:accountmanagement@interactivebrokers.com",
		.difficulty = 0x1000,
		.notes = "In order to delete your account, you have to fill out the PDF linked and send it to the email linked below."
	},
	{
		.name = "Intercity",
		.query = "intercity",
		.url = "https://bilet.intercity.pl/login",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "After signing in go to \"My data\", scroll down, click \"To remove account click here\", and provide password. If you bought any ticket on this account, it will be deleted 15 months after the last purchase (account will be locked, and you won't have any option to buy tickets), otherwise it will be deleted immediately."
	},
	{
		.name = "Internet Archive / Open Library",
		.query = "internet archive open library",
		.url = "https://help.archive.org/help/how-do-i-delete-my-account/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click on your screen name in the top right-hand corner. Click on Account setting, enter your password to unlock modifying settings, click “Delete Account”. Your library pages will remain unless you remove them manually before deleting your account. Alternatively, you can send them an [email](mailto:info@archive.org) to remove pages from their side."
	},
	{
		.name = "Internetometer",
		.query = "internetometer",
		.url = "https://internetometer.com",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Site provides no user account management interface or account deletion options. Email sent to internets@technoized.com was never replied to."
	},
	{
		.name = "Interrail",
		.query = "interrail",
		.url = "https://www.interrail.eu/",
		.email = "mailto:privacy@eurail.com?body=Please%20delete%20my%20Interrail%20account.",
		.difficulty = 0x1000,
		.notes = "Send an email to the email linked below and ask to delete your Interrail account. You will get an automatic reply as a confirmation that they're processing your request to remove your personal data. If there are legal grounds preventing them from (immediately) processing your request they will send you an email."
	},
	{
		.name = "Intigriti",
		.query = "intigriti",
		.url = "https://kb.intigriti.com/en/articles/6839008-privacy-statement-intigriti-researcher",
		.email = "mailto:privacy@intigriti.com",
		.difficulty = 0x1000,
		.notes = "You must send an email requesting account deletion and confirm it in a second email."
	},
	{
		.name = "Into Real Pages",
		.query = "into real pages",
		.url = "https://intorealpages.com/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "There is no delete button nor do they ever reply by e-mail."
	},
	{
		.name = "Invajo",
		.query = "invajo",
		.url = "https://home.invajo.com/contact",
		.email = "mailto:support@invajo.com",
		.difficulty = 0x1000,
		.notes = "Create a ticket on the website, email them, or call them at: +46 (0) 46-270 60 60."
	},
	{
		.name = "The Inventory",
		.query = "the inventory",
		.url = "https://notice.sp-prod.net/sar/index.html?message_id=539278&account_id=1195&ccpa_type=delete",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form using the email address of your account and click on the verification link that is sent."
	},
	{
		.name = "Inventory Shield",
		.query = "inventory shield",
		.url = "https://inventoryshield.com/support_docs/user-account-details/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in, open the menu, click \"Account Settings\", scroll to the \"Delete Your Account\" form, enter your password and click \"Confirm Deletion\"."
	},
	{
		.name = "Investopedia",
		.query = "investopedia",
		.url = "https://invcontent.zendesk.com/hc/en-us/articles/360017064553-Account-Deletion",
		.email = "mailto:privacy@investopedia.com",
		.difficulty = 0x1000,
		.notes = "You must send an email requesting the account deletion."
	},
	{
		.name = "InVideo",
		.query = "invideo",
		.url = "https://help.invideo.io/articles/56692-how-do-i-delete-my-account",
		.email = "mailto:support@invideo.io",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Invidious",
		.query = "invidious",
		.url = "https://redirect.invidious.io/preferences",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login through your instance, go to your preferences and click 'Delete account' at the bottom of the page."
	},
	{
		.name = "Invision",
		.query = "invision",
		.url = "https://support.invisionapp.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to request them through the support form providing the email you signed up with. All files deleted will not be restorable."
	},
	{
		.name = "IO Interactive",
		.query = "io interactive",
		.url = "https://account.ioi.dk/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the deletion URL, 'login' -> 'account settings' -> 'delete account'."
	},
	{
		.name = "iOSGods",
		.query = "iosgods",
		.url = "https://iosgods.com/settings/account-security/#requestAccountDeletion",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Sends a verification email with a confirmation button before submitting the deletion request."
	},
	{
		.name = "ipinfo.io",
		.query = "ipinfoio",
		.url = "https://ipinfo.io/faq/article/126-deleting-ipinfo-account",
		.email = "mailto:support@ipinfo.io",
		.difficulty = 0x1000,
		.notes = "Send them an email asking to delete your account."
	},
	{
		.name = "IranTalent",
		.query = "irantalent",
		.url = "https://www.irantalent.com/en/privacy-and-policy",
		.email = "mailto:info@irantalent.com?subject=Account%20Deletion%20Request",
		.difficulty = 0x1000,
		.notes = "Send an email to their support address to request account deletion. it might take a few days."
	},
	{
		.name = "IRCCloud",
		.query = "irccloud",
		.url = "https://www.irccloud.com/?/settings=account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the linked page, click 'Delete your account'."
	},
	{
		.name = "Issuu",
		.query = "issuu",
		.url = "https://issuu.com/home/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Near the bottom of the linked page, expand the 'Manage Account' section and click 'Delete My Account'. Closing your account will delete your profile and all of your publications. There is no going back, so don't say we didn't warn you."
	},
	{
		.name = "iStudiez",
		.query = "istudiez",
		.url = "https://support.istudentpro.com/support/solutions/articles/3000068641-delete-cloud-sync-account",
		.email = "mailto:support@istudentpro.com",
		.difficulty = 0x1000,
		.notes = "Contact support and ask for your account to be removed."
	},
	{
		.name = "itch.io",
		.query = "itchio",
		.url = "https://itch.io/user/settings/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked page and confirm account deletion."
	},
	{
		.name = "ITV",
		.query = "itv",
		.url = "https://www.itv.com/watch/user/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Use the delete account option at the bottom of the page."
	},
	{
		.name = "iubenda",
		.query = "iubenda",
		.url = "https://www.iubenda.com/en/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click Account & Billing info, then under General info click Delete your account."
	},
	{
		.name = "iversity",
		.query = "iversity",
		.url = "https://iversity.org/de/user/deactivate",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "IVPN",
		.query = "ivpn",
		.url = "https://www.ivpn.net/account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to account settings and click on \"Delete Account\""
	},
	{
		.name = "Jalopnik",
		.query = "jalopnik",
		.url = "https://notice.sp-prod.net/sar/index.html?message_id=539278&account_id=1195&ccpa_type=delete",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form using the email address of your account and click on the verification link that is sent."
	},
	{
		.name = "JavaRush",
		.query = "javarush",
		.url = "https://javarush.com/en/settings/security",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in. Press the url. Scroll down and see button 'You can delete your account and your personal data'"
	},
	{
		.name = "JB Hi-Fi",
		.query = "jb hifi",
		.url = "https://support.jbhifi.com.au/hc/en-au/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Submit a request to their support asking for account deletion. Select 'My JB Account' as your request type and 'Account Issues' as your account enquiry type."
	},
	{
		.name = "JDate.com",
		.query = "jdatecom",
		.url = "https://www.jdate.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Under 'Membership Management' click 'Remove my Profile'. Fill out the survey and submit to delete your profile."
	},
	{
		.name = "JEDEC",
		.query = "jedec",
		.url = "https://www.jedec.org/user",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Edit -> Cancel account, then click the link sent to your email."
	},
	{
		.name = "JetBrains",
		.query = "jetbrains",
		.url = "https://account.jetbrains.com/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "License keys will not be deleted."
	},
	{
		.name = "JetBrains Academy (Hyperskill)",
		.query = "jetbrains academy hyperskill",
		.url = "https://hyperskill.org/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the link to delete your account and enter your password. Note that it won't automatically cancel your subscription."
	},
	{
		.name = "JetBrains Space",
		.query = "jetbrains space",
		.url = "https://space-support.jetbrains.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Submit a request to delete your Space instance. Provide your email and the domain name to delete (should be your username). Then choose anything in \"Request Type\" and the \"Cloud\" option in \"Installation Type\". An update email will be sent (in a few hours) that confirms the termination."
	},
	{
		.name = "Jezebel",
		.query = "jezebel",
		.url = "https://notice.sp-prod.net/sar/index.html?message_id=539278&account_id=1195&ccpa_type=delete",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form using the email address of your account and click on the verification link that is sent."
	},
	{
		.name = "Jimdo",
		.query = "jimdo",
		.url = "https://help.jimdo.com/hc/en-us/articles/115005540586-How-do-I-delete-my-Jimdo-account-",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You can instantly delete your free account. The paid version requires you to first cancel your subscription."
	},
	{
		.name = "Jobindex.dk",
		.query = "jobindexdk",
		.url = "https://www.jobindex.dk/bruger/slet",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Jobscan",
		.query = "jobscan",
		.url = "https://www.jobscan.co/privacy",
		.email = "mailto:support@jobscan.co?subject=Request%20for%20Permanent%20Removal%20of%20Personal%20Information&body=Hello%2C%250D%250A%250D%250AI%20would%20like%20to%20permanently%20remove%20my%20account%20and%20information%20from%20Jobscan%2C%20as%20per%20your%20Privacy%20Policy.%20My%20account%20email%20address%20is%20XXXXXXXXXXX.%250D%250A%250D%250AThank%20you",
		.difficulty = 0x1000,
		.notes = "Contact customer support to request account deletion. They should respond and delete your account within 30 days, after which your login credentials will no longer work."
	},
	{
		.name = "Jobstreet",
		.query = "jobstreet",
		.url = "https://myjobstreet-id.jobstreet.co.id/registration/delete-account.php",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Log in. Go to your account setting on top bar. Select 'Delete my Account' on secondary bar. You need to pull out all of your applications before continuing."
	},
	{
		.name = "Joinrs",
		.query = "joinrs",
		.url = "https://www.joinrs.com/en/profile/settings/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on your name at the top right, then \"Settings\", \"Delete account\" and confirm."
	},
	{
		.name = "Jolla Account",
		.query = "jolla account",
		.url = "https://account.jolla.com/profile/settings/confirm_delete_profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Joom",
		.query = "joom",
		.url = "https://www.joom.com/en/privacy",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, scroll down to the bottom of the privacy policy and click \"delete account\". Confirm the deletion dialog. OPTIONAL: Enter an email address to be notified of when deletion completes."
	},
	{
		.name = "Jottacloud",
		.query = "jottacloud",
		.url = "https://www.jottacloud.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in. Type in password. Press 'delete'."
	},
	{
		.name = "Journal du geek",
		.query = "journal du geek",
		.url = "http://www.journaldugeek.com/editer-profil/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in. Go to your profile, scroll down and click 'Supprimer mon profil'"
	},
	{
		.name = "Journey",
		.query = "journey",
		.url = "https://journey.cloud",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "If you go to the profile settings, you can deactivate the account, but there is always a button for re-enabling it, even if you delete its 'Google Drive' data"
	},
	{
		.name = "JS Bin",
		.query = "js bin",
		.url = "https://jsbin.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "JSFiddle",
		.query = "jsfiddle",
		.url = "https://jsfiddle.net/user/settings/remove_account/",
		.email = "mailto:support@jsfiddle.net",
		.difficulty = 0x400,
		.notes = "Visit the linked page and click 'Remove account'."
	},
	{
		.name = "Jstris",
		.query = "jstris",
		.url = "https://jstris.jezevec10.com/settings/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "juejin",
		.query = "juejin",
		.url = "https://juejin.cn/user/settings/account",
		.email = "mailto:support@keepersecurity.com",
		.difficulty = 0x1000,
		.notes = "Must download the app or contact customer support to delete account"
	},
	{
		.name = "Jusbrasil",
		.query = "jusbrasil",
		.url = "https://www.jusbrasil.com.br/configuracoes",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Just Giving",
		.query = "just giving",
		.url = "https://help.justgiving.com/hc/en-us/articles/200670321-How-do-I-delete-my-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Must contact customer support to delete account"
	},
	{
		.name = "Kaggle",
		.query = "kaggle",
		.url = "https://www.kaggle.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the page linked, verify you are a human, then click on the 'Delete account' button."
	},
	{
		.name = "Kahoot",
		.query = "kahoot",
		.url = "https://create.kahoot.it/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Follow the link, select reason for deleting, and click 'Delete Account'. Kahoots set to public won’t be deleted along with your account. If you’d like to delete them, you’ll need to do it manually."
	},
	{
		.name = "Kakao",
		.query = "kakao",
		.url = "https://accounts.kakao.com/weblogin/deactivate",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click the 'Settings' button on the KakaoTalk app, enter 'General Settings', 'Privacy', and 'Manage My Personal Info' in the drop-down menu, and click the 'Unregister Form KakaoTalk' menu to delete account. Note: If you don't use other Kakao linked services, you will immediately switch to delete your Kakao account. If you were using some services, delete all of them, and then click the provided link to delete your Kakao account."
	},
	{
		.name = "Kaleido (remove.bg, unscreen, designify)",
		.query = "kaleido removebg unscreen designify",
		.url = "https://accounts.kaleido.ai/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your profile, at the bottom there will be a 'click here' to delete account. Retype your password and after 14 days the account gets deleted."
	},
	{
		.name = "KanbanFlow",
		.query = "kanbanflow",
		.url = "https://kanbanflow.com/settings/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Kanji Koohii",
		.query = "kanji koohii",
		.url = "https://kanji.koohii.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to \"Account Settings\", then \"Edit Account\", and click \"Yes, I want to delete my account ( step 1 of 2 )\". Then fill out the form in which you have to give your email, type 'delete my account', confirm your password, and finally click \"Delete this account\""
	},
	{
		.name = "Kaspersky",
		.query = "kaspersky",
		.url = "https://my.kaspersky.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account. Click 'Account Settings' from the dropdown menu where your username (or email) is shown, then use the 'Delete Account' option and enter your password."
	},
	{
		.name = "Kattis",
		.query = "kattis",
		.url = "https://support.kattis.com/support/solutions/articles/79000109991-how-do-i-delete-my-kattis-account-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to contact the support to delete your account. Make sure to include your username and email in the support ticket."
	},
	{
		.name = "KBDfans",
		.query = "kbdfans",
		.url = "https://kbdfans.com/pages/contact-1",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Use the linked contact form to request account deletion."
	},
	{
		.name = "KBin",
		.query = "kbin",
		.url = "https://kbin.social/settings/general",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You can go to the account page, scroll to the bottom and click the account deletion request button. It can take some time for the account to be deleted."
	},
	{
		.name = "KDE Bugtracking System",
		.query = "kde bugtracking system",
		.url = "https://bugs.kde.org",
		.email = "mailto:sysadmin@kde.org",
		.difficulty = 0x1000,
		.notes = "You'll have to send an e-mail to them"
	},
	{
		.name = "Keepa",
		.query = "keepa",
		.url = "https://keepa.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account. Click on 'Settings', then 'Account'. Click 'Yes, delete my account', enter your password and click 'Delete account'."
	},
	{
		.name = "Keeper",
		.query = "keeper",
		.url = "https://www.keepersecurity.com/privacypolicy.html?t=v#:~:text=You%20may%20deactivate%20your%20Keeper%20Security%20account%20and%20delete%20your%20personally%20identifiable%20information%20at%20any%20time%20by%20contacting%20us%20at%20support%40keepersecurity.com%20clearly%20indicating%20that%20you%20wish%20to%20deactivate%20and%20delete%20such%20information.",
		.email = "mailto:support@keepersecurity.com",
		.difficulty = 0x1000,
		.notes = "You may deactivate your Keeper Security account and delete your personally identifiable information at any time by contacting their support at support@keepersecurity.com clearly indicating that you wish to delete your account."
	},
	{
		.name = "Kendall County History",
		.query = "kendall county history",
		.url = "https://www.kendallcountyhistory.org/contact",
		.email = "mailto:contact@kendallcountyhistory.org?subject=Delete%20My%20Profile",
		.difficulty = 0x1000,
		.notes = "You can also use the google form in contact us page and ask them to remove your profile."
	},
	{
		.name = "Keybase.io",
		.query = "keybaseio",
		.url = "https://keybase.io/account/delete_me",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Account is deleted instantly, though username might be kept to keep service functioning properly and avoiding impersonation."
	},
	{
		.name = "Khan Academy",
		.query = "khan academy",
		.url = "https://www.khanacademy.org/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Kick Streaming",
		.query = "kick streaming",
		.url = "https://kick.com/",
		.email = "mailto:support@kick.com",
		.difficulty = 0x1000,
		.notes = "To permanently deactivate your account, you need to send an email to Kick support."
	},
	{
		.name = "Kickstarter",
		.query = "kickstarter",
		.url = "https://www.kickstarter.com/profile/destroy",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Kijiji",
		.query = "kijiji",
		.url = "https://help.kijiji.ca/helpdesk/contact-us-step/other",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Must contact customer service using the online form. Once completed, wait for e-mail from them. You will need you to reply to this e-mail confirming that the account you e-mailed from should be closed."
	},
	{
		.name = "Kik",
		.query = "kik",
		.url = "https://ws.kik.com/delete",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To permanently deactivate your account, go to the link provided, enter your information and you will receive a link to permanently deactivate your account."
	},
	{
		.name = "Killstar",
		.query = "killstar",
		.url = "https://us.killstar.com/pages/contact-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Visit the url and choose from the drop down menu: 1) What can we help you with? (Choose 'Something else'), 2) How can we help? (Choose 'Website error'), 3) Choose your region (Choose which region), 4) Fill out your name, 5) Fill out your email address and confirm it, 6) What should our team know so they can help? ('Please delete my account and all associated information'), 6) Submit. Then you will receive an email and have to confirm the following information: 1) Name on the account, 2) Shipping address on the account, 3) Email address on the account, 4) Phone number on the account, 5) Which store? US, UK, or EU. Then, you will be emailed again stating that in 15 days the data will be removed from their system."
	},
	{
		.name = "Kinguin",
		.query = "kinguin",
		.url = "https://www.kinguin.net/about-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Have to contact them, they first will try to convince you not to delete your account, but if you keep trying, they can delete your account"
	},
	{
		.name = "Kinja",
		.query = "kinja",
		.url = "https://notice.sp-prod.net/sar/index.html?message_id=539278&account_id=1195&ccpa_type=delete",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form using the email address of your account and click on the verification link that is sent."
	},
	{
		.name = "Kino.dk",
		.query = "kinodk",
		.url = "https://kino.dk/user",
		.email = "mailto:kontakt@kino.dk?subject=Sletning%20af%20profil&body=Jeg%20%C3%B8nsker%20at%20slette%20min%20konto%20hos%20jer.%20Tak.",
		.difficulty = 0x1000,
		.notes = "Requires sending an email."
	},
	{
		.name = "Kistania",
		.query = "kistania",
		.url = "https://www.kistania.com/pages/contact-us",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Filling out the form requesting account deletion does not work."
	},
	{
		.name = "Kit.co",
		.query = "kitco",
		.url = "https://kit.co/terms#contact",
		.email = "mailto:support@kit.co",
		.difficulty = 0x1000,
		.notes = "If you need to contact us for any reason, you can do so by emailing us."
	},
	{
		.name = "Kitsu",
		.query = "kitsu",
		.url = "https://kitsu.io/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the 'Delete Account' button and then click 'Confirm'."
	},
	{
		.name = "Kixeye",
		.query = "kixeye",
		.url = "https://corp.kixeye.com/pp.html",
		.email = "mailto:privacy@kixeye.com",
		.difficulty = 0x1000,
		.notes = "Send an email, specifying your username, requesting to delete your account."
	},
	{
		.name = "Klarna",
		.query = "klarna",
		.url = "https://www.klarna.com/us/customer-service/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Pay off all your orders (if any), wait 10 days after that, remove your payment information from the app, chat with customer service and tell them you want your marketing sendouts stopped and your personal data deleted."
	},
	{
		.name = "Kleinanzeigen",
		.query = "kleinanzeigen",
		.url = "https://themen.kleinanzeigen.de/hilfe/nutzerkonto/datenloeschung/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and follow the instructions."
	},
	{
		.name = "Knetbooks",
		.query = "knetbooks",
		.url = "https://www.knetbooks.com/account/settings",
		.email = "mailto:privacyrequest@knetbooks.com",
		.difficulty = 0x1000,
		.notes = "Send an account deletion request to the provided email."
	},
	{
		.name = "Ko-fi",
		.query = "kofi",
		.url = "https://ko-fi.com/Manage/DeleteAccount/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Cancel all of your monthly coffees and click the link sent to your email."
	},
	{
		.name = "Kogan",
		.query = "kogan",
		.url = "https://www.kogan.com/au/contact-us/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact Kogan directly via their 'Contact Us' page and request account deletion."
	},
	{
		.name = "Koingo Software",
		.query = "koingo software",
		.url = "https://www.koingosw.com/account/delete.php",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Enter your E-Mail in the account deletion form and confirm the deletion in the E-Mail sent to you."
	},
	{
		.name = "Komoot",
		.query = "komoot",
		.url = "https://account.komoot.com/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Open settings then on the account page click delete account"
	},
	{
		.name = "Kongregate",
		.query = "kongregate",
		.url = "https://kong.zendesk.com/hc/en-us/articles/360049211251-How-to-delete-your-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Visit the linked page and follow the instructions to delete your account."
	},
	{
		.name = "Koofr",
		.query = "koofr",
		.url = "https://app.koofr.net/app/remove-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Only empty accounts can be removed. Please delete all files from your account before requesting removal."
	},
	{
		.name = "Kotaku",
		.query = "kotaku",
		.url = "https://notice.sp-prod.net/sar/index.html?message_id=539278&account_id=1195&ccpa_type=delete",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form using the email address of your account and click on the verification link that is sent."
	},
	{
		.name = "Koyeb",
		.query = "koyeb",
		.url = "https://app.koyeb.com/settings?settings",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "While logged in, first deactivate and delete/leave your organization. Once you do this every time you visit its going to tell you to create an organization, but in the top right you click your profile icon, then settings and then delete."
	},
	{
		.name = "Krafton",
		.query = "krafton",
		.url = "https://accounts.krafton.com/personal-info",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom and click \"Delete your KRAFTON ID\". Then request deletion."
	},
	{
		.name = "Kraken",
		.query = "kraken",
		.url = "https://support.kraken.com/hc/en-us/articles/203727206-How-can-I-delete-my-Kraken-account-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "To close your account, you need to submit a request to support, which may take up to 24 hours to process."
	},
	{
		.name = "Kucoin",
		.query = "kucoin",
		.url = "https://www.kucoin.com/support/17881088289305",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Follow the instructions presented in the linked page. Any pending transactions will be canceled. It is recommended to withdraw any assets and delete wallet information before deletion. Once a deletion request is processed, data is kept for up to two years, due to legal requirements. If the data is not requested for review after two years, it is all deleted permanently."
	},
	{
		.name = "Kununu",
		.query = "kununu",
		.url = "https://www.kununu.com/user/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "An email will be sent with a link to delete your account."
	},
	{
		.name = "Kwai",
		.query = "kwai",
		.url = "https://www.kwai.com/legal",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click in the gear on left upper corner -> Account security -> \"Delete my account\" at the bottom -> Select the reason and press the \"Delete my account\" button. The deleting process will occur in 72 hours. Your account may be removed if you haven't used it for 6 months."
	},
	{
		.name = "Kyun!",
		.query = "kyun",
		.url = "https://kyun.host/dashboard",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In the 'Disaster Zone' field, click on the 'Nuke account' button."
	},
	{
		.name = "L'identité Numérique La Poste",
		.query = "lidentite numerique la poste",
		.url = "https://aide.lidentitenumerique.laposte.fr/kb/guide/fr/comment-supprimer-mon-identite-numerique-DmTz0vr4Hc/Steps/101590",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your customer page, click on the \"My Profile\" icon in the top right corner, then at the bottom on \"Suppression de votre Identité Numérique\". You will need to enter the 4 last digits of the ID card you used when registering."
	},
	{
		.name = "L'VA",
		.query = "lva",
		.url = "https://www.lva-mobilite.fr/account/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your account information page, click on \"Supprimer mon compte\", confirm your email address and your password, and click on \"Supprimer mon compte\"."
	},
	{
		.name = "La Poste",
		.query = "la poste",
		.url = "https://aide.laposte.fr/mesdonneespersonnelles/moncompte/suppression",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Send a request on the GDPR form. Delete all other services linked to it (Digiposte, Identité Numérique, etc) before sending the request."
	},
	{
		.name = "La Redoute",
		.query = "la redoute",
		.url = "https://www.laredoute.com/privacy_center.aspx",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Send a request on the GDPR form. Make sure you take open it from the website corresponding to your country. (Linked here, based on your browser language: International, Germany, Italia, Netherlands, Portugal, Russia, Spain, )"
	},
	{
		.name = "Lampyre",
		.query = "lampyre",
		.url = "https://lampyre.io/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to Account settings and click Delete account."
	},
	{
		.name = "Langfuse",
		.query = "langfuse",
		.url = "https://langfuse.com/support",
		.email = "mailto:security@langfuse.com",
		.difficulty = 0x1000,
		.notes = "Contact them via e-mail and ask for your account to be deleted."
	},
	{
		.name = "LanguageTool",
		.query = "languagetool",
		.url = "https://languagetool.org/editor/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the linked page, click 'Delete my account'."
	},
	{
		.name = "LaptopKeyReplacements",
		.query = "laptopkeyreplacements",
		.url = "https://www.laptopkeyreplacements.com/contact-us/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Account deletion request hasn't been fulfilled several months after contacting support."
	},
	{
		.name = "Last.fm",
		.query = "lastfm",
		.url = "https://www.last.fm/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom of the page and click delete user account. On the following page, enter your password. Your account will then be deleted after 14 days."
	},
	{
		.name = "LastPass",
		.query = "lastpass",
		.url = "https://lastpass.com/delete_account.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Lattice Semiconductor",
		.query = "lattice semiconductor",
		.url = "https://www.latticesemi.com/About/ContactUs",
		.email = "mailto:webmaster@latticesemi.com",
		.difficulty = 0x1000,
		.notes = "For website, logging in and account issues, or any web-related feedback, contact Webmaster."
	},
	{
		.name = "Launchpad",
		.query = "launchpad",
		.url = "https://help.launchpad.net/YourAccount/Closing",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Lazada",
		.query = "lazada",
		.url = "https://helpcenter.lazada.co.id/s/faq/knowledge?categoryId=1000027486&m_station=faq&questionId=1000142195",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Account -> settings -> Account Security -> on Privacy protection menu choose Account Deletion -> Verify your identity -> Select a reason for account deletion -> Check the box next to the Account Deletion Terms and Conditions agreement. You will receive a notification if the account deletion is successful. Beware Account deletion may be rejected if you still have ongoing transaction, or still have LazPaylater bill (if available in your country)."
	},
	{
		.name = "LBRY / Odysee",
		.query = "lbry odysee",
		.url = "https://odysee.com/$/settings",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Ask for deletion on your settings pags. All your content will instantly be deleted, the account deletion will be handled manually by the support."
	},
	{
		.name = "League of Legends",
		.query = "league of legends",
		.url = "https://support-leagueoflegends.riotgames.com/hc/en-us/articles/360050328454",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked page, scroll down, click on \"LOG IN\" and confirm your deletion."
	},
	{
		.name = "League of Legends: Wild Rift",
		.query = "league of legends wild rift",
		.url = "https://support-leagueoflegends.riotgames.com/hc/en-us/articles/360050328454",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked page, scroll down, click on \"LOG IN\" and confirm your deletion."
	},
	{
		.name = "Leave Me Alone",
		.query = "leave me alone",
		.url = "https://app.leavemealone.com/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked page, scroll down to \"Danger Zone\" section and find \"Deactivate account\" button"
	},
	{
		.name = "LeetCode",
		.query = "leetcode",
		.url = "https://leetcode.com/delete-account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Leetify",
		.query = "leetify",
		.url = "https://leetify.com/app/support",
		.email = "mailto:support@leetify.com?subject=Leetify%20Account%20Deletion%20Request&body=Hello%2C%0A%0AI%20request%20for%20my%20Leetify.com%20account%20and%20all%20associated%20information%20be%20permanently%20deleted.%0AMy%20account%27s%20email%20address%20is%20LEETIFYEMAILADDRESS%20and%20my%20Leetify%20ID%20is%20LEETIFYACCOUNTID.%0A%0AThank%20you.",
		.difficulty = 0x1000,
		.notes = "Account deletion requires sending an email. Make sure to include the account's Leetify ID in the request."
	},
	{
		.name = "Legends of Runeterra",
		.query = "legends of runeterra",
		.url = "https://support-legendsofruneterra.riotgames.com/hc/en-us/articles/360051089233-Deleting-Your-Riot-Account-and-All-Your-Data",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked page, scroll down, click on \"LOG IN\" and confirm your deletion."
	},
	{
		.name = "Lego",
		.query = "lego",
		.url = "https://identity.lego.com/profile/security/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login, go to the linked page and confirm deletion of the account. Click the verification link in the email you receive to start the deletion process, which may take up to a month."
	},
	{
		.name = "Lemehost",
		.query = "lemehost",
		.url = "https://lemehost.com/user/settings/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Lenovo Forums",
		.query = "lenovo forums",
		.url = "https://forums.lenovo.com/user/myprofilepage/personal/closeaccount",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Lenovo ID",
		.query = "lenovo id",
		.url = "https://privacyportal.onetrust.com/webform/3c884b5f-db83-4077-91c8-fbfdaaba21fe/f15f8a67-782c-48c4-bf1e-0d7e6cd9b464",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Click Yes at the bottom when asked if you want to delete your Lenovo account."
	},
	{
		.name = "Lensbest",
		.query = "lensbest",
		.url = "https://www.lensbest.de/INTERSHOP/web/WFS/Lensbest-LensbestShop-Site/de_DE/-/EUR/ViewProfileSettings-ViewRemoveAccount",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on the provided link, login to your account, retype your account password to confirm and your account will be deleted immediately."
	},
	{
		.name = "Lenstore",
		.query = "lenstore",
		.url = "https://www.lenstore.co.uk/contact-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Have to contact them, using the contact us form. They require date of birth and phone number linked to account."
	},
	{
		.name = "Letgo",
		.query = "letgo",
		.url = "https://help.letgo.com/hc/en-001/requests/new?ticket_form_id=5285423513618",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "To delete your account you have to go to \"I have a question about my account\"->\"Delete\" and write your request. You will get a return later on."
	},
	{
		.name = "Letterboxd",
		.query = "letterboxd",
		.url = "https://letterboxd.com/user/disableaccount/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Letudiant",
		.query = "letudiant",
		.url = "https://my.letudiant.fr/tableau-de-bord/parametres/supprimer-mon-compte",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'Paramètres du compte', scroll drown and click the little link in black 'Supprimer définitivement mon compt' then validate and confirm the link sent to you by mail"
	},
	{
		.name = "LetyShops",
		.query = "letyshops",
		.url = "https://letyshops.com/user/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "LG Account",
		.query = "lg account",
		.url = "https://us.lgaccount.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in, open the account administration tab, and press 'Delete Account'. Note that you might need to repeat this process a couple times depending on the services you've got connected to LG Account. Once there's no more to delete, you should be logged out automatically (for good measure, verify you cannot login again). If you live in a country other than the US, you may also need to change the link URL to that of your country (e.g. Canadians should use ca.lgaccount.com instead)."
	},
	{
		.name = "Liberland",
		.query = "liberland",
		.url = "https://liberland.org",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can only disable the account, but never delete it."
	},
	{
		.name = "Liberty Lines",
		.query = "liberty lines",
		.url = "https://booking.libertylines.it/delete/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the customer area and delete your account. Your tickets will be anonymized."
	},
	{
		.name = "LibraryThing",
		.query = "librarything",
		.url = "https://www.librarything.de/editprofile/change",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Libre.fm",
		.query = "librefm",
		.url = "https://libre.fm/user-edit.php#",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'Profile', then 'Edit', then 'Show advanced settings', and finally check the 'Delete my account' checkbox."
	},
	{
		.name = "Lichess",
		.query = "lichess",
		.url = "https://lichess.org/account/close",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "lidraughts",
		.query = "lidraughts",
		.url = "https://lidraughts.org/account/close",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Lieferando",
		.query = "lieferando",
		.url = "https://www.lieferando.de/en/customerservice/article/how-do-i-delete-my-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Life360",
		.query = "life360",
		.url = "https://support.life360.com/hc/en-us/articles/360051153713-Delete-My-Account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go into Settings, Tap Account, Tap Delete Account, Select Delete My Account"
	},
	{
		.name = "Lifehacker",
		.query = "lifehacker",
		.url = "https://notice.sp-prod.net/sar/index.html?message_id=539278&account_id=1195&ccpa_type=delete",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form using the email address of your account and click on the verification link that is sent."
	},
	{
		.name = "Lifesum",
		.query = "lifesum",
		.url = "https://lifesum.com/account/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On you account page, go to the 'Close Account & Delete Data' tab."
	},
	{
		.name = "Lil'bots",
		.query = "lilbots",
		.url = "https://www.lilbots.io/pages/contact-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You must contact support and request the account deletion per the privacy policy."
	},
	{
		.name = "Lime",
		.query = "lime",
		.url = "https://help.li.me/hc/en/articles/360017597013",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You must contact support via your Lime's contact form to request deletion."
	},
	{
		.name = "Lingualeo",
		.query = "lingualeo",
		.url = "https://lingualeo.com/profile/edit",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Go to the linked page, scroll to the bottom and click \"Delete account\". You'll have to confirm the deletion by clicking the link from the confirmation email."
	},
	{
		.name = "Lingvano",
		.query = "lingvano",
		.url = "https://linking.lingvano.com/TEoq",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Make sure you canceled your subscription! You can delete your account via the web or mobile app."
	},
	{
		.name = "Lingvist",
		.query = "lingvist",
		.url = "https://lingvist.com/help/how-to-delete-my-account-and-download-my-data/",
		.email = "mailto:hello@lingvist.io",
		.difficulty = 0x400,
		.notes = "You can delete your account via the web or mobile app."
	},
	{
		.name = "LinkedIn",
		.query = "linkedin",
		.url = "https://www.linkedin.com/help/linkedin/answer/63",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "There are reports that LinkedIn continues to email people with a closed account. You may need to contact customer services to delete account instead of just closing it."
	},
	{
		.name = "Linktree",
		.query = "linktree",
		.url = "https://linktr.ee/admin/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your account details, scroll down to the 'Danger Zone' and click 'Delete Account'."
	},
	{
		.name = "Linkvertise",
		.query = "linkvertise",
		.url = "https://linkvertise.com/imprint",
		.email = "mailto:info@linkvertise.com?subject=Linkvertise%20account%20deletion%20request",
		.difficulty = 0x1000,
		.notes = "You must specify in the email whether you want to delete a premium or a publisher account."
	},
	{
		.name = "Linode",
		.query = "linode",
		.url = "https://cloud.linode.com/account/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the linked page select 'Close Account' and confirm your username."
	},
	{
		.name = "Linsensuppe",
		.query = "linsensuppe",
		.url = "https://www.linsensuppe.de",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "One cannot even change the password"
	},
	{
		.name = "Linus Tech Tips Store",
		.query = "linus tech tips store",
		.url = "https://www.lttstore.com/pages/privacy-policy",
		.email = "mailto:support@lttstore.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Listia",
		.query = "listia",
		.url = "https://help.listia.com/hc/en-us/articles/203895428-How-do-I-delete-close-my-account-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "Litmus",
		.query = "litmus",
		.url = "https://help.litmus.com/article/420-delete-your-account",
		.email = NULL,
		.difficulty = 0x4000,
		.notes = "They offer a \"simple deletion\" where your account will be dissociated with your email address, and a [\"full data deletion\"](https://trust.litmus.com/?itemUid=af8eb7bc-d4b7-4e13-a4b7-6f05e2744c22) for complete data deletion."
	},
	{
		.name = "Live Nation",
		.query = "live nation",
		.url = "https://privacyportal.onetrust.com/webform/ba6f9c5b-dda5-43bd-bac4-4e06afccd928/ba7654b2-26ce-47df-8954-0884b9a0cea5",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Select \"Delete My Information\" and enter the email address used on your account."
	},
	{
		.name = "LiveJournal",
		.query = "livejournal",
		.url = "https://www.livejournal.com/accountstatus.bml",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Once you delete your journal you have 30 days to undelete it, in case you change your mind. After 30 days, the journal will be permanently deleted and there will be no way to recover it."
	},
	{
		.name = "Livelo",
		.query = "livelo",
		.url = "https://www.livelo.com.br/profile?occsite=points&tab=tab_label_1",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Lnk.Bio",
		.query = "lnkbio",
		.url = "https://help.lnk.bio/en/articles/4300436-how-do-i-delete-my-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Log in and request deletion via the chat service using the button on the lower right corner."
	},
	{
		.name = "Lobsters",
		.query = "lobsters",
		.url = "https://lobste.rs/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "LOBSTR",
		.query = "lobstr",
		.url = "https://lobstr.co/settings/#profile-tab",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Visit the linked page and click 'Delete LOBSTR account' under the 'Profile' tab. You will be sent an email with a link to delete your account."
	},
	{
		.name = "Login.gov",
		.query = "logingov",
		.url = "https://secure.login.gov/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Sometimes the login page won't redirect properly, click the \"Delete Account\" link on the side if this happens."
	},
	{
		.name = "Logitech",
		.query = "logitech",
		.url = "https://support.logi.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Open a ticket on their customer service requesting the deletion of the account and provide a country, reason and your name"
	},
	{
		.name = "LogMeIn / Hamachi",
		.query = "logmein hamachi",
		.url = "https://submit-irm.trustarc.com/services/validation/818563f9-8d9c-4029-880a-bc743fb49de5",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Submit a request on the linked form. It can take up to 15 days for them to comply."
	},
	{
		.name = "Logo Maker",
		.query = "logo maker",
		.url = "https://www.logomaker.com/contact-us/",
		.email = "mailto:help@logomaker.com",
		.difficulty = 0x1000,
		.notes = "According to their privacy policy, you need to directly contact them."
	},
	{
		.name = "LogRocket",
		.query = "logrocket",
		.url = "https://docs.logrocket.com/docs/security",
		.email = "mailto:support@logrocket.com",
		.difficulty = 0x1000,
		.notes = "According to their security documentation, contact customer support via email and request the deletion of your account."
	},
	{
		.name = "Lolja",
		.query = "lolja",
		.url = "https://lolja.com.br",
		.email = "mailto:sac@lolja.com.br",
		.difficulty = 0x1000,
		.notes = "Contact the customer support via email and request the deletion of your account. In order for them to identify your account, make the request through the same email address that you have used to create your Lolja account."
	},
	{
		.name = "Lookout",
		.query = "lookout",
		.url = "https://www.lookout.com/#/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "log into your account, in the middle right."
	},
	{
		.name = "LoseIt",
		.query = "loseit",
		.url = "https://loseit.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the Settings page of your account, then account information and click “Close account”."
	},
	{
		.name = "Love My Credit Union Rewards",
		.query = "love my credit union rewards",
		.url = "https://rewards.lovemycreditunion.org/contact-us/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Scroll all the way down on the website and find a little button with a picture of an envelope to contact customer support to have your account deleted."
	},
	{
		.name = "LowEndTalk",
		.query = "lowendtalk",
		.url = "https://lowendtalk.com/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = NULL
	},
	{
		.name = "Lucidchart",
		.query = "lucidchart",
		.url = "https://www.lucidchart.com/users/login",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click in the top right corner on your Username, then \"Account settings\" and at the tab \"Close Account\""
	},
	{
		.name = "Lucky Patcher Forum",
		.query = "lucky patcher forum",
		.url = "https://www.luckypatchers.com/forum/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "The website does not offer any options that allow the account to be deleted."
	},
	{
		.name = "Ludum Dare",
		.query = "ludum dare",
		.url = "https://ldjam.com/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can't even change your username, email, or delete your posts."
	},
	{
		.name = "Lufthansa",
		.query = "lufthansa",
		.url = "https://www.lufthansa.com/online/myportal/lh/uk/my_account/profile/update?action=deleteProfileAction",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Luma",
		.query = "luma",
		.url = "https://lu.ma/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to profile settings, scroll to the bottom of the page and click on the 'Delete My Account' button"
	},
	{
		.name = "LuminPDF",
		.query = "luminpdf",
		.url = "https://account.luminpdf.com/profile-settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to profile settings and under Account click 'Delete My Account' button"
	},
	{
		.name = "Lumosity",
		.query = "lumosity",
		.url = "https://www.lumosity.com/app/v4/settings/account_deletion/new",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Luno",
		.query = "luno",
		.url = "https://www.luno.com/help/en/tickets/new?category_id=19",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill the form on the site to request data deletion. The support team will confirm the request by email."
	},
	{
		.name = "Lush",
		.query = "lush",
		.url = "https://www.lush.com/us/en_us/faq/usa-contact-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Conctact customer service and request account deletion"
	},
	{
		.name = "Lutris",
		.query = "lutris",
		.url = "https://lutris.net/user/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in to Lutris, then click on the linked page and scroll down to the 'Delete my account.' button."
	},
	{
		.name = "Lyconet",
		.query = "lyconet",
		.url = "https://www.lyconet.com/",
		.email = "mailto:data.protection@lyconet.com",
		.difficulty = 0x1000,
		.notes = "Send an email requesting account deletion."
	},
	{
		.name = "Lyft",
		.query = "lyft",
		.url = "https://account.lyft.com/privacy/data",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Log-in to your Lyft account on the website and request for deletion. Cannot be done via the app"
	},
	{
		.name = "M Covoit Lignes+",
		.query = "m covoit lignes",
		.url = "https://mcovoitlignesplus.zendesk.com/hc/fr/articles/360015255860-Comment-supprimer-mon-compte",
		.email = "mailto:support@lignesplus-m.fr",
		.difficulty = 0x1000,
		.notes = "You need to send an email to the support."
	},
	{
		.name = "M Mobilités / Appli M",
		.query = "m mobilites appli m",
		.url = "https://pass.mobilites-m.fr/mypass/account/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "From your profile page, click on \"Clôturer mon compte M\""
	},
	{
		.name = "M Réso",
		.query = "m reso",
		.url = "https://www.reso-m.fr/TPL_CODE/TPL_ECNLDASHBOARD/6-tableau-de-bord.htm",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "From your profile page, go to \"Your information\" and click on \"Delete my personal space \""
	},
	{
		.name = "Macrumors",
		.query = "macrumors",
		.url = "https://macrumors.zendesk.com/hc/en-us/articles/201260797-How-do-I-cancel-my-account-",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "There is no account deletion process offered. Remove your account's Personal Details (Location, About You, etc.), your forum signature, and any social media names in the Contact Details section and leave the account dormant."
	},
	{
		.name = "MacTrade",
		.query = "mactrade",
		.url = "https://www.mactrade.de/account/profile#confirmDeleteAccountModal",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In your user account go to 'Delete Account' and confirm the deletion via the 'Delete account now' button."
	},
	{
		.name = "MacUpdate",
		.query = "macupdate",
		.url = "https://www.macupdate.com/member/account-preferences",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In your account preferences select 'Delete all my personal data' in the bottom left. 14 days after your request all your data will be deleted. During the 14 days the delete request may be cancelled."
	},
	{
		.name = "Magasin",
		.query = "magasin",
		.url = "https://www.magasin.dk/profilaendring/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your profile, press 'Rediger' and then 'Slet profil'."
	},
	{
		.name = "Magicflow",
		.query = "magicflow",
		.url = "https://magicflow.com/profile/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your account page, click in 'Delete Account' then confirm."
	},
	{
		.name = "MAGIX",
		.query = "magix",
		.url = "https://www.magix.com/us/support/my-service-center/",
		.email = "mailto:infoservice@magix.net",
		.difficulty = 0x1000,
		.notes = "Since there is no button, you must contact them through E-Mail. Subsequently, after inclusion in their ticket system, they will resolve the matter soon; however, this may differ from one to another."
	},
	{
		.name = "Magoosh",
		.query = "magoosh",
		.url = "https://magoosh.zendesk.com/hc/en-us/articles/204307485-How-do-I-delete-my-account-",
		.email = "mailto:help@magoosh.com?subject=Need%20to%20delete%20my%20account",
		.difficulty = 0x400,
		.notes = "Send an email to help@magoosh.com with the subject line, 'Need to delete my account'. Might need to send another email for the deletion to finally go through."
	},
	{
		.name = "Mail.com",
		.query = "mailcom",
		.url = "https://support.mail.com/account/managing/delete.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "While logged in, go to \"Account\", then choose \"Delete account\" on the left-hand side panel. Once the section loads, click on the \"Delete account\" button, provide your password when prompted, and click \"Delete account\" to confirm. Detailed instructions are provided in the linked page."
	},
	{
		.name = "Mail.ru",
		.query = "mailru",
		.url = "https://account.mail.ru/user/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login into your account. Go to the deletion form. Enter the mailbox name and password. Specify the reason for the deletion, your account's password and the captcha code. Click the \"Delete\" button."
	},
	{
		.name = "mailbox.org",
		.query = "mailboxorg",
		.url = "https://mailbox.org/en/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Account Settings -> Delete Account."
	},
	{
		.name = "MailChimp",
		.query = "mailchimp",
		.url = "https://kb.mailchimp.com/article/how-do-i-close-my-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Account Settings -> Account Settings Drop-down -> Close my account -> Type DELETE and press Delete Account button."
	},
	{
		.name = "Mailfence",
		.query = "mailfence",
		.url = "https://kb.mailfence.com/kb/how-can-i-delete-my-account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to 'Settings'->'General'->'Delete Account'."
	},
	{
		.name = "Mailspring",
		.query = "mailspring",
		.url = "https://id.getmailspring.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Sign in -> Click the 'Delete your Mailspring ID' button -> Confirm"
	},
	{
		.name = "Major League Hacking (MLH)",
		.query = "major league hacking mlh",
		.url = "https://my.mlh.io",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = NULL
	},
	{
		.name = "MakeMyTrip",
		.query = "makemytrip",
		.url = "https://www.makemytrip.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "App -> Menu -> Account -> Settings -> Delete."
	},
	{
		.name = "MakerBot",
		.query = "makerbot",
		.url = "https://cloudprint.makerbot.com/settings/account/info",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'DELETE ACCOUNT' at the bottom of the 'Account Settings' page, then click 'DELETE'. This will also delete your Thingiverse account."
	},
	{
		.name = "Mangadex",
		.query = "mangadex",
		.url = "https://mangadex.org/settings#del",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Sign in -> Click the 'Delete' button -> You will receive an email with a confirm button -> Enter 'CONFIRM' in the text box."
	},
	{
		.name = "Mangools",
		.query = "mangools",
		.url = "https://mangools.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On 'Delete account' section, click the red 'Understand, delete my account'"
	},
	{
		.name = "Mapbox",
		.query = "mapbox",
		.url = "https://account.mapbox.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Enter Password -> Scroll to bottom -> Click 'Delete Account'"
	},
	{
		.name = "MapMyFitness",
		.query = "mapmyfitness",
		.url = "https://www.mapmyfitness.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "This will also delete the profiles for MapMyRun, MapMyWalk, and/or MapMyFitness that are associated with the same email"
	},
	{
		.name = "MapMyRun",
		.query = "mapmyrun",
		.url = "https://www.mapmyrun.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "This will also delete the profiles for MapMyRun, MapMyWalk, and/or MapMyFitness that are associated with the same email"
	},
	{
		.name = "MapMyWalk",
		.query = "mapmywalk",
		.url = "https://www.mapmywalk.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "This will also delete the profiles for MapMyRun, MapMyWalk, and/or MapMyFitness that are associated with the same email"
	},
	{
		.name = "Mapstr",
		.query = "mapstr",
		.url = "https://en.mapstr.com/faq",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in to your account in the app, then got to the \"Profile\" tab and open settings. After that, find the \"Data Management\" section and click \"Delete my account\"."
	},
	{
		.name = "Markdown Converter",
		.query = "markdown converter",
		.url = "https://mdconverter.com/account/settings/deletion",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked page and click close button"
	},
	{
		.name = "Marktplaats",
		.query = "marktplaats",
		.url = "https://www.marktplaats.nl/my-account/profile/edit.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in to Marktplaats. Go to the linked URL or in Marktplaats click on your name at the top right, choose 'Mijn Profiel' and go to your contact information. On this page, click 'Account verwijderen' at the bottom. Indicate why you want to delete your account and click 'Bevestigen'. Your account will be deleted and you will receive a confirmation email."
	},
	{
		.name = "Marq",
		.query = "marq",
		.url = "https://help.marq.com/delete-your-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Account can be deleted from the account settings. If you have an active subscription, then this needs to be cancelled first."
	},
	{
		.name = "Marvel",
		.query = "marvel",
		.url = "https://marvelapp.com/account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log into your account -> My Account -> click on Delete Account at the bottom of page."
	},
	{
		.name = "Mashable",
		.query = "mashable",
		.url = "https://support.stackcommerce.com/hc/en-us/requests/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact customer support using the link here to fill out a request for account deletion"
	},
	{
		.name = "Masiro",
		.query = "masiro",
		.url = "https://masiro.me/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "There is no delete button or contact email."
	},
	{
		.name = "MasterClass",
		.query = "masterclass",
		.url = "https://privacy.masterclass.com/policies",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "It's not possible to delete your account, but you can send a request to delete your personal data by making a Privacy Request."
	},
	{
		.name = "Mastodon.social",
		.query = "mastodonsocial",
		.url = "https://mastodon.social/settings/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login -> Account Settings -> Security -> Delete Account"
	},
	{
		.name = "Match",
		.query = "match",
		.url = "https://help.match.com/hc/en-us/articles/5610035266075-Delete-My-Account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Only possible within the mobile app, otherwise can only be done via [contacting support](https://help.match.com/hc/en-us/requests/new)."
	},
	{
		.name = "Mathpix",
		.query = "mathpix",
		.url = "https://accounts.mathpix.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Use the link to navigate to your account settings page. Log in with your email and password then click 'Delete your account'. You will be asked to confirm with your email and a simple captcha. Your email will be blacklisted from creating new accounts."
	},
	{
		.name = "Mathway",
		.query = "mathway",
		.url = "https://www.mathway.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Use the link to navigate to your account settings page. Click account, type your password and click delete."
	},
	{
		.name = "Mathworks",
		.query = "mathworks",
		.url = "https://se.mathworks.com/company/aboutus/data-subject-access-request-form.html",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Follow the link and use the form to request the deletion of your personal data. Subsequent identity verification may be required. The deletion process should complete within 30 days."
	},
	{
		.name = "Maxdome",
		.query = "maxdome",
		.url = "https://faq.maxdome.de/frage/mxdallgemein/mxdalleszu/was-ist-maxdome/wo-finde-ich-den-live-chat-von-maxdome",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact support via the live chat and request the deletion of your account. This is also possible via the [contact form](https://faq.maxdome.de/kontakt), though it could take longer."
	},
	{
		.name = "Maxforlive",
		.query = "maxforlive",
		.url = "https://support.cycling74.com/hc/en-us/articles/360049932234-Account-Access-Management",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "The Maxforlive website is affiliated with Cycling74 headquarters whose customer service you must contact Cycling 74 to delete the account, providing your email address, a screenshot of your associated account, and a reason."
	},
	{
		.name = "MaxMind",
		.query = "maxmind",
		.url = "https://support.maxmind.com/hc/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You must stop all services and cease downloading any databases before contacting support. State that you wish to delete your account and use your registered email on the contact form."
	},
	{
		.name = "Mbed",
		.query = "mbed",
		.url = "https://os.mbed.com/account/edit/account-options/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "McAfee",
		.query = "mcafee",
		.url = "https://home.mcafee.com/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You must call McAfee customer support and unsubscribe, which cancels your account. Be sure to have your state ID or driver's license available, as you will be asked questions to verify your identity."
	},
	{
		.name = "McDonald's",
		.query = "mcdonalds",
		.url = "https://www.mcdonalds.com/us/en-us/faq/how-do-i-delete-my-account.html",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "In the app, go to 'More', 'Profile', 'Delete account' and confirm."
	},
	{
		.name = "McVIP",
		.query = "mcvip",
		.url = "https://mcvip.mcdonalds.de/#/profil",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'Edit profile', scroll down to 'You want to delete your profile?', type in your password, click on 'Delete' and then 'Yes, delete it'."
	},
	{
		.name = "Mealpal",
		.query = "mealpal",
		.url = "https://www.mealpal.com/privacy-policy/",
		.email = "mailto:privacy@mealpal.com",
		.difficulty = 0x1000,
		.notes = "You can only delete your account by emailing them."
	},
	{
		.name = "Medal",
		.query = "medal",
		.url = "https://medal.tv/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down to the bottom of the linked page and click on 'Delete Account'."
	},
	{
		.name = "MediaFire",
		.query = "mediafire",
		.url = "https://www.mediafire.com/myaccount/accountbilling.php",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Scroll to the bottom of the page and click 'Delete my Account', make sure you're logged in and follow the steps."
	},
	{
		.name = "Mediapart",
		.query = "mediapart",
		.url = "https://www.mediapart.fr/contenu/conditions-generales-d-utilisation",
		.email = "mailto:contact@mediapart.fr?body=Please%20delete%20all%20information%20and%20data%20associated%20with%20my%20account.%20My%20username%20is%20XXXXXX.",
		.difficulty = 0x1000,
		.notes = "No information is clearly provided how to delete account. You have to send an email to explicitly ask for deletion of every information related to your account otherwise they will only disable it."
	},
	{
		.name = "Medium",
		.query = "medium",
		.url = "https://medium.com/me/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "MeetFrank",
		.query = "meetfrank",
		.url = "https://meetfrank.com",
		.email = "mailto:team@meetfrank.com",
		.difficulty = 0x1000,
		.notes = "Send the team/company/email of the account you want to delete. No verification (not even from the same sender e-mail) required."
	},
	{
		.name = "Meetup",
		.query = "meetup",
		.url = "https://help.meetup.com/hc/en-us/articles/360050018571-Request-permanent-deletion-of-your-data",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Permenant deletion may be requested via a web form."
	},
	{
		.name = "MEGA",
		.query = "mega",
		.url = "https://mega.nz/fm/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In the bottom right corner of the linked page, click 'Delete account'. Click the confirmation link sent to your email, then select a reason why you want to leave MEGA."
	},
	{
		.name = "Megaknihy",
		.query = "megaknihy",
		.url = "https://www.megaknihy.cz/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You must call their phone (as of writing +420 222 703 143) and request deletion. They ignored my e-mail."
	},
	{
		.name = "Megaxus",
		.query = "megaxus",
		.url = "https://megaxus.com",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = NULL
	},
	{
		.name = "Melodics",
		.query = "melodics",
		.url = "https://melodics.com/support#form-header",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "It might be possible to delete your account via the contact form, but the support team is known to be unresponsive."
	},
	{
		.name = "Memrise",
		.query = "memrise",
		.url = "https://www.memrise.com/settings/deactivate/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "A 'Delete my account' button is available from your account settings page."
	},
	{
		.name = "Mendeley",
		.query = "mendeley",
		.url = "https://www.mendeley.com/settings/account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Get to Mendeley and request for account to be closed at the privacy settings. Then contact Elsevier support asking for a deletion there too."
	},
	{
		.name = "Mercado Libre Argentina",
		.query = "mercado libre argentina",
		.url = "https://myaccount.mercadolibre.com.ar/cancelar-cuenta",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To cancel/delete your account, access the account deletion link specified above and log in to your account. In the options, select a reason why you want to cancel your account, click in the checkbox \"Estoy de acuerdo\", and confirm your action by clinking \"Aceptar\".\n\n**Warning:** You may cancel your account only if there is no limitation, partial and/or total blockage applied to it. You will also be unable to cancel your account if you have outstanding payments and/or purchases. Mercado Libre and Mercado Pago are services associated with the same type of account. If you choose to delete your Mercado Libre account, your Mercado Pago account will be deleted too."
	},
	{
		.name = "Mercado Libre Bolivia",
		.query = "mercado libre bolivia",
		.url = "https://myaccount.mercadolibre.com.bo/cancelar-cuenta",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To cancel/delete your account, access the account deletion link specified above and log in to your account. In the options, select a reason why you want to cancel your account, click in the checkbox \"Estoy de acuerdo\", and confirm your action by clinking \"Aceptar\".\n\n**Warning:** You may cancel your account only if there is no limitation, partial and/or total blockage applied to it. You will also be unable to cancel your account if you have outstanding payments and/or purchases."
	},
	{
		.name = "Mercado Libre Chile",
		.query = "mercado libre chile",
		.url = "https://myaccount.mercadolibre.cl/cancelar-cuenta",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To cancel/delete your account, access the account deletion link specified above and log in to your account. In the options, select a reason why you want to cancel your account, click in the checkbox \"Estoy de acuerdo\", and confirm your action by clinking \"Aceptar\".\n\n**Warning:** You may cancel your account only if there is no limitation, partial and/or total blockage applied to it. You will also be unable to cancel your account if you have outstanding payments and/or purchases. Mercado Libre and Mercado Pago are services associated with the same type of account. If you choose to delete your Mercado Libre account, your Mercado Pago account will be deleted too."
	},
	{
		.name = "Mercado Libre Colombia",
		.query = "mercado libre colombia",
		.url = "https://myaccount.mercadolibre.com.co/cancelar-cuenta",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To cancel/delete your account, access the account deletion link specified above and log in to your account. In the options, select a reason why you want to cancel your account, click in the checkbox \"Estoy de acuerdo\", and confirm your action by clinking \"Aceptar\".\n\n**Warning:** You may cancel your account only if there is no limitation, partial and/or total blockage applied to it. You will also be unable to cancel your account if you have outstanding payments and/or purchases. Mercado Libre and Mercado Pago are services associated with the same type of account. If you choose to delete your Mercado Libre account, your Mercado Pago account will be deleted too."
	},
	{
		.name = "Mercado Libre Costa Rica",
		.query = "mercado libre costa rica",
		.url = "https://myaccount.mercadolibre.co.cr/cancelar-cuenta",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To cancel/delete your account, access the account deletion link specified above and log in to your account. In the options, select a reason why you want to cancel your account, click in the checkbox \"Estoy de acuerdo\", and confirm your action by clinking \"Aceptar\".\n\n**Warning:** You may cancel your account only if there is no limitation, partial and/or total blockage applied to it. You will also be unable to cancel your account if you have outstanding payments and/or purchases."
	},
	{
		.name = "Mercado Libre Ecuador",
		.query = "mercado libre ecuador",
		.url = "https://myaccount.mercadolibre.com.ec/cancelar-cuenta",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To cancel/delete your account, access the account deletion link specified above and log in to your account. In the options, select a reason why you want to cancel your account, click in the checkbox \"Estoy de acuerdo\", and confirm your action by clinking \"Aceptar\".\n\n**Warning:** You may cancel your account only if there is no limitation, partial and/or total blockage applied to it. You will also be unable to cancel your account if you have outstanding payments and/or purchases."
	},
	{
		.name = "Mercado Libre El Salvador",
		.query = "mercado libre el salvador",
		.url = "https://myaccount.mercadolibre.com.sv/cancelar-cuenta",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To cancel/delete your account, access the account deletion link specified above and log in to your account. In the options, select a reason why you want to cancel your account, click in the checkbox \"Estoy de acuerdo\", and confirm your action by clinking \"Aceptar\".\n\n**Warning:** You may cancel your account only if there is no limitation, partial and/or total blockage applied to it. You will also be unable to cancel your account if you have outstanding payments and/or purchases."
	},
	{
		.name = "Mercado Libre Guatemala",
		.query = "mercado libre guatemala",
		.url = "https://myaccount.mercadolibre.com.gt/cancelar-cuenta",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To cancel/delete your account, access the account deletion link specified above and log in to your account. In the options, select a reason why you want to cancel your account, click in the checkbox \"Estoy de acuerdo\", and confirm your action by clinking \"Aceptar\".\n\n**Warning:** You may cancel your account only if there is no limitation, partial and/or total blockage applied to it. You will also be unable to cancel your account if you have outstanding payments and/or purchases."
	},
	{
		.name = "Mercado Libre Honduras",
		.query = "mercado libre honduras",
		.url = "https://myaccount.mercadolibre.com.hn/cancelar-cuenta",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To cancel/delete your account, access the account deletion link specified above and log in to your account. In the options, select a reason why you want to cancel your account, click in the checkbox \"Estoy de acuerdo\", and confirm your action by clinking \"Aceptar\".\n\n**Warning:** You may cancel your account only if there is no limitation, partial and/or total blockage applied to it. You will also be unable to cancel your account if you have outstanding payments and/or purchases."
	},
	{
		.name = "Mercado Libre México",
		.query = "mercado libre mexico",
		.url = "https://myaccount.mercadolibre.com.mx/cancelar-cuenta",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To cancel/delete your account, access the account deletion link specified above and log in to your account. In the options, select a reason why you want to cancel your account, click in the checkbox \"Estoy de acuerdo\", and confirm your action by clinking \"Aceptar\".\n\n**Warning:** You may cancel your account only if there is no limitation, partial and/or total blockage applied to it. You will also be unable to cancel your account if you have outstanding payments and/or purchases. Mercado Libre and Mercado Pago are services associated with the same type of account. If you choose to delete your Mercado Libre account, your Mercado Pago account will be deleted too."
	},
	{
		.name = "Mercado Libre Nicaragua",
		.query = "mercado libre nicaragua",
		.url = "https://myaccount.mercadolibre.com.ni/cancelar-cuenta",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To cancel/delete your account, access the account deletion link specified above and log in to your account. In the options, select a reason why you want to cancel your account, click in the checkbox \"Estoy de acuerdo\", and confirm your action by clinking \"Aceptar\".\n\n**Warning:** You may cancel your account only if there is no limitation, partial and/or total blockage applied to it. You will also be unable to cancel your account if you have outstanding payments and/or purchases."
	},
	{
		.name = "Mercado Libre Panamá",
		.query = "mercado libre panama",
		.url = "https://myaccount.mercadolibre.com.pa/cancelar-cuenta",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To cancel/delete your account, access the account deletion link specified above and log in to your account. In the options, select a reason why you want to cancel your account, click in the checkbox \"Estoy de acuerdo\", and confirm your action by clinking \"Aceptar\".\n\n**Warning:** You may cancel your account only if there is no limitation, partial and/or total blockage applied to it. You will also be unable to cancel your account if you have outstanding payments and/or purchases."
	},
	{
		.name = "Mercado Libre Paraguay",
		.query = "mercado libre paraguay",
		.url = "https://myaccount.mercadolibre.com.py/cancelar-cuenta",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To cancel/delete your account, access the account deletion link specified above and log in to your account. In the options, select a reason why you want to cancel your account, click in the checkbox \"Estoy de acuerdo\", and confirm your action by clinking \"Aceptar\".\n\n**Warning:** You may cancel your account only if there is no limitation, partial and/or total blockage applied to it. You will also be unable to cancel your account if you have outstanding payments and/or purchases."
	},
	{
		.name = "Mercado Libre Perú",
		.query = "mercado libre peru",
		.url = "https://myaccount.mercadolibre.com.pe/cancelar-cuenta",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To cancel/delete your account, access the account deletion link specified above and log in to your account. In the options, select a reason why you want to cancel your account, click in the checkbox \"Estoy de acuerdo\", and confirm your action by clinking \"Aceptar\".\n\n**Warning:** You may cancel your account only if there is no limitation, partial and/or total blockage applied to it. You will also be unable to cancel your account if you have outstanding payments and/or purchases. Mercado Libre and Mercado Pago are services associated with the same type of account. If you choose to delete your Mercado Libre account, your Mercado Pago account will be deleted too."
	},
	{
		.name = "Mercado Libre República Dominicana",
		.query = "mercado libre republica dominicana",
		.url = "https://myaccount.mercadolibre.com.do/cancelar-cuenta",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To cancel/delete your account, access the account deletion link specified above and log in to your account. In the options, select a reason why you want to cancel your account, click in the checkbox \"Estoy de acuerdo\", and confirm your action by clinking \"Aceptar\".\n\n**Warning:** You may cancel your account only if there is no limitation, partial and/or total blockage applied to it. You will also be unable to cancel your account if you have outstanding payments and/or purchases."
	},
	{
		.name = "Mercado Libre Uruguay",
		.query = "mercado libre uruguay",
		.url = "https://myaccount.mercadolibre.com.uy/cancelar-cuenta",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To cancel/delete your account, access the account deletion link specified above and log in to your account. In the options, select a reason why you want to cancel your account, click in the checkbox \"Estoy de acuerdo\", and confirm your action by clinking \"Aceptar\".\n\n**Warning:** You may cancel your account only if there is no limitation, partial and/or total blockage applied to it. You will also be unable to cancel your account if you have outstanding payments and/or purchases. Mercado Libre and Mercado Pago are services associated with the same type of account. If you choose to delete your Mercado Libre account, your Mercado Pago account will be deleted too."
	},
	{
		.name = "Mercado Libre Venezuela",
		.query = "mercado libre venezuela",
		.url = "https://myaccount.mercadolibre.com.ve/cancelar-cuenta",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To cancel/delete your account, access the account deletion link specified above and log in to your account. In the options, select a reason why you want to cancel your account, click in the checkbox \"Estoy de acuerdo\", and confirm your action by clinking \"Aceptar\".\n\n**Warning:** You may cancel your account only if there is no limitation, partial and/or total blockage applied to it. You will also be unable to cancel your account if you have outstanding payments and/or purchases. Mercado Libre and Mercado Pago are services associated with the same type of account. If you choose to delete your Mercado Libre account, your Mercado Pago account will be deleted too."
	},
	{
		.name = "Mercado Livre Brasil",
		.query = "mercado livre brasil",
		.url = "https://myaccount.mercadolivre.com.br/cancelar-conta",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To cancel/delete your account, access the account deletion link specified above and log in to your account. In the options, select a reason why you want to cancel your account, click in the checkbox \"Estou de acordo\", and confirm your action by clinking \"Aceito\".\n\n**Warning:** You may cancel your account only if there is no limitation, partial and/or total blockage applied to it. You will also be unable to cancel your account if you have outstanding payments and/or purchases. Mercado Livre and Mercado Pago are services associated with the same type of account. If you choose to delete your Mercado Livre account, your Mercado Pago account will be deleted too."
	},
	{
		.name = "Mes Services Étudiant",
		.query = "mes services etudiant",
		.url = "https://www.messervices.etudiant.gouv.fr/envole/message/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You can request the deletion of your account via the assistance form."
	},
	{
		.name = "Metacritic",
		.query = "metacritic",
		.url = "http://www.metacritic.com/contact-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "MetalPay",
		.query = "metalpay",
		.url = "https://help.metalpay.com/hc/en-us/articles/4409445335063-How-do-I-close-my-Metal-Pay-account-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact customer support to delete your account."
	},
	{
		.name = "MetLife",
		.query = "metlife",
		.url = "https://metlife.com.br/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "They claim nothing can be deleted."
	},
	{
		.name = "Metropolis",
		.query = "metropolis",
		.url = "https://app.metropolis.io/profile/terms-and-privacy",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Account Settings -> Terms and Privacy -> Delete Account"
	},
	{
		.name = "MEXC",
		.query = "mexc",
		.url = "https://www.mexc.com/privacypolicy#:~:text=other%20applicable%20laws.-,ACCOUNT%20DELETION,-You%20may%20delete",
		.email = "mailto:dataprotect@mexc.com?subject=I%20request%20the%20deletion%20of%20my%20MEXC%20account&body=Good%20day%2C%20MEXC%20Data%20Protection%20team%21%20I%20hereby%20request%20the%20deletion%20of%20my%20MEXC%20account%2C%20with%20UID%20%23%20%28put%20the%20UID%20here%29.%20The%20reason%20I%20request%20this%20deletion%20is%3A%20%28state%20your%20reason%20here%29.%20I%20enclose%20the%20required%20identity%20proof.%20%28Include%20a%20photo%20of%20yourself%20holding%20your%20ID%20card%20and%20a%20handwritten%20piece%20of%20paper%20with%20the%20following%20information%3A%20%22Today%20is%20%28put%20date%20here%29.%20I%20request%20the%20deletion%20of%20my%20MEXC%20account%20with%20UID%20%28put%20your%20UID%20here%29.%20I%20confirm%20and%20accept%20to%20waive%20all%20assets%20contained%20in%20this%20account.%20%28sign%20here%29%22%29%20Thanks%20in%20advance%20for%20your%20help%21%20Sincerely%2C%20%28put%20your%20name%20here%29.",
		.difficulty = 0x1000,
		.notes = "To delete your account, send an e-Mail to their Data Protection team. Include in the e-Mail your MEXC user ID (UID; seen in the user pop-up at the top right of the page), the reason for deletion, and a photo of yourself holding your ID card and a handwritten piece of paper with the following information: \"Today is (put date here). I request the deletion of my MEXC account with UID (put your UID here). I confirm and accept to waive all assets contained in this account. (sign here)\""
	},
	{
		.name = "Mi Account",
		.query = "mi account",
		.url = "https://account.xiaomi.com/pass/del",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Mibbit",
		.query = "mibbit",
		.url = "https://chat.mibbit.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Sign in and use the 'Account' link at the top right. At the bottom of the page is a link to delete your account."
	},
	{
		.name = "Microsoft Account",
		.query = "microsoft account",
		.url = "https://account.live.com/closeaccount.aspx",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Midjourney",
		.query = "midjourney",
		.url = "https://www.midjourney.com/account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your account page, scroll down to the 'How can I delete my account?' section in the FAQ and click on the 'Click here' button."
	},
	{
		.name = "Mikan Project",
		.query = "mikan project",
		.url = "https://mikanani.me/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "There is no delete button nor do they ever reply by e-mail."
	},
	{
		.name = "Milanote",
		.query = "milanote",
		.url = "https://app.milanote.com/account/settings/delete",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Enter your email, click on \"Yes, delete my account\", then enter your password and click on \"Continue\"."
	},
	{
		.name = "Mimo",
		.query = "mimo",
		.url = "https://getmimo.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'Delete my account' then 'Delete Account' to delete your account."
	},
	{
		.name = "MindMeister",
		.query = "mindmeister",
		.url = "https://accounts.meister.co/close_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You have to cancel your plan first"
	},
	{
		.name = "Minds",
		.query = "minds",
		.url = "https://www.minds.com/settings/other/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Mine",
		.query = "mine",
		.url = "https://saymineapp.com/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'Delete your Mine Account' at the bottom of the page, acknowledge that you wish to proceed and click 'Delete my Account'"
	},
	{
		.name = "Minecraft",
		.query = "minecraft",
		.url = "https://help.minecraft.net/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "On the linked page, chose the dropdown boxes that apply. Preferably use the email address that the account is associated with. You will be required to supply the transaction ID for the purchase of the account, or any other valid proof-of-purchase. If you have migrated to a Microsoft account, visit [this page](https://support.xbox.com/contact-us), sign in, and start a session with the virtual agent. Specify that your minecraft profile is linked to your microsoft account, and that you wish for it to be deleted. Alternatively, if you do not use your Microsoft account for anything else, you can [close your account](https://account.live.com/closeaccount.aspx) entirely."
	},
	{
		.name = "Minecraft Tools",
		.query = "minecraft tools",
		.url = "https://minecraft.tools/en/contact.php",
		.email = "mailto:contact@minecraft.tools",
		.difficulty = 0x2000,
		.notes = "The only way to contact them is by email, but no one responds."
	},
	{
		.name = "Minehut",
		.query = "minehut",
		.url = "https://app.minehut.com/support/form",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "The only way to contact them is at the linked form or through [here](https://support.minehut.com/hc/en-us/requests/new)."
	},
	{
		.name = "Minha Band",
		.query = "minha band",
		.url = "https://login.band.com.br/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Once logged in, use the link above or click on your user and then \"Editar Perfil\". Scroll to the bottom to click \"Excluir conta Band\", reenter your password and confirm."
	},
	{
		.name = "Miniclip",
		.query = "miniclip",
		.url = "https://me.miniclip.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in, click on \"Delete Account\" tab and then click \"Delete Account\"."
	},
	{
		.name = "MinID",
		.query = "minid",
		.url = "https://eid.difi.no/en/minid/blocking-minid",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to \"block\" your MinID first by sending [a form](https://eid.difi.no/sites/eid/files/2021-03/sperring_av_minid_en_v_1.3.pdf). You'll need to submit [another form](https://eid.difi.no/sites/eid/files/2021-03/sletting_fra_kontaktregister_en_v_1.2.pdf) if you want your information to be deleted from the contact registry."
	},
	{
		.name = "Mint",
		.query = "mint",
		.url = "https://mint.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to 'Settings', then 'Sign In & Security', then scroll down to 'Delete your Mint account'. Enter your email and password again and click 'Delete'."
	},
	{
		.name = "mintos.com",
		.query = "mintoscom",
		.url = "https://help.mintos.com/hc/en-us/requests/new?ticket_form_id=1900000292453",
		.email = "mailto:support@mintos.com?subject=Request%20to%20delete%20my%20account%20from%20Mintos&body=I%20have%20an%20account%20in%20your%20database%20associated%20with%20the%20email%20address%20XXXXXX%20%28investor%20id%3A%20XXXXXX%29.%20I%20have%20decided%20not%20to%20use%20the%20account%20again%3B%20therefore%2C%20I%20request%20that%20you%20kindly%20delete%20my%20account%20from%20your%20database%20and%20delete%20all%20the%20associated%20data.",
		.difficulty = 0x1000,
		.notes = "Before requesting account deletion, make sure you wait for the remaining payments to come through, and withdraw all available funds. The account balance must be 0. Then you can either use a [request form](https://help.mintos.com/hc/en-us/requests/new?ticket_form_id=1900000292453) or send an email to support directly."
	},
	{
		.name = "Miro",
		.query = "miro",
		.url = "https://miro.com/app/settings/user-profile/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click \"Delete my profile\" in the profile settings page. An e-mail with a verification code is sent to you, with which you can deactivate the account."
	},
	{
		.name = "MisterWong",
		.query = "misterwong",
		.url = "https://www.mister-wong.de",
		.email = "mailto:support@mister-wong.de",
		.difficulty = 0x1000,
		.notes = "You need to send an email to support and it may take up to 48 hours to process your request."
	},
	{
		.name = "Mistral AI",
		.query = "mistral ai",
		.url = "https://admin.mistral.ai/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on the link, scroll down, and then click the 'Delete Account' button. If you have a paid subscription, you must cancel it first."
	},
	{
		.name = "MixCloud",
		.query = "mixcloud",
		.url = "https://www.mixcloud.com/settings/delete-account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on \"Just delete my account\"."
	},
	{
		.name = "Mixlr",
		.query = "mixlr",
		.url = "https://mixlr.com/settings/account/delete/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, go to account section of the settings page and choose the \"delete account\" option."
	},
	{
		.name = "MMORPG.com",
		.query = "mmorpgcom",
		.url = "https://www.mmorpg.com/notice/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Mobalytics",
		.query = "mobalytics",
		.url = "https://mobalytics.gg/lol/account-settings/account-information",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom and click \"Delete my account\"."
	},
	{
		.name = "Mobify",
		.query = "mobify",
		.url = "https://www.mobify.com/contact/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to send a message in order to remove your account."
	},
	{
		.name = "Mobills",
		.query = "mobills",
		.url = "https://web.mobillsapp.com/Configuracoes/DeletaConta",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Just click the delete button. Note that if you have made an account via Google or Facebook, you'll have to change the password first."
	},
	{
		.name = "Mockflow",
		.query = "mockflow",
		.url = "https://support.mockflow.com/article/10-can-i-delete-my-mockflow-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account -> Open the menu and choose My Account -> In the Profile Details tab click on 'Delete Account' & confirm deletion by entering your password."
	},
	{
		.name = "Modrinth",
		.query = "modrinth",
		.url = "https://modrinth.com/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the profile icon in the top right corner and select \"Settings\", then \"Account\", click \"Delete account\" at the bottom of the page, type your username and confirm. Your projects will not be deleted."
	},
	{
		.name = "Mojang",
		.query = "mojang",
		.url = "https://account.mojang.com/me/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "If you have registered a Mojang account and would like to delete your account, please visit your account settings page. Please be aware that if your account is deleted, you will no longer be able to log into Mojang services, and will not be able to purchase future Mojang games."
	},
	{
		.name = "Molotov",
		.query = "molotov",
		.url = "https://www.molotov.tv/account/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in, go to your profile settings, finally find at the bottom of the page (Delete my account)."
	},
	{
		.name = "Momox",
		.query = "momox",
		.url = "https://www.momox.de/kleidung-verkaufen/kontaktformular/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to request account deletion through the contact form provided on their website."
	},
	{
		.name = "Momox Fashion",
		.query = "momox fashion",
		.url = "https://momoxfashion.zendesk.com/hc/de/articles/360011251419-Ich-m%C3%B6chte-mein-Konto-abmelden-Wie-geht-das",
		.email = "mailto:support@momoxfashion.com?subject=Antrag%20auf%20L%C3%B6schung%20meines%20Momox-Fashion%20Kontos%20gem%C3%A4%C3%9F%20DSGVO%20Artikel%2017&body=Sehr%20geehrte%20Damen%20und%20Herren%2C%20hiermit%20beantrage%20ich%20die%20L%C3%B6schung%20meines%20Momox-Fashion%20Kontos%2C%20das%20unter%20der%20E-Mail-Adresse%20%27your-email%40address.here%27%20registriert%20ist.%20Gem%C3%A4%C3%9F%20Artikel%2017%20der%20Datenschutz-Grundverordnung%20%28DSGVO%29%20bitte%20ich%20um%20die%20vollst%C3%A4ndige%20L%C3%B6schung%20meiner%20personenbezogenen%20Daten%2C%20da%20ich%20nicht%20mehr%20an%20der%20Nutzung%20des%20Kontos%20interessiert%20bin.%20Ich%20bitte%20um%20eine%20Best%C3%A4tigung%20der%20L%C3%B6schung%20sowie%20um%20Informationen%20dar%C3%BCber%2C%20dass%20meine%20Daten%20tats%C3%A4chlich%20entfernt%20wurden.%20Vielen%20Dank%20und%20mit%20freundlichen%20Gr%C3%BC%C3%9Fen%2C%20%27Firstname%20Lastname%27",
		.difficulty = 0x1000,
		.notes = "To get your account deleted, you have to contact their support via e-mail."
	},
	{
		.name = "Mon Compte Formation",
		.query = "mon compte formation",
		.url = "https://www.moncompteformation.gouv.fr/espace-public/comment-me-desinscrire-de-mon-compte-formation",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the \"My Account\" page, click on \"Unregister\""
	},
	{
		.name = "Mon Espace Santé",
		.query = "mon espace sante",
		.url = "https://www.monespacesante.fr/questions-frequentes/acceder-a-mon-espace-sante/14",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, click on your profile, then on \"Paramètres\". Then click on \"Clôture du profil\""
	},
	{
		.name = "Mon Espace STAS",
		.query = "mon espace stas",
		.url = "https://www.reseau-stas.fr/fr/mon-espace-stas/159/Member/editprofile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your profile settings, scroll down and click on \"Delete my account\", then confirm by clicking on \"Delete my subscription\"."
	},
	{
		.name = "Monarch Money",
		.query = "monarch money",
		.url = "https://help.monarchmoney.com/hc/en-us/articles/4412388754708-Delete-a-Monarch-Account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click Delete Household in the Billing section of the Settings page."
	},
	{
		.name = "Money Dashboard",
		.query = "money dashboard",
		.url = "https://help.moneydashboard.com/hc/requests/new",
		.email = "mailto:support@moneydashboard.com",
		.difficulty = 0x1000,
		.notes = "If you wish to delete your account and its belonging data and bank accounts held within it, you have to submit a request to the user support (or send an e-mail to support@moneydashboard.com). Make it clear that you require the full deletion of your account, not simply the deletion of one of your bank accounts. If you only want to delete/remove a bank account, but keep your Money Dashboard account open, please visit [https://help.moneydashboard.com/entries/21936798](https://help.moneydashboard.com/entries/21936798)"
	},
	{
		.name = "Money Lover",
		.query = "money lover",
		.url = "https://web.moneylover.me",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the menu on the top left corner, click 'My Account' then 'Delete Account' on the bottom of the dialog and confirm."
	},
	{
		.name = "Money Saving Expert",
		.query = "money saving expert",
		.url = "https://clubs.moneysavingexpert.com/cheapenergyclub/my-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Just login to your account, select 'My Account', scroll to the bottom, select 'Settings' and click 'Close Account'"
	},
	{
		.name = "MongoDB Atlas",
		.query = "mongodb atlas",
		.url = "https://docs.atlas.mongodb.com/tutorial/delete-atlas-account/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To delete your MongoDB account you first need to delete all active clusters, projects and organizations linked with your account. Then click your name in the top right corner, click \"Manage your MongoDB Account\", and click \"Profile Info\" in the left panel. Click \"Delete Account\" and proceed with the presented steps."
	},
	{
		.name = "Monkeytype",
		.query = "monkeytype",
		.url = "https://monkeytype.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom of the linked page and click the 'delete account' button."
	},
	{
		.name = "Monoprice",
		.query = "monoprice",
		.url = "https://www.monoprice.com/Help/Index?pn=contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Use the contact form to ask customer service to delete your account."
	},
	{
		.name = "Monster",
		.query = "monster",
		.url = "https://www.monster.com/privacy/emailform",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "On the linked page, complete the form and ask for your account to be deleted."
	},
	{
		.name = "MonTCL",
		.query = "montcl",
		.url = "https://boutique.tcl.fr/en/account/personal-data",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your account settings, select \"My personal data\" and click on \"Confirm the deletion of my monTCL account\". You can also ask for deletion of all data related to you by clicking on \"Request deletion of all my personal data\""
	},
	{
		.name = "Moodle",
		.query = "moodle",
		.url = "https://moodle.org/admin/tool/dataprivacy/createdatarequest.php?type=2",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "After you place a request, you need to wait until the account is manually deleted by the administrator."
	},
	{
		.name = "Moonpig",
		.query = "moonpig",
		.url = "https://support-uk.moonpig.com/hc/en-gb/articles/360007011998-How-do-I-delete-my-Account-Data-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact customer services and they'll respond in 24-48 hours. Not to mention the ways they try to hide you removing your card details. If you want to remove your card details, do the following: The easiest way to do this would be to go to the My Account page then click on the ‘Add Moonpig Prepay Credit’ link, click on the Buy link and your saved card details will be shown onscreen. Click on the ‘Remove Card’ option."
	},
	{
		.name = "Moovit",
		.query = "moovit",
		.url = "https://support.moovitapp.com/hc/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "In the app, go to \"Help & Support\", then \"My Accounts and Personal Information\", \"Deleting my Accounts and Personal Information\", scroll to the bottom of the page and click \"Give us feedback\", and fill out the form requesting cancellation of the account. For \"Feedback Type\" choose \"Edit or delete personal information\", under \"Privacy and Security\". If you also want to delete the Moovit Editor account you will have to explicitly ask for it."
	},
	{
		.name = "Morningstar",
		.query = "morningstar",
		.url = "https://socialize.morningstar.com/feedback/feedbackform.asp",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the feedback form, asking them to delete your account. Be sure to specify that you’re not just unsubscribing from e-mail but that you want your account deleted entirely."
	},
	{
		.name = "Mote",
		.query = "mote",
		.url = "https://support.mote.com/hc/en-us/articles/4407299329940-How-do-I-delete-my-account-",
		.email = "mailto:support@mote.com",
		.difficulty = 0x1000,
		.notes = "Email them from the account you wish to delete."
	},
	{
		.name = "Mouser",
		.query = "mouser",
		.url = "https://www.mouser.co.uk/privacypolicy",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Visit the privacy policy page and scroll down to section Right to erasure (Right to have your data deleted). Enter your email address into the form. A link to the account deletion form will then be sent to your registered email address. To delete your account you have to fill out the form with details such as your full name and address. Once completed you will receive a confirmation email informing you that your account will be deleted within 30 days. Alternatively you can contact the data protection officer using the email address provided in the privacy policy."
	},
	{
		.name = "Moviepilot.de",
		.query = "moviepilotde",
		.url = "https://www.moviepilot.de/users/null/edit_membership",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Mozilla Developer Network (MDN)",
		.query = "mozilla developer network mdn",
		.url = "https://bugzilla.mozilla.org/enter_bug.cgi?product=developer.mozilla.org",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Log in to Bugzilla and create a bug report to request the deletion of your account (see examples: [#1576401](https://bugzilla.mozilla.org/show_bug.cgi?id=1576401)and [#1353345](https://bugzilla.mozilla.org/show_bug.cgi?id=1353345)).</br></br>If you have made contributions to the MDN Web Docs, you will also need to specify what you would like to happen with them after deleting your account."
	},
	{
		.name = "Mozilla Support",
		.query = "mozilla support",
		.url = "https://support.mozilla.org/en-US/users/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the Edit Profile page scroll down and click Close account and delete all profile information then type your username to confirm."
	},
	{
		.name = "MSI",
		.query = "msi",
		.url = "https://account.msi.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your account page, in Account section, go to Login Management, and in DELETE ACCOUNT click Delete."
	},
	{
		.name = "MTCGAME",
		.query = "mtcgame",
		.url = "https://www.mtcgame.com/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "There is no delete button nor do they ever reply by e-mail."
	},
	{
		.name = "Muambator",
		.query = "muambator",
		.url = "https://www.muambator.com.br/perfil/minha-conta/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your account page, scroll to the bottom and click on the red button to delete it."
	},
	{
		.name = "Mullvad",
		.query = "mullvad",
		.url = "https://mullvad.net/en/help/faq#119",
		.email = "mailto:support@mullvadvpn.net",
		.difficulty = 0x1000,
		.notes = "Contact support via email to request deletion of your account."
	},
	{
		.name = "MultCloud",
		.query = "multcloud",
		.url = "https://www.multcloud.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, click in the account icon -> Settings -> Delete Account and write the password and a note (optionally)."
	},
	{
		.name = "Multiplayer Game Hacking MPGH",
		.query = "multiplayer game hacking mpgh",
		.url = "https://www.mpgh.net/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Accounts can not be deleted, but admins offer an 'account purge' per request. It is wise to manually strip your account from any personal data."
	},
	{
		.name = "MuniMobile (San Francisco Municipal Transportation Agency)",
		.query = "munimobile san francisco municipal transportation agency",
		.url = "https://sfmta.transitsherpa.com/rider-web/",
		.email = "mailto:munimobile@sfmta.com",
		.difficulty = 0x2000,
		.notes = "If you mail them asking for deletion, you will get that \"MuniMobile accounts cannot be deleted as we are required to retain the transaction information for financial audit purposes\". They say they do deactivate the account, though."
	},
	{
		.name = "Munzee",
		.query = "munzee",
		.url = "https://www.munzee.com/privacy/",
		.email = "mailto:privacy@freezetag.com",
		.difficulty = 0x1000,
		.notes = "Send an e-mail to privacy@freezetag.com. This email should include your first name, last name, e-mail address and, if applicable, your social network ID for the social network from which you access these services. (for example, your Facebook user ID)"
	},
	{
		.name = "Musei Italiani",
		.query = "musei italiani",
		.url = "https://portale.museiitaliani.it/b2c/myProfile",
		.email = "mailto:rpd@cultura.gov.it?subject=Elimina%20il%20mio%20account&body=Ciao%2C%0A%0ASi%20prega%20di%20eliminare%20il%20mio%20account%20YOUR_ACCOUNT%20e%20tutti%20i%20dati%20associati%20ad%20esso%2C%20per%20favore%0A%0AGrazie%20mille%2C",
		.difficulty = 0x1000,
		.notes = "Send them an e-mail to request deletion."
	},
	{
		.name = "Musescore",
		.query = "musescore",
		.url = "https://musescore.com/user/settings/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'Delete account' at the left of the page."
	},
	{
		.name = "Musicboard",
		.query = "musicboard",
		.url = "https://musicboard.app/settings/preferences",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Navigate to Settings -> preferences -> Delete account (at the bottom of the page)."
	},
	{
		.name = "MusicBrainz",
		.query = "musicbrainz",
		.url = "https://musicbrainz.org/account/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on the 'Delete account' tab, then confirm with the 'Delete my account' button"
	},
	{
		.name = "Musixmatch",
		.query = "musixmatch",
		.url = "https://account.musixmatch.com/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the \"Delete account\" button. Your contributions will remain visible on our platform, but your name will no longer be displayed. It will take 7 days to process your account deletion request."
	},
	{
		.name = "Mutant Mail",
		.query = "mutant mail",
		.url = "https://my.mutantmail.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Re-verify intent with your password at the bottom of the settings page and click 'Delete Account'."
	},
	{
		.name = "MXstore",
		.query = "mxstore",
		.url = "https://www.mxstore.com.au/submit-a-request",
		.email = "mailto:enquiries@mxstore.com.au",
		.difficulty = 0x1000,
		.notes = "Contact support using the linked form or by email and request account deletion."
	},
	{
		.name = "My Calendar",
		.query = "my calendar",
		.url = "https://www.simpleinnovation.us/contact",
		.email = "mailto:feedback@period-tracker.com",
		.difficulty = 0x1000,
		.notes = "Contact support using the linked form or by email and request account deletion."
	},
	{
		.name = "My Fitness Pal",
		.query = "my fitness pal",
		.url = "https://www.myfitnesspal.com/en/account/confirm_delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Just login and head to the account settings to click on delete account."
	},
	{
		.name = "My Invisalign",
		.query = "my invisalign",
		.url = "https://my.invisalign.com/myprofile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login and select 'Delete Account' in the sidebar in your account settings"
	},
	{
		.name = "My Lands",
		.query = "my lands",
		.url = "https://uk.mlgame.org/",
		.email = "mailto:support_uk@elyland.net",
		.difficulty = 0x1000,
		.notes = "Contact the customer support via email and ask to delete your account. You should use the email of the country where you are registered: it's in the contacts, at the bottom of the website."
	},
	{
		.name = "MyAnimeList",
		.query = "myanimelist",
		.url = "https://myanimelist.net/account_deletion",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Enter your email address in the \"Enter your registered email address\" field and click \"Confirmation\" to request the deletion of your account. After that, confirm your request by clicking on the confirmation link that will be sent to you by email.\n\nIf your account has been banned for any reason or you are an MAL Supporter, request the deletion of your account through [this](https://myanimelist.net/about.php?go=contact) contact form instead of using the method explained above."
	},
	{
		.name = "MyCreds",
		.query = "mycreds",
		.url = "https://membertrustregistry.mycreds.ca",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Account deletion has to be done by the issuing institution. Use the linked page to find the appropriate information for contacting the issuing institution."
	},
	{
		.name = "myESET",
		.query = "myeset",
		.url = "https://my.eset.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the account page there is a Delete account button"
	},
	{
		.name = "MyFigureCollection",
		.query = "myfigurecollection",
		.url = "https://myfigurecollection.net/settings/profile/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the account settings page, click on \"Delete my account\""
	},
	{
		.name = "MyFonts",
		.query = "myfonts",
		.url = "https://www.myfonts.com/my/settings/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the linked page select 'Delete your MyFonts account' and confirm your password."
	},
	{
		.name = "MyFRITZ!",
		.query = "myfritz",
		.url = "https://sso.myfritz.net/account/#/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login and select 'Delete Account' in the sidebar in your account settings"
	},
	{
		.name = "Myfxbook",
		.query = "myfxbook",
		.url = "https://www.myfxbook.com/settings#profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Account deletion can be achieved from within the profile settings."
	},
	{
		.name = "MyHeritage",
		.query = "myheritage",
		.url = "https://MyHeritage.com/",
		.email = "mailto:privacy_support@myheritage.com?subject=Account%20Deletion%20Request&body=Hi%2C%20I%20request%20to%20permanently%20remove%20all%20of%20my%20data%20from%20your%20platform.%20Please%20provide%20an%20update%20on%20the%20process%20via%20this%20email.",
		.difficulty = 0x1000,
		.notes = "You have to contact the support team by email (privacy_support@myheritage.com) to delete both your site and your account."
	},
	{
		.name = "MyJDownloader",
		.query = "myjdownloader",
		.url = "https://my.jdownloader.org",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your account settings (top right, click on your E-Mail-Address) and select 'Delete Account'"
	},
	{
		.name = "MyMaxon",
		.query = "mymaxon",
		.url = "https://id.maxon.net/settings/deleteAccount.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page, enter your password, and confirm you wish to delete your account."
	},
	{
		.name = "MyPlate",
		.query = "myplate",
		.url = "https://livestrong.zendesk.com/hc/en-us/articles/205147450-How-do-I-delete-my-account-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Send a request to the customer service team, including your account username or email address."
	},
	{
		.name = "MyScript",
		.query = "myscript",
		.url = "https://sso.myscript.com/v1/api/account/delete/request",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Accessing the URL triggers a confirmation mail containing a deletion link. Click this link and your account will be deleted immediately."
	},
	{
		.name = "MySpace",
		.query = "myspace",
		.url = "https://myspace.com/settings/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "myWorld",
		.query = "myworld",
		.url = "https://www.myworld.com/",
		.email = "mailto:data.protection@myworld.com",
		.difficulty = 0x1000,
		.notes = "Send an email requesting account deletion."
	},
	{
		.name = "Más Renfe",
		.query = "mas renfe",
		.url = "https://www.renfe.com/es/en/legal-information/renfe-operadora/privacidad-cookies/politica-privacidad",
		.email = "mailto:derechos.renfeepe@renfe.es?body=Quiero%20suprimir%20mi%20M%C3%A1s%20Renfe%20cuenta",
		.difficulty = 0x1000,
		.notes = "You need to send an email to delete your account."
	},
	{
		.name = "Méliuz",
		.query = "meliuz",
		.url = "https://www.meliuz.com.br/minha-conta/meus-dados/excluir-conta",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "N11",
		.query = "n11",
		.url = "https://www.n11.com/hesabim/uyelik-iptali",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Namecheap",
		.query = "namecheap",
		.url = "https://www.namecheap.com/support/knowledgebase/article.aspx/303/44/how-do-i-cancel-or-close-my-account-with-you",
		.email = NULL,
		.difficulty = 0x4000,
		.notes = "You have to contact Customer Support to delete your account, and provide your account username, support PIN, and reason why you would like to close your account. Customers with suspended accounts must first have them reinstated (by providing full government ID) before they can be deleted. Customers who reside in sanctioned countries (such as Russia) cannot delete their accounts at all until they provide proof of residency in a non-sanctioned country."
	},
	{
		.name = "NameMC",
		.query = "namemc",
		.url = "https://namemc.com/my-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "All of your followers, favorite servers, and social media information will be removed from all of your linked Minecraft profiles if you delete your NameMC account."
	},
	{
		.name = "Nandos",
		.query = "nandos",
		.url = "https://help.nandos.co.uk/hc/en-gb/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact Customer support to delete your account, referencing GDPR in the subject or body. After 14 days, your account will be deleted permanently."
	},
	{
		.name = "NaNoWriMo",
		.query = "nanowrimo",
		.url = "https://nanowrimo.org/account_settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the Account Settings page is a \"Delete My Account\" button. Your account will be \"disabled and scheduled for permanent deletion.\" After 30 days, \"your past novels, author profile, and unique account info will be permanently deleted.\" It is unclear if forum posts will be deleted."
	},
	{
		.name = "Napster",
		.query = "napster",
		.url = "https://help.napster.com/hc/en-us/articles/218661367",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Start a chat and ask for your account to be deleted. You can delete anyone's account like this! Just \"I'd like my account to be deleted.\" -\"What email?\" -\"email@email.email\" -\"Ok, I have gone ahead and deleted it.\""
	},
	{
		.name = "National Express",
		.query = "national express",
		.url = "https://nationalexpress.com",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "No on-site way to delete an account, also does not reply to emails sent to email in the privacy policy for the data controller."
	},
	{
		.name = "NationStates",
		.query = "nationstates",
		.url = "https://www.nationstates.net/page=faq",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Stay logged out of your nation for 28 or 60 days, depending on your settings. However, your nation will be merely deactivated. The only way to have your nation truly deleted is to not have the nation long enough to reach a population of over 1 billion, and for someone else to create a nation with the same name at least 5 years after it was deactivated."
	},
	{
		.name = "Native",
		.query = "native",
		.url = "https://www.nativecos.com/pages/contact-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the contact form. They will email you to verify your request via email, and will then ask for two pieces of personal information from the account. They will then delete the account but retain information relevant to any orders made."
	},
	{
		.name = "Native Instruments",
		.query = "native instruments",
		.url = "https://support.native-instruments.com/hc/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill the ticket form and wait for response."
	},
	{
		.name = "Natural Readers",
		.query = "natural readers",
		.url = "https://www.naturalreaders.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login first, then on the left menu click 'account' then 'edit' under your email address. A popup will appear where you can delete your account."
	},
	{
		.name = "NAVER",
		.query = "naver",
		.url = "https://nid.naver.com/user2/help/leaveId?menu=nid",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Re-registration is not possible with a deleted ID, and posts written on the bulletin board are not automatically deleted. So, make delete or make them private before you terminate your account."
	},
	{
		.name = "NCBI",
		.query = "ncbi",
		.url = "https://www.ncbi.nlm.nih.gov/books/NBK3842/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Accounts will be deleted after 2 years of inactivity"
	},
	{
		.name = "Nearpod",
		.query = "nearpod",
		.url = "https://nearpod.com/contact/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Requires to fill out contact form. Will still get Promotional emails until you also unsubscribe from them"
	},
	{
		.name = "NeoDB",
		.query = "neodb",
		.url = "https://neodb.social/account/info",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'Delete account' near the bottom of the page and follow the instructions."
	},
	{
		.name = "Neon Pagamentos",
		.query = "neon pagamentos",
		.url = "https://suporte.neon.com.br/hc/pt-br/articles/360050729234-Como-fa%C3%A7o-para-cancelar-a-conta-",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Neon accounts cannot be deleted, only canceled."
	},
	{
		.name = "Neopets",
		.query = "neopets",
		.url = "https://www.neopets.com/help_search.phtml?help_id=4",
		.email = "mailto:support@neopets.com",
		.difficulty = 0x1000,
		.notes = "Send an email to the support@neopets.com stating you wish to delete your account."
	},
	{
		.name = "Nerdwallet",
		.query = "nerdwallet",
		.url = "https://support.nerdwallet.com/hc/en-us/articles/115001636783-How-can-I-close-my-NerdWallet-account-",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Netbela Hosting",
		.query = "netbela hosting",
		.url = "https://netbela.com/contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Create a ticket to the Billing department and request your account to be deleted."
	},
	{
		.name = "NetBird",
		.query = "netbird",
		.url = "https://docs.netbird.io/how-to/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the \"Settings\" tab, then click on \"Danger Zone\". Review the message and click on the \"Delete Account\" button."
	},
	{
		.name = "Netdata",
		.query = "netdata",
		.url = "https://learn.netdata.cloud/docs/cloud/data-privacy#delete-all-personal-data",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In your profile preferences, click 'Delete account' then confirm."
	},
	{
		.name = "Netflix",
		.query = "netflix",
		.url = "https://www.netflix.com/account/security",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "To delete your account, cancel your active membership, click on the provided link, and scroll down to the 'Delete Account' button. Enter the confirmation code, and your account will be deleted automatically on the day your subscription ends. Accounts without a membership will be deleted automatically after 10 months."
	},
	{
		.name = "Netgate",
		.query = "netgate",
		.url = "https://www.netgate.com/company/privacy-policy#right-to-erasure-right-to-be-forgotten",
		.email = "mailto:privacy@netgate.com?body=Please%20delete%20my%20account%2C%20my%20email%20address%20is%20XXXXXX",
		.difficulty = 0x1000,
		.notes = "You need to send an email. If you have placed any orders (even for $0) in the last 7 years, support will refuse to delete your account."
	},
	{
		.name = "Netlify",
		.query = "netlify",
		.url = "https://app.netlify.com/account/settings/general#danger-zone",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Press the 'delete' button and then enter your name to confirm."
	},
	{
		.name = "Netology",
		.query = "netology",
		.url = "https://netology.ru",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "It is not possible to delete your account.  The best you can do is delete any personal information that you have stored on their website."
	},
	{
		.name = "NetSfere",
		.query = "netsfere",
		.url = "https://help.netsfere.com/",
		.email = "mailto:support@netsfere.com",
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "Netvibes",
		.query = "netvibes",
		.url = "https://www.netvibes.com/account/unsubscribe",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "New Relic",
		.query = "new relic",
		.url = "https://docs.newrelic.com/docs/accounts/accounts-billing/account-setup/downgradecancel-account/#cancel-simple-org",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "From the New Relic menu bar, select (account) -> Upgrade subscription -> Cancel account. Select the confirmation prompt."
	},
	{
		.name = "New York Times",
		.query = "new york times",
		.url = "https://www.nytimes.com/data-subject-request",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Use the form to request deletion of all of your personal data, they will only do it if law mandates like GDPR (Europe), otherwise account will just be deactivated. You might be required to confirm the request by mail or another form of contact."
	},
	{
		.name = "Newegg",
		.query = "newegg",
		.url = "https://kb.newegg.com/knowledge-base/data-rights-request/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Visit the linked page, select 'Delete my personal information', write your first name, last name, email and request, for example: 'Please delete my account and all personal information you have about me', click 'Submit'. You'll receive a confirmation email, click 'Verify Your Email'. Your request will be completed in few days (usually 2 business days)."
	},
	{
		.name = "Newgrounds",
		.query = "newgrounds",
		.url = "https://www.newgrounds.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your account settings and select \"Request Account Deletion.\" It can take up to 30 days for your account to be completely deleted."
	},
	{
		.name = "NewsBlur",
		.query = "newsblur",
		.url = "https://www.newsblur.com/profile/delete_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Newspapers.com",
		.query = "newspaperscom",
		.url = "https://www.newspapers.com/contact/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Click the link to send a message to support and ask them to delete your account."
	},
	{
		.name = "Newspipe",
		.query = "newspipe",
		.url = "https://www.newspipe.org/",
		.email = "mailto:info@newspipe.org",
		.difficulty = 0x1000,
		.notes = "There is a  \"delete your account\" button, but it was not working. Mailing them does."
	},
	{
		.name = "Nexo",
		.query = "nexo",
		.url = "https://platform.nexo.io/security/close-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, go to 'Account -> Security' and enable 2FA. Go to the URL and then close your account."
	},
	{
		.name = "Nexon",
		.query = "nexon",
		.url = "https://support-maplestory.nexon.net/hc/fr/articles/360000698823-Comment-puis-je-supprimer-ou-d%C3%A9sactiver-mon-compte-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Open a ticket to ask for account deletion"
	},
	{
		.name = "NextDNS",
		.query = "nextdns",
		.url = "https://my.nextdns.io/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Navigate to account settings and click the delete account button."
	},
	{
		.name = "Nextdoor",
		.query = "nextdoor",
		.url = "https://help.nextdoor.com/s/article/How-to-deactivate-or-delete-your-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Accounts can only be deleted by contacting their support team."
	},
	{
		.name = "Nexus Mods",
		.query = "nexus mods",
		.url = "https://users.nexusmods.com/account/security",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Ngan Luong",
		.query = "ngan luong",
		.url = "https://account.nganluong.vn/nganluong/user-info/lock-wallet",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Enter your current password and click \"Continue\". Notification: After requesting to close the account, NganLuong will proceed to approve:\n - If the account is being disputed, Ngan Luong will ask you to resolve the dispute before closing the account.\n - If the account still has a balance, Ngan Luong will guide you to pay off the balance before closing.\n Accounts cannot be reopened once closed, you should consider before closing."
	},
	{
		.name = "ngrok",
		.query = "ngrok",
		.url = "https://dashboard.ngrok.com/user/settings/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Enter your email and click \"Delete\". You will get a popup, where you must click \"Delete User\""
	},
	{
		.name = "NiceHash",
		.query = "nicehash",
		.url = "https://nicehash.com/my/settings/security",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Nicequest",
		.query = "nicequest",
		.url = "https://www.nicequest.com/br/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Niche",
		.query = "niche",
		.url = "https://preferences.niche.com",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Deactivating your account in account settings does not fully remove your data. To delete your data, you need to file a deletion request at the linked page."
	},
	{
		.name = "Nike",
		.query = "nike",
		.url = "https://www.nike.com/pt/member/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on your name on the right top of the screen, then click in 'Minha Conta', on field 'Meu Cadastro' click in 'Alterar dados pessoais', select 'Editar', on the bottom of the page, click on 'Excluir Conta'."
	},
	{
		.name = "Nike+",
		.query = "nike",
		.url = "https://secure-nikeplus.nike.com/plus/settings/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the account form, there is a 'Deactivate Account' button. Upon clicking, there will be a set of information that explains the process of account deactivation. All account information will be deleted."
	},
	{
		.name = "Ninox",
		.query = "ninox",
		.url = "https://ninoxdb.de/de/support/contactus",
		.email = "mailto:support@ninoxdb.de",
		.difficulty = 0x1000,
		.notes = "Contact Support via the online contact form and request your account to be deleted. Alternatively you can use the support E-Mail address."
	},
	{
		.name = "Nintendo",
		.query = "nintendo",
		.url = "https://accounts.nintendo.com/withdraw/confirm",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down and press deactivate and delete, it will be deactived for 30 days and then permanently deleted, if a Nintendo Network ID is linked to the account, it will not be deleted in this process"
	},
	{
		.name = "Nintendo Network ID",
		.query = "nintendo network id",
		.url = "https://en-americas-support.nintendo.com/app/answers/detail/a_id/1088/~/how-to-delete-a-nintendo-network-id",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Nitrous Networks",
		.query = "nitrous networks",
		.url = "https://nitrous-networks.com/support/article/44/how-to-cancel-your-server",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to login in order to request the removal."
	},
	{
		.name = "Njalla",
		.query = "njalla",
		.url = "https://njal.la/settings/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Type your password and confirm your action by clicking \"Delete Account\"."
	},
	{
		.name = "NodeChef",
		.query = "nodechef",
		.url = "https://www.nodechef.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In the dashboard, go to the \"Account\" tab, scroll down to \"Delete Account\" section, follow the instructions and then click \"Delete my account\"."
	},
	{
		.name = "NoIP",
		.query = "noip",
		.url = "https://my.noip.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the linked page, click the 'Delete Account' button. Check the 'I understand' box, then click 'Confirm'."
	},
	{
		.name = "Nomad",
		.query = "nomad",
		.url = "https://benomad.zendesk.com/hc/en-us/articles/360042473234-How-do-I-request-the-closing-of-my-Nomad-global-account-",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You have to clear the account before requesting the account deletion on the app. And after 15 or 20 days of email confirmation, the account is finally deleted."
	},
	{
		.name = "NordPass",
		.query = "nordpass",
		.url = "https://nordpass.com/privacy-policy/#choices-related-to-your-data",
		.email = "mailto:support@nordpass.com",
		.difficulty = 0x1000,
		.notes = "\"If you’d like to delete your account or data, please contact us at support@nordpass.com\""
	},
	{
		.name = "NordVPN",
		.query = "nordvpn",
		.url = "https://support.nordvpn.com/FAQ/1521982312/How-can-I-delete-my-account.htm",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login, then go to your account settings page. There is a delete account button. It makes you verify your email with a 6 digit code, then allows deletion."
	},
	{
		.name = "Norton",
		.query = "norton",
		.url = "https://my.norton.com/extspa/account/privacyoptions",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You must cancel all active subscriptions before deleting your account. They will send a code to your email address to verify your identity."
	},
	{
		.name = "Notesnook",
		.query = "notesnook",
		.url = "https://app.notesnook.com/tags#/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in to your account via the app or website, go to the settings, click on \"Profile\" and then \"Delete account\"."
	},
	{
		.name = "Notion",
		.query = "notion",
		.url = "https://www.notion.so",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to \"Settings & members\", then \"My account\", and click \"Delete my account\", type your email address and confirm."
	},
	{
		.name = "The Noun Project",
		.query = "the noun project",
		.url = "https://thenounproject.zendesk.com/hc/en-us/articles/200509678-How-can-I-deactivate-my-user-account-",
		.email = "mailto:info@thenounproject.com",
		.difficulty = 0x1000,
		.notes = "'Email us at info@thenounproject.com and we'll deactivate your account.'"
	},
	{
		.name = "Novation Music",
		.query = "novation music",
		.url = "https://www.iubenda.com/privacy-policy/29650626/legal",
		.email = "mailto:dpo@focusrite.com",
		.difficulty = 0x1000,
		.notes = "'Users have the right, under certain circumstances, to obtain the erasure of their Data from the Owner.'"
	},
	{
		.name = "NovelAI",
		.query = "novelai",
		.url = "https://novelai.net/stories",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Log into your account, and press your account icon in the top left corner of the screen. Under the User Settings column, select 'Account'. Next to 'Delete Account', click the 'Request' button. Submit your email address, then check your inbox for an account deletion confirmation. Follow the included link, then click 'Delete Account'. Your data will be deleted within 24 hours."
	},
	{
		.name = "NovoEd",
		.query = "novoed",
		.url = "http://help.novoed.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Create a new request titled \"Please delete my account\" using your e-mail address and the topic \"Course Not Listed/Not Course Related\"."
	},
	{
		.name = "NOW TV",
		.query = "now tv",
		.url = "https://privacyportal-de.onetrust.com/webform/1bca6949-81da-4e67-ac5e-a4174c2fb12d/f1b0c03e-ec61-4702-b2c1-6158fb608d1a",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You must first cancel any active passes under 'My Account' -> 'My Passes'. After this, you can contact the live chat and ask for your billing information to be removed. Your account must remain inactive for an indeterminate amount of time before the remaining data will be removed 'in accordance with our group data retention and deletion policies'."
	},
	{
		.name = "npm",
		.query = "npm",
		.url = "https://www.npmjs.com/settings/~/profile/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your account settings and press 'Delete your account'."
	},
	{
		.name = "NS (Nederlandse Spoorwegen)",
		.query = "ns nederlandse spoorwegen",
		.url = "https://www.ns.nl/en/mijnns#/account-verwijderen",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your NS (Nederlandse Spoorwegen) account and click on the linked URL. On this page you can click \"Delete NS-account\" in order to delete your account."
	},
	{
		.name = "NS1",
		.query = "ns1",
		.url = "https://ns1.com",
		.email = "mailto:support@ns1.com",
		.difficulty = 0x1000,
		.notes = "Email support and request account deletion. They will process your request and email you when it has been deleted."
	},
	{
		.name = "nTask",
		.query = "ntask",
		.url = "https://support.ntaskmanager.com/support/solutions/articles/43000545051-delete-your-ntask-account",
		.email = "mailto:support@ntaskmanager.com?subject=Account%20Deletion",
		.difficulty = 0x1000,
		.notes = "To delete your nTask account, follow this simple procedure: Using your registered email for nTask, send a request titled \"Account Deletion\" to \"support@ntaskmanager.com\" mentioning your name and email address. Once the request is received, it will take 24 hours to process your request"
	},
	{
		.name = "Nubank",
		.query = "nubank",
		.url = "https://blog.nubank.com.br/fechar-nuconta-e-facil/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Nubank accounts cannot be deleted, only canceled."
	},
	{
		.name = "Nube",
		.query = "nube",
		.url = "https://www.nube.com.br/politica-uso-privacidade",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "According to the privacy policy, accounts cannot be deleted, only deactivated (and reactivated later)."
	},
	{
		.name = "Nulled",
		.query = "nulled",
		.url = "https://www.nulled.to/topic/1418075-delete-account/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "They DO NOT delete accounts, just log out."
	},
	{
		.name = "Numista",
		.query = "numista",
		.url = "https://en.numista.com/vous/desinscription.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "The text box can be left blank. Simply click \"Definitely unsubscribe\" - this will permanently remove all your data."
	},
	{
		.name = "Nutaku",
		.query = "nutaku",
		.url = "https://www.nutaku.net/profile/delete/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the Delete Account Button"
	},
	{
		.name = "NutraCheck",
		.query = "nutracheck",
		.url = "https://www.nutracheck.co.uk/",
		.email = "mailto:customercare@nutracheck.co.uk",
		.difficulty = 0x1000,
		.notes = "Have to email customer care to ask for account to be deleted"
	},
	{
		.name = "Nvidia",
		.query = "nvidia",
		.url = "https://www.nvidia.com/en-us/privacy-center/delete-data/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Open the link, sign in, click 'Delete my data', click the confirmation link sent to your email, type in DELETE and press ok."
	},
	{
		.name = "O'Reilly",
		.query = "oreilly",
		.url = "https://www.oreilly.com/",
		.email = "mailto:privacy@oreilly.com?body=I%20want%20my%20account%20linked%20to%20this%20email%20be%20deleted.%20I%20request%20and%20authorize%20you%20to%20remove%20my%20profile%20from%20oreilly.com%20and%20delete%20all%20my%20information%20with%20your%20company%20across%20all%20platforms.",
		.difficulty = 0x1000,
		.notes = "The only way to delete an account is to send an e-mail to privacy mail as instructed on their privacy policy section 6.2 (https://www.oreilly.com/privacy.html)."
	},
	{
		.name = "Obi",
		.query = "obi",
		.url = "https://www.obi.de/customer-account/delete/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "To delete your account, simply log in to your Obi.de account, click on the provided link, and delete your account with the button on the bottom of the page."
	},
	{
		.name = "OceanHero",
		.query = "oceanhero",
		.url = "https://oceanhero.zendesk.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to [open a support ticket](https://oceanhero.zendesk.com/hc/en-us/requests/new)."
	},
	{
		.name = "Octopus",
		.query = "octopus",
		.url = "https://octopus.do/sitemap/support/help",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Hit the button with the user icon in the top-right. Navigate to the 'Settings' tab and pick 'Delete my account'."
	},
	{
		.name = "Oculus VR",
		.query = "oculus vr",
		.url = "https://store.facebook.com/help/quest/articles/accounts/account-settings-and-management/delete-oculus-account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Odeon",
		.query = "odeon",
		.url = "https://help.odeon.co.uk/hc/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You must submit a request to support. Live chat also works. The process takes 30 days to complete."
	},
	{
		.name = "The Odin Project",
		.query = "the odin project",
		.url = "https://www.theodinproject.com/privacy-policy",
		.email = "mailto:theodinprojectcontact@gmail.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Odnoklassniki",
		.query = "odnoklassniki",
		.url = "https://odnoklassniki.ru/regulations",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, scroll License Agreement down, click Delete profile, check any boxes you want, enter password and press Remove button."
	},
	{
		.name = "OfferUp",
		.query = "offerup",
		.url = "https://offerup.com/accounts/deactivate/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, click Delete Account, provide reason for deletion, confirm and complete. Very simple."
	},
	{
		.name = "Office Depot México",
		.query = "office depot mexico",
		.url = "https://www.officedepot.com.mx/",
		.email = "mailto:sclientes@officedepot.com.mx",
		.difficulty = 0x2000,
		.notes = "There is no visible way to delete an account in their website. Additionally, after contacting Support in the linked e-Mail, a response is yet to be received."
	},
	{
		.name = "OfficeDepot",
		.query = "officedepot",
		.url = "https://www.officedepot.com/ccpa/landing.do",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Note that while their privacy policy states that California residents may have their information deleted permanently, it does not specify whether they delete other accounts also. Go to the URL and fill out the form with the information pertaining to your account. Open the 'Delete My Information' section and check the box next to 'Delete my consumer data'. Submit the form and wait for an email to arrive. Click the link in the email. If after 24 hours your account is not deleted, you might have to reach out to their customer support and present their Privacy Policy to have them act."
	},
	{
		.name = "OGLoot",
		.query = "ogloot",
		.url = "https://ogloot.com/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Need to write a ticket for the app. Once the account is deleted, it is impossible to create a new account with the same login information."
	},
	{
		.name = "OK",
		.query = "ok",
		.url = "https://ok.ru/regulations",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and click the \"Delete profile\" button at the bottom of the page."
	},
	{
		.name = "OkCupid",
		.query = "okcupid",
		.url = "https://www.okcupid.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit your settings page, and select 'Delete Account'"
	},
	{
		.name = "Olo",
		.query = "olo",
		.url = "https://app.oloauth.com/Manage/delete",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click the link in the email sent to you"
	},
	{
		.name = "OLX",
		.query = "olx",
		.url = "https://www.olx.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click in the profile link, privacy and security and at the very bottom of the page, click in the Delete Account link and enter the password."
	},
	{
		.name = "Olympics",
		.query = "olympics",
		.url = "https://privacyportal-eu.onetrust.com/webform/22395098-025a-4a86-b716-763ae9c9a4cf/787ca7a8-5c45-45f9-9c4d-29ef9d88bb1d",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "In the bottom of the page, click 'Stop using Posti’s electronic services'."
	},
	{
		.name = "OM Personal English",
		.query = "om personal english",
		.url = "https://ompersonal.com.ar/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the bottom of the linked page, and under \"Delete account\", click on the red button with the same name."
	},
	{
		.name = "OmaPosti",
		.query = "omaposti",
		.url = "https://asiakastiedot.posti.fi/myaccount/details",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In the bottom of the page, click 'Stop using Posti’s electronic services'."
	},
	{
		.name = "omegaUp",
		.query = "omegaup",
		.url = "https://omegaup.com/profile/#delete-account",
		.email = "mailto:soporte@omegaup.com",
		.difficulty = 0x400,
		.notes = "Go to the linked page and click on the \"Delete\" button, then confirm in the pop-up window by clicking on \"Delete\" again. All personal information is immediately deleted. If the account does not get deleted, write an e-Mail to support asking for help. You might need to manually log out once the deletion occurs."
	},
	{
		.name = "Omnipilot",
		.query = "omnipilot",
		.url = "https://omnipilot.ai/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your account page, click on 'Delete Account' then confirm."
	},
	{
		.name = "Ondéa Grand Lac",
		.query = "ondea grand lac",
		.url = "https://www.ondeagrandlac.fr/account/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your profile page, scroll down, click on \"Supprimer mon compte\" then click on \"Oui, supprimer\"."
	},
	{
		.name = "One Month",
		.query = "one month",
		.url = "https://www.iubenda.com/privacy-policy/735465",
		.email = "mailto:support@honeybadger.io",
		.difficulty = 0x1000,
		.notes = "Email support@honeybadger.io asking to close your account."
	},
	{
		.name = "OneCompiler",
		.query = "onecompiler",
		.url = "https://onecompiler.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click your profile image in the top right corner of the page and open 'My account'. Select the 'Settings' tab, then click 'Account', and press the 'Delete My Account' button. Submit the code sent your email."
	},
	{
		.name = "OneFootball",
		.query = "onefootball",
		.url = "https://onefootball.com/payments/delete-account",
		.email = "mailto:feedback@onefootball.com",
		.difficulty = 0x1000,
		.notes = "You need to contact OneFootball support by e-mail."
	},
	{
		.name = "OnePlus",
		.query = "oneplus",
		.url = "https://www.oneplus.com/global/customer/info#",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "In your account details, there is an option to request account deletion. According to OnePlus, the request will be reviewed within 10 days, but if you sign in during this period the request will be withdrawn."
	},
	{
		.name = "OneSky",
		.query = "onesky",
		.url = "https://support.oneskyapp.com/hc/en-us/articles/115005242827-How-to-Delete-your-OneSky-Account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact Support."
	},
	{
		.name = "Onet",
		.query = "onet",
		.url = "https://konto.onet.pl/data.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You just need to click 'Delete account', then enter your account password and tick the checkbox"
	},
	{
		.name = "The Onion",
		.query = "the onion",
		.url = "https://notice.sp-prod.net/sar/index.html?message_id=539278&account_id=1195&ccpa_type=delete",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form using the email address of your account and click on the verification link that is sent."
	},
	{
		.name = "Online Judge (formerly UVa Online Judge)",
		.query = "online judge formerly uva online judge",
		.url = "https://onlinejudge.org/index.php?option=com_contact&Itemid=4",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "There is no option to delete an existing account. You may try requesting the deletion at the linked page, by filling out their contact form, but keep in mind they might never reach out."
	},
	{
		.name = "Online.net",
		.query = "onlinenet",
		.url = "https://console.online.net/fr/assistance/ticket",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "The french law forces them to keep your account because it's linked to your bills."
	},
	{
		.name = "OnlineTVRecorder.com",
		.query = "onlinetvrecordercom",
		.url = "https://www.onlinetvrecorder.com/v2/index.php?go=account&do=cancel",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can deactivate your account with the link. But the data isn't deleted. Even if you contact the support they don't delete your data."
	},
	{
		.name = "OnlyFans",
		.query = "onlyfans",
		.url = "https://onlyfans.com/my/settings/advanced",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On settings tab, select the option 'Delete Account' and enter the captcha. After that, you'll receive an e-mail with the confirmation."
	},
	{
		.name = "Onshape",
		.query = "onshape",
		.url = "https://cad.onshape.com/user/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your account page, click the \"Delete my Onshape account\" link, enter your password and confirm your choice. Existing links to and copies of your documents will still remain active."
	},
	{
		.name = "Open Collective",
		.query = "open collective",
		.url = "https://opencollective.com/dashboard",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Navigate from the Dashboard to 'Settings' -> 'Advanced' -> 'Delete this account'. "
	},
	{
		.name = "OpenAI / ChatGPT",
		.query = "openai chatgpt",
		.url = "https://chatgpt.com/#settings/Account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Follow the link and click \"Delete\"."
	},
	{
		.name = "OpenCores",
		.query = "opencores",
		.url = "https://opencores.org",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "They recommend e-mailing to request for deletion, but the e-mail is never answered."
	},
	{
		.name = "Opendesktop",
		.query = "opendesktop",
		.url = "https://www.opendesktop.org",
		.email = "mailto:contact@opendesktop.org?subject=Account%20Deletion%20Request",
		.difficulty = 0x1000,
		.notes = "E-mail their support to get the account deleted."
	},
	{
		.name = "OpenDNS",
		.query = "opendns",
		.url = "https://dashboard.opendns.com/myaccount/deleteaccount",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You can delete the account by visiting the delete account page."
	},
	{
		.name = "OpenFoodFacts",
		.query = "openfoodfacts",
		.url = "https://blog.openfoodfacts.org/en/account-deletion",
		.email = "mailto:contact@openfoodfacts.org",
		.difficulty = 0x2000,
		.notes = "In order to delete your OpenFoodFacts account, you need to fill out the form and send an email. Though there is a form to delete your OpenFoodFacts account, it seems no one is tending to it."
	},
	{
		.name = "OpenGuessr",
		.query = "openguessr",
		.url = "https://openguessr.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in, click on your username at the top of the page, select 'Delete Account' under 'Account Management'."
	},
	{
		.name = "OpenInvest",
		.query = "openinvest",
		.url = "https://www.openinvest.com/terms-of-service",
		.email = "mailto:support@openinvest.com",
		.difficulty = 0x1000,
		.notes = "Email them telling them you want to delete your account. They will retain some information as necessary to \"comply with our legal obligations, resolve disputes and enforce our agreements\" (from their TOS and Privacy Policy), but most data will be deleted within 30 days."
	},
	{
		.name = "OpenPhone",
		.query = "openphone",
		.url = "https://support.openphone.com/hc/en-us/requests/new",
		.email = "mailto:help@openphone.co?subject=Account%20deletion%20request&body=I%20request%20a%20deletion%20of%20my%20OpenPhone%20account%20associated%20with%20this%20email%20address.",
		.difficulty = 0x1000,
		.notes = "You need to contact OpenPhone support."
	},
	{
		.name = "OpenSea",
		.query = "opensea",
		.url = "https://support.opensea.io/hc/requests/new",
		.email = NULL,
		.difficulty = 0x4000,
		.notes = "Deleting your account is only possible if an applicable government policy gives you the right to delete your account."
	},
	{
		.name = "OpenStreetMap",
		.query = "openstreetmap",
		.url = "https://www.openstreetmap.org/account/deletion",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log In, go to the linked page and confirm the deletion"
	},
	{
		.name = "OpenSubtitles.com",
		.query = "opensubtitlescom",
		.url = "https://www.opensubtitles.com/en/users/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'Delete Account' and enter your password."
	},
	{
		.name = "OpenTable",
		.query = "opentable",
		.url = "https://help.opentable.com",
		.email = "mailto:privacy@opentable.com",
		.difficulty = 0x1000,
		.notes = "If you are using the iOS app, you can delete your account via Account Settings -> Your details -> Delete my account. Otherwise, you will need to contact OpenTable on their help page or via email"
	},
	{
		.name = "OpenWeather",
		.query = "openweather",
		.url = "https://home.openweathermap.org/privacy/notifications#del_poll_modal",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Main website may still show you logged in after deletion (compared to the account management site). In that case, cookies need to cleared."
	},
	{
		.name = "Opera",
		.query = "opera",
		.url = "https://auth.opera.com/account/delete-profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the linked page select 'Delete my account'."
	},
	{
		.name = "Optum",
		.query = "optum",
		.url = "https://docasap.com/user/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the linked page select \"Deactivate Account\" and provide the code sent to the account's email address."
	},
	{
		.name = "Oracle",
		.query = "oracle",
		.url = "https://www.oracle.com/legal/data-privacy-inquiry-form.html",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to send a privacy inquiry to get your data deleted. (It can take a few days)"
	},
	{
		.name = "ORCID",
		.query = "orcid",
		.url = "https://orcid.org/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and click \"Deactivate you ORCID account\". Deactivation deletes identifiable information associated with the ID and cryptographically hashes your email address to ensure reactivation of the ID only being possible from your email."
	},
	{
		.name = "OSBuddy",
		.query = "osbuddy",
		.url = "https://rsbuddy.com/osbuddy/docs/privacy",
		.email = "mailto:support@rsbuddy.com",
		.difficulty = 0x1000,
		.notes = "You must contact support via your account's registered email address to request deletion."
	},
	{
		.name = "Osu!",
		.query = "osu",
		.url = "https://osu.ppy.sh/wiki/en/Help_centre/Account#account-deletion",
		.email = "mailto:privacy@ppy.sh",
		.difficulty = 0x1000,
		.notes = "You can only request account deletion by sending an email."
	},
	{
		.name = "otter.ai",
		.query = "otterai",
		.url = "https://otter.ai/setting",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Account deletion can be achieved from within the account settings. Simply go to 'Account settings' and press 'Delete account'. Then confirm by entering your password."
	},
	{
		.name = "Otto.de",
		.query = "ottode",
		.url = "https://www.otto.de/myaccount/mydata",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "On your profile page, scroll down to 'Konto verwalten' and select 'Meine persönlichen Daten und Kundenkonto löschen.' Once you confirm the deletion in the dialog box, your request will undergo a manual review, which may take several days. After the review process is complete, your account will be successfully deleted."
	},
	{
		.name = "Out of Milk",
		.query = "out of milk",
		.url = "https://outofmilk.com/RemoveAccount.aspx",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Outdooractive",
		.query = "outdooractive",
		.url = "https://www.outdooractive.com/en/k/how-do-i-delete-my-community-account-/50323147/#:~:text=Go%20to%20your%20page%20by,then%20select%20%22Delete%20Profile%22.",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Follow the instructions provided to navigate to your profile and find the delete account button."
	},
	{
		.name = "Outlier",
		.query = "outlier",
		.url = "https://outlier.ai/legal/privacy-policy",
		.email = "mailto:privacy@outlier.ai",
		.difficulty = 0x2000,
		.notes = NULL
	},
	{
		.name = "OV-chipkaart",
		.query = "ovchipkaart",
		.url = "https://www.ov-chipkaart.nl/en/privacy",
		.email = "mailto:privacy@ov-chipkaart.nl",
		.difficulty = 0x1000,
		.notes = "You have the right to erasure ('right to be forgotten') with ov-chipkaart.nl, only you have to send an email and exercise your right to erasure to do so. Send an email to the email address provided requesting to delete your account and personal information."
	},
	{
		.name = "Overcast.fm",
		.query = "overcastfm",
		.url = "https://overcast.fm/account",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = NULL
	},
	{
		.name = "Overleaf",
		.query = "overleaf",
		.url = "https://www.overleaf.com/user/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select 'Delete your account' at the bottom of the account settings page."
	},
	{
		.name = "Overstock",
		.query = "overstock",
		.url = "https://help.overstock.com/help/s/article/Customer-Care-Contact-Information",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You must contact support directly and ask them to invalidate your account.  However, your transaction data may not be deleted from their records."
	},
	{
		.name = "Overwolf",
		.query = "overwolf",
		.url = "https://support.overwolf.com/en/support/solutions/articles/9000178281-deleting-your-overwolf-account-and-related-data",
		.email = "mailto:support@overwolf.com",
		.difficulty = 0x400,
		.notes = "Follow the instructions on the linked page to delete your account within the Overwolf app. Alternatively, you may email support and request account deletion."
	},
	{
		.name = "OVHcloud UK",
		.query = "ovhcloud uk",
		.url = "https://www.ovh.co.uk/personal-data-protection/exercise-your-rights?lsdDoc=exercising-your-rights",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "This is for UK account holders only. Ensure that you have terminated all products and services before filling the form and deleting your account. You need to provide proof of identity."
	},
	{
		.name = "Oxford Dictionaries API",
		.query = "oxford dictionaries api",
		.url = "https://developer.oxforddictionaries.com/contact-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact the customer support using the contact form and request the deletion of your account."
	},
	{
		.name = "Oùra - Auvergne-Rhône-Alpes",
		.query = "oura auvergnerhonealpes",
		.url = "https://oura.com/contact-et-reclamation",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to send a request via the contact page with your account information. You will receive an email a few days after asking for your birth date to prove it's your account. Give them and they will delete your account a few days later."
	},
	{
		.name = "Packagist",
		.query = "packagist",
		.url = "https://packagist.org/profile/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and click 'Delete Account Permanently'."
	},
	{
		.name = "Packetshare",
		.query = "packetshare",
		.url = "https://www.packetshare.io/dashboard/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the dashboard, go to your account settings and click 'Delete account' and 'Yes, delete'."
	},
	{
		.name = "Packt",
		.query = "packt",
		.url = "https://www.packtpub.com/",
		.email = "mailto:subscription.support@packtpub.com",
		.difficulty = 0x1000,
		.notes = "Send an email to them requesting deletion. If you have a subscription plan or free trial be sure to cancel it."
	},
	{
		.name = "PAGBET",
		.query = "pagbet",
		.url = "https://assets.bet6.com.br/sistemans/skins/pagbet/doc/ba98aa02a1.pdf",
		.email = "mailto:contato@pagbet.com",
		.difficulty = 0x1000,
		.notes = "According to privacy policy (item 8), you have to send an e-mail to them requesting the account removal."
	},
	{
		.name = "Panda-Plush",
		.query = "pandaplush",
		.url = "https://panda-plush.com/account/register",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Pandora",
		.query = "pandora",
		.url = "https://www.pandora.com/settings/info",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down to delete my account and click it, click delete account, type in your password, then hit submit. If you have Pandora Plus or Premium, cancel your subscription, wait for it to expire, then delete."
	},
	{
		.name = "Pantheon",
		.query = "pantheon",
		.url = "https://dashboard.pantheon.io/#account/delete/Delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In order to delete an account, you first have to delete all active Sites, or transfer the ownership."
	},
	{
		.name = "Papara",
		.query = "papara",
		.url = "https://www.papara.com/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to call the customer support in order to get your account deleted."
	},
	{
		.name = "PaperKarma",
		.query = "paperkarma",
		.url = "https://www.paperkarma.com/faq",
		.email = "mailto:human@paperkarma.com",
		.difficulty = 0x1000,
		.notes = "Send an email to human@paperkarma.com requesting deletion. If you have a subscription plan through the App Store or Google Play, be sure to cancel your subscription in the proper store."
	},
	{
		.name = "Paperless Post",
		.query = "paperless post",
		.url = "https://paperlesspost.zendesk.com/hc/en-us/articles/207330096-Closing-and-Deletion-of-Your-Paperless-Post-Account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "PaperNodes",
		.query = "papernodes",
		.url = "https://papernodes.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Hover over 'More Pages' then click on 'login' ->'account settings' and scroll down to see 'Delete my account' and press it. After confirming your password, all the data asociated to your account will be deleted in 48 hours."
	},
	{
		.name = "Paperspace",
		.query = "paperspace",
		.url = "https://console.paperspace.com/account/settings/profile",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click on the \"DEACTIVATE\" button, under \"Deactivate Account\" in the linked page. A pop-up dialog appears, asking for a reason for deactivation. Select a reason from the listbox, and optionally leave a comment in the textbox below it. Finally, click on \"DEACTIVATE\" in the pop-up dialog."
	},
	{
		.name = "Paradox Plaza",
		.query = "paradox plaza",
		.url = "https://support.paradoxplaza.com/hc/en-us/requests/new?ticket_form_id=360000086974",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to select \"GDPR - Request for Account Deletion\" in the form and fill in your details."
	},
	{
		.name = "Parallels",
		.query = "parallels",
		.url = "https://my.parallels.com/profile/personal/general",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Need to login, click the delete button, confirm in the email, and confirm on the site again."
	},
	{
		.name = "Paramount Plus",
		.query = "paramount plus",
		.url = "https://privacyportal.onetrust.com/webform/869be997-c257-4071-b658-a5427317b5c6/bda9b2b4-9be6-4f30-9d55-94b308f9af4d",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You may also use the [contact us](https://help.paramountplus.com/s/article/PD-How-do-I-delete-my-Paramount-account) link, but it doesn't work on every country."
	},
	{
		.name = "Parcello",
		.query = "parcello",
		.url = "https://www.parcello.org/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to settings, click 'Delete account' underneath 'Miscellaneous'. Confirm this process in the modal. Works within the app as well."
	},
	{
		.name = "Parkmobile",
		.query = "parkmobile",
		.url = "https://parkmobile.zendesk.com/hc/en-us/articles/203299300-How-do-I-cancel-my-account-",
		.email = "mailto:helpdesk@parkmobileglobal.com",
		.difficulty = 0x1000,
		.notes = "To cancel your account, send an e-mail message request to the Parkmobile Help Desk at helpdesk@parkmobileglobal.com and include your name, mobile number, license plate number, and/or the last 4 digits of the card we have on file for you. After the Help Desk cancels your account, you will receive a confirmation e-mail message."
	},
	{
		.name = "Parsec",
		.query = "parsec",
		.url = "https://parsec.app/settings/account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the linked page select 'Delete Account' and confirm your username."
	},
	{
		.name = "pass Culture",
		.query = "pass culture",
		.url = "https://passculture.app/profil/suppression",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your profile, then \"Informations personelles\", and click on \"Supprimer mon compte\"."
	},
	{
		.name = "PassDock",
		.query = "passdock",
		.url = "https://api.passdock.net/users/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select 'Delete account' at the bottom of your account info page."
	},
	{
		.name = "Passpack",
		.query = "passpack",
		.url = "https://support.passpack.com/hc/en-us/articles/200749084-How-to-Delete-Your-Passpack-Account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Sign into your Passpack account. Click on your ’Account’ tab then click the ’delete your account’ link in the lower left hand corner of the page. You will then be asked to insert your Packing Key to confirm that you are sure. Click 'Delete' to permanently delete your account."
	},
	{
		.name = "Pastebin",
		.query = "pastebin",
		.url = "https://pastebin.com/user/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Password is required for deletion. Pastes will be removed and the username cannot be used again. No Recovery after deletion."
	},
	{
		.name = "Patreon",
		.query = "patreon",
		.url = "https://privacy.patreon.com/policies?modal=take-control",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in, and open the link. Click 'Erase', and proceed to press buttons. Deletion is delayed by 14 days. Data about the deletion is shared with Transcend Inc."
	},
	{
		.name = "Patrick Krempf Reminder",
		.query = "patrick krempf reminder",
		.url = "https://reminder.patrickkempf.de/manage.php?do=delaccount",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Payback",
		.query = "payback",
		.url = "https://www.payback.de/info/mein-payback/kontakt",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "According to their help page, you need to contact their Service-Center"
	},
	{
		.name = "PayByPhone",
		.query = "paybyphone",
		.url = "https://support.paybyphone.com/hc/en-001/articles/13258687569553-How-do-I-delete-my-Account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You can only delete your PayByPhone account from the mobile app. To delete your account open the app and go to \"Options\" -> \"Account Settings\" -> \"Delete Account\"."
	},
	{
		.name = "Payoneer",
		.query = "payoneer",
		.url = "https://payoneer.custhelp.com/app/ask/l_id/1/c/3753",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "According to their Support Center, you need to contact them via email, live chat, or phone."
	},
	{
		.name = "PayPal",
		.query = "paypal",
		.url = "https://www.paypal.com/myaccount/privacy/data/deletion",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You must resolve any account limitations and outstanding payments or balance before closing."
	},
	{
		.name = "PaySafeCard",
		.query = "paysafecard",
		.url = "https://login.paysafecard.com/customer-auth/?client_id=mypinsPR&theme=mypins&locale=en_US&redirect_uri=https%3A%2F%2Fmy.paysafecard.com%2Fmypins-psc%2FtokenExchange.xhtml",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You can only delete an account on the computer. Go to account settings, then click \"Delete account\"."
	},
	{
		.name = "PaySera",
		.query = "paysera",
		.url = "https://bank.paysera.com/l.php?tmpl_into=middle&tmpl_name=m_helpdesk_ask_your_question",
		.email = "mailto:support@paysera.com",
		.difficulty = 0x1000,
		.notes = "Quote from the support staff: If you want to delete your Paysera account completely, please write us an email (support@paysera.com) with a request and indicate why you want to delete your account. This email has to be sent from the email address that you use to log in to your Paysera account. Please be informed that if you delete your account, you will not be able to create a new account in the future. Paysera account is free of charge and we recommend not to delete it, but close the account, and you will be able to activate it in the future yourself by logging in to your Paysera account."
	},
	{
		.name = "PCBWay",
		.query = "pcbway",
		.url = "https://www.pcbway.com/helpcenter/accountsettings/Account_Settings.html",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to contact support through built-in chat or you can comment on the linked thread"
	},
	{
		.name = "PCem Forum",
		.query = "pcem forum",
		.url = "https://pcem-emulator.co.uk/phpBB3/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "There is no option to delete an account from the Control Panel. You might try PMing either the administrator (SarahWalker) or the global moderator (MichaelJManley), but response is not guaranteed."
	},
	{
		.name = "pCloud",
		.query = "pcloud",
		.url = "https://my.pcloud.com/#page=settings&settings=tab-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Go to Settings -> Account -> Delete Your Account and confirm the e-mail. The data will be deleted within three months."
	},
	{
		.name = "PCPartPicker",
		.query = "pcpartpicker",
		.url = "https://pcpartpicker.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the delete account on your account preferences."
	},
	{
		.name = "PCS Mastercard",
		.query = "pcs mastercard",
		.url = "https://www.mypcs.com/besoin-daide/supprimer-mon-compte/#faq-comment-supprimer-mon-compte-?",
		.email = "mailto:dpo@creacard.net?body=I%20want%20to%20delete%20my%20PCS%20account.",
		.difficulty = 0x1000,
		.notes = "Send an email to delete your account."
	},
	{
		.name = "PDF Editify",
		.query = "pdf editify",
		.url = "https://pdfeditify.com/contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the contact form and request the deletion of your account."
	},
	{
		.name = "pdfFiller",
		.query = "pdffiller",
		.url = "https://www.pdffiller.com/en/login/signin?ref=%2Fen%2Faccount%2Fsettings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in to your account, then go to 'Settings' tab and click 'Delete Account'."
	},
	{
		.name = "Peacock",
		.query = "peacock",
		.url = "https://privacyportal.onetrust.com/webform/17e5cb00-ad90-47f5-a58d-77597d9d2c16/2aa79e13-e7d2-4d45-b928-7df9a72bec32",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "If you live in the U.S., fill out the form, select Peacock under applicable brands, and your account will be automatically deleted after some time. You may still receive a human response later however. Users outside of the U.S. should send an email to the privacy contact listed at the top of the form."
	},
	{
		.name = "Peak",
		.query = "peak",
		.url = "https://peak.net",
		.email = "mailto:support@peak.net",
		.difficulty = 0x1000,
		.notes = "You must send an e-mail to support@peak.net requesting deletion. You will then receive a response from support asking for feedback and to confirm the deletion. The next e-mail you receive from support will notify you that your account has been deleted."
	},
	{
		.name = "Pearson",
		.query = "pearson",
		.url = "https://www.pearson.com/privacy-center/privacy-notices/full-privacy-notice.html#12",
		.email = "mailto:dataprivacy@pearson.com",
		.difficulty = 0x4000,
		.notes = "For general questions and requests you can email. Information for how to make a CCPA request is located [here](https://www.pearson.com/en-us/legal-information/california-consumer-rights.html)"
	},
	{
		.name = "Peloton",
		.query = "peloton",
		.url = "https://privacyportal.onetrust.com/webform/18f92a28-d2ae-4a6a-8f99-85b4455e22c0/cfbaf35a-5e06-4010-a6b6-1ad61ba414f1",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "To permanently delete your Peloton Account, please fill out the Privacy Request Form. Once the form is completed, the Peloton Privacy Team will begin processing your request."
	},
	{
		.name = "Pennsylvania Turnpike (Toll By Plate)",
		.query = "pennsylvania turnpike toll by plate",
		.url = "https://www.paturnpike.com/help-center#contact-form",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "NOT FOR EZPASS ACCOUNTS. Fill out the form using the same information that is associated to your account. Alternatively, the account can be closed by calling 877-736-6727."
	},
	{
		.name = "PenPal World",
		.query = "penpal world",
		.url = "https://penpalworld.com/deleteAccount.asp",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "While there is an option to 'delete' your account, a big chunk of the data is kept. Profile pictures, usernames, and profile texts will be removed, but comments, messages, and friendships are kept. Also, it says that they still store your email and password 'if later you decide to come back you don't have to go through the sign-up process again'. When you try to reactivate a deleted account, it tells you to verify by inputting all of your old info, which means that it is still stored."
	},
	{
		.name = "Penpot",
		.query = "penpot",
		.url = "https://design.penpot.app/#/settings/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your profile settings and click on \"Want to remove your account?\" "
	},
	{
		.name = "Penzu",
		.query = "penzu",
		.url = "https://penzu.com/app/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'Delete Penzu Account'. Confirm the deletion through the link sent to your email address."
	},
	{
		.name = "peopleperhour",
		.query = "peopleperhour",
		.url = "https://www.peopleperhour.com/settings/general",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Profile -> settings -> account -> edit -> select a reason -> deactivate"
	},
	{
		.name = "The Perfect Shave",
		.query = "the perfect shave",
		.url = "https://www.perfect-shave.de/einstellungen",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'Konto löschen' and then on 'Mein Konto jetzt unwiederruflich löschen'"
	},
	{
		.name = "Perplexity",
		.query = "perplexity",
		.url = "https://www.perplexity.ai/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = " In the \"System\" field, select \"Delete Account\" and confirm the action. All data will be permanently deleted 30 days after the account is deleted."
	},
	{
		.name = "Personal Capital",
		.query = "personal capital",
		.url = "https://home.personalcapital.com/page/login/app#/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'DELETE USER ACCOUNT' at the bottom of the settings page."
	},
	{
		.name = "Personello Germany",
		.query = "personello germany",
		.url = "https://de.personello.com/service",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "It is necessary to contact the support, for example through 'Mein Konto' -> 'Meinung abgeben'."
	},
	{
		.name = "Pexels",
		.query = "pexels",
		.url = "https://help.pexels.com/hc/en-us/articles/360042822033-How-can-I-delete-my-account-",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Follow the instructions on the help article to delete your account."
	},
	{
		.name = "Phare",
		.query = "phare",
		.url = "https://app.phare.io/organization/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In the danger zone section at the bottom of the page, confirm your choice and click 'Delete my organization'."
	},
	{
		.name = "Philips Hue",
		.query = "philips hue",
		.url = "https://account.meethue.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'Delete Account' on your account page."
	},
	{
		.name = "Phind",
		.query = "phind",
		.url = "https://www.phind.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on your email at the top of the page, then in the \"Danger zone\" field select delete account"
	},
	{
		.name = "PhishTank",
		.query = "phishtank",
		.url = "https://privacyrequest.cisco.com",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Select \"Phishtank\" under \"Account(s) or Service(s) of interest\" and specify in request details that you wish to delete your account."
	},
	{
		.name = "Pholder",
		.query = "pholder",
		.url = "https://pholder.com/policies/#Terms",
		.email = "mailto:abuse@pholder.com",
		.difficulty = 0x2000,
		.notes = "It is not possible to delete your account. The email address from the TOS (abuse@pholder.com) does not respond to any emails."
	},
	{
		.name = "Photobucket",
		.query = "photobucket",
		.url = "https://support.photobucket.com/hc/en-us/articles/360039780614",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "First cancel any subscriptions. Then after logging in, click [here](https://my.photobucket.com/photobucket-account-deletion-step1) and click through the multiple confirmations to start the account deletion process. Deletion can take up to 30 days, but there isn't any type of notification confirming a successful deletion. Second method is to open a support ticket and provide account username, email address, full name, the postal code and country from where you registered for verification. This method allows immediate deletion upon request."
	},
	{
		.name = "Photomath",
		.query = "photomath",
		.url = "https://photomath.com/en/help/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Open the menu and sign in -> 'Security and Privacy' -> 'Edit profile' -> 'Delete profile'"
	},
	{
		.name = "phpBB Forum",
		.query = "phpbb forum",
		.url = "https://www.phpbb.com/community/viewtopic.php?t=2425241#:~:text=we%20generally%20do%20not%20delete%20accounts",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Accounts are not generally deleted by moderators. Maybe if you try to reach one of the members of the \"Moderator\" team, you might convince someone of deleting your account, but this is discretional."
	},
	{
		.name = "phplist",
		.query = "phplist",
		.url = "https://www.phplist.com/privacy",
		.email = "mailto:info@phplist.com",
		.difficulty = 0x1000,
		.notes = "Write an email requesting all data to be deleted."
	},
	{
		.name = "Piazza",
		.query = "piazza",
		.url = "https://support.piazza.com/support/solutions/articles/48000616709-student-delete-your-account",
		.email = "mailto:help@piazza.com",
		.difficulty = 0x1000,
		.notes = "E-mail them and ask to close your account. They will reply asking you to confirm, after which point you can acknowledge and it will be removed."
	},
	{
		.name = "picoCTF",
		.query = "picoctf",
		.url = "https://play.picoctf.org/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click \"Delete Account\", then type your password to confirm. Your PII will be deleted, and \"platform-specific data will be anonymized\"."
	},
	{
		.name = "PicPay",
		.query = "picpay",
		.url = "https://meajuda.picpay.com/hc/pt-br/articles/4407302956819-Como-encerro-minha-conta-do-PicPay-",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "PicPay accounts can be reactivated within 25 days of the request."
	},
	{
		.name = "Pillpack",
		.query = "pillpack",
		.url = "https://help.pillpack.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Will need to contact customer support and confirm your name and information before they'll delete."
	},
	{
		.name = "Pinboard",
		.query = "pinboard",
		.url = "https://pinboard.in/faq/#close_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit your account page and click the \"close account\" link under your username. Your account will be suspended for 30 days, and then permanently deleted."
	},
	{
		.name = "Pingdom",
		.query = "pingdom",
		.url = "https://my.pingdom.com/account/cancel/confirm",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Pinterest",
		.query = "pinterest",
		.url = "https://pinterest.com/settings/account-settings/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "On the Account Settings, click 'Delete Account', state reason and click 'Next', then 'Send email'. You need to check the e-mail and confirm the deletion."
	},
	{
		.name = "Pionex",
		.query = "pionex",
		.url = "https://www.pionex.com/en/my-account/security",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Inside your account (at the top), within the user space go to the 'Security' option, scroll to the bottom where you will find the 'Account Management' option. Under it, there is a 'Delete Account' button."
	},
	{
		.name = "Pivot Interactives",
		.query = "pivot interactives",
		.url = "https://www.pivotinteractives.com",
		.email = "mailto:info@pivotinteractives.com?subject=Privacy%20Rights%20Request",
		.difficulty = 0x1000,
		.notes = "You must send an email to remove your account. This service \"may still retain certain information associated with your account\" for any of the reasons outlined in section 7 of their [privacy policy](https://www.discoveryeducation.com/privacy-policy/)."
	},
	{
		.name = "PivotalTracker",
		.query = "pivotaltracker",
		.url = "https://www.pivotaltracker.com",
		.email = "mailto:tracker@pivotal.io",
		.difficulty = 0x800,
		.notes = "You can delete your account using the website, but it is only fully deleted after e-mailing"
	},
	{
		.name = "Pix",
		.query = "pix",
		.url = "https://support.pix.org/en/support/tickets/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You can request that your account be deleted by making a request through their contact form"
	},
	{
		.name = "Pixabay",
		.query = "pixabay",
		.url = "https://pixabay.com/de/accounts/settings/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In your account setting choose 'Delete account'."
	},
	{
		.name = "Pixel Starships",
		.query = "pixel starships",
		.url = "https://www.pixelstarships.com/privacypolicy",
		.email = "mailto:mail@savysoda.com?subject=ACCESS%20AND%20CORRECT%20INFORMATION&body=Please%20delete%20my%20Pixel%20Starships%20account%20registered%20under%20this%20email%20address.",
		.difficulty = 0x1000,
		.notes = "According to Privacy Policy, \"To request the correction or deletion of any personally identifiable information that you have provided to us, send an email to mail@savysoda.com with \"ACCESS AND CORRECT INFORMATION\" in the subject line.\""
	},
	{
		.name = "Pixilart",
		.query = "pixilart",
		.url = "https://www.pixilart.com/settings/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Fairly simple process, just follow the link."
	},
	{
		.name = "pixiv",
		.query = "pixiv",
		.url = "https://www.pixiv.net/leave_pixiv.php",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "It takes 2 weeks to delete an account. You will be unable to re-use the same e-mail during that period. They won't delete \"pixiv ID\". If you have other accounts created from your Pixiv account, you have to delete them before you can delete your Pixiv account"
	},
	{
		.name = "Pixlr",
		.query = "pixlr",
		.url = "https://pixlr.com/myaccount/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'Delete account' under your profile settings, state why you want it to be delete and enter your password."
	},
	{
		.name = "Pixum",
		.query = "pixum",
		.url = "https://int.pixum.com/service/delete-account",
		.email = "mailto:service@pixum.com",
		.difficulty = 0x1000,
		.notes = "Contact support via email and request your account to be deleted."
	},
	{
		.name = "Pizza Hut",
		.query = "pizza hut",
		.url = "https://pizzahut.com",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Download the Pizza Hut app. Sign-in with account information, click on the 'account' tab and tap on profile. On the close my account section, tap on the close my account. Fill in your information (name, address, phone, email,) and click submit."
	},
	{
		.name = "Placeit",
		.query = "placeit",
		.url = "https://placeit.net/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down to the bottom of the linked page and click on the 'Delete my account' button."
	},
	{
		.name = "PlanetMinecraft",
		.query = "planetminecraft",
		.url = "https://www.planetminecraft.com/account/settings/delete/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Sends a verification email with a confirmation button before submitting the deletion request."
	},
	{
		.name = "PlantSnap",
		.query = "plantsnap",
		.url = "https://www.plantsnap.com/support-center/get-in-touch/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To delete your account, open the app on your mobile device and click the \"More\" option button. Then click your profile name, from there you will be able to delete your account. If you require additional help, use the contact form provided on their website."
	},
	{
		.name = "Player FM",
		.query = "player fm",
		.url = "https://player.fm/will-miss-you",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In upper right, click the settings button and select \"Help/FAQ\". Select option \"How do I delete my account and leave Player FM?\" - link will be below. Type \"delete\" in the box and click the button to finalize."
	},
	{
		.name = "Playit.gg",
		.query = "playitgg",
		.url = "https://playit.gg/account/settings/account/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "PlayPosit",
		.query = "playposit",
		.url = "https://go.playposit.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click your username in the upper right and select Profile, then Delete Account"
	},
	{
		.name = "PlayStation Network",
		.query = "playstation network",
		.url = "https://www.playstation.com/en-us/support/account/close-account-for-psn/",
		.email = "mailto:siee.dpo@sony.com",
		.difficulty = 0x1000,
		.notes = "You have to contact customer support or send them an email, and supply the email address associated with the account, along with the online ID, and one of the following information:\nthe first four and last four digits of the bank card associated with the account,\nor the details of a recent transaction made using the account,\nor the serial number of the original console associated with the account.\nAlternatively, if you don't have this information, you can supply a proof of identity (identity document) and a proof of address. If your account is linked to another account of the Sony group, you will have to delete it first. After closure, your online ID will not be reusable."
	},
	{
		.name = "Plenty of Fish",
		.query = "plenty of fish",
		.url = "https://www.pof.com/deleteaccount.aspx",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Fill out the deletion form"
	},
	{
		.name = "Plex.tv",
		.query = "plextv",
		.url = "https://plex.tv/users/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Under 'Danger Zone', click 'Delete your account'."
	},
	{
		.name = "Plexus",
		.query = "plexus",
		.url = "https://plexus.techlore.tech/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In the app, go into the menu, then under \"My account\", click on \"Delete account\"."
	},
	{
		.name = "Plugin Boutique",
		.query = "plugin boutique",
		.url = "https://help.pluginboutique.com/hc/en-us/requests/new?ticket_form_id=8801812364052",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the ticket form to request deletion, using the same email of the account."
	},
	{
		.name = "Pluralsight",
		.query = "pluralsight",
		.url = "https://help.pluralsight.com/help/how-do-i-delete-my-account",
		.email = "mailto:support@pluralsight.com",
		.difficulty = 0x400,
		.notes = "Follow the instructions provided in the article. If you prefer, you can also request deletion of your account via email. NOTE: If you have outstanding payments or disputes or if you aren't comfortable with sharing personal data to confirm deletion, it might be harder"
	},
	{
		.name = "Plus500",
		.query = "plus500",
		.url = "https://www.plus500.com/en-CY/MyInfo/PersonalDataRequests/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You have to fill the 'Personal Data Requests' form to delete your account: provide your e-mail address, and under 'Request Type' select 'Right of erasure'."
	},
	{
		.name = "Plushiies",
		.query = "plushiies",
		.url = "https://plushiies.com/account/register",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Pocket",
		.query = "pocket",
		.url = "https://getpocket.com/account_deletion/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Pocket Casts",
		.query = "pocket casts",
		.url = "https://support.pocketcasts.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your phone: Open the Pocket Casts app, click on the \"Profile\" tab and then on your account, finally scroll down and click on \"Delete Account\" at the bottom of the screen. On your browser: Log in to the Pocket Casts web player, click on the profile icon in the top right-hand corner, click on your email address then scroll down and click on the \"Delete Account\" link. A confirmation pop-up will appear asking if you're sure you want to delete your account. Click \"Delete\" to confirm"
	},
	{
		.name = "Pocketbook",
		.query = "pocketbook",
		.url = "https://getpocketbook.com/settings",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click on 'Remove Pocketbook Account' under account settings. Select an option from dropdown and type random feedback. Click Submit button. Type CONFIRM into text box and proceed to delete account."
	},
	{
		.name = "Pockyt Shop",
		.query = "pockyt shop",
		.url = "https://shop.pockyt.io/",
		.email = "mailto:privacy@pockyt.io",
		.difficulty = 0x2000,
		.notes = "There is no delete button nor do they ever reply by e-mail."
	},
	{
		.name = "Pocoyo Club",
		.query = "pocoyo club",
		.url = "https://www.pocoyo.com/en/club/account-cancellation",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Podchaser",
		.query = "podchaser",
		.url = "https://podchaser.com",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Click on the avatar top-right and click on \"Account Settings\". Click on \"Delete my account\". Fill in the Google form and check your email for a confirmation email."
	},
	{
		.name = "Podio",
		.query = "podio",
		.url = "https://podio.com/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in to your account, press the delete button and type the phrase asked."
	},
	{
		.name = "Points.com",
		.query = "pointscom",
		.url = "https://www.points.com/pdccontent/salesforce/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Must contact support through contact form or online chat."
	},
	{
		.name = "PokeMMO",
		.query = "pokemmo",
		.url = "https://support.pokemmo.com/knowledgebase/article/account-deletion",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "On their Support page, log in and create a new ticket with Ticket Type 'Support Requests' and Sub Type 'Account Deletion' to request account deletion."
	},
	{
		.name = "Pokémon GO",
		.query = "pokemon go",
		.url = "https://niantic.helpshift.com/hc/en/6-pokemon-go/faq/3518-how-do-i-delete-my-pokemon-go-account-1656453288/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Sign in to the app with the game account you want to delete, then navigate to the Pokémon GO app 'Settings' -> 'Advanced Settings' -> 'Delete Account' and confirm."
	},
	{
		.name = "Pokémon Trainer Club",
		.query = "pokemon trainer club",
		.url = "https://support.pokemon.com/hc/en-us/articles/360000965826-How-do-I-delete-my-Pok%C3%A9mon-Trainer-Club-account-",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to https://club.pokemon.com/us/pokemon-trainer-club/edit-profile/ scroll down to the bottom and click 'Request Data Deletion', enter the required fields and you'll then get a confirmation email."
	},
	{
		.name = "Polar",
		.query = "polar",
		.url = "https://account.polar.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select the account deletion option from the site."
	},
	{
		.name = "PolyBuzz",
		.query = "polybuzz",
		.url = "https://www.polybuzz.ai",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You must use the mobile app to delete the account. Furthermore, you must not have any active subscriptions, and your total coin balance must be less than 100, or the account won't be deleted. To proceed, log in in mobile, then tap the user icon at the bottom right. Once into the settings, tap the tiny nut icon at the top right. When the settings appear, tap \"Account\", then mark the confirmation checkbox and tap \"Delete\"."
	},
	{
		.name = "pon",
		.query = "pon",
		.url = "https://my.ponlist.de/de/legal",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Open the app -> Open Settings -> Click on your Account's information -> Initiate deletion"
	},
	{
		.name = "Porkbun",
		.query = "porkbun",
		.url = "https://porkbun.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log into your account -> Click the link -> Click the Delete Account button and follow instructions."
	},
	{
		.name = "PornHub",
		.query = "pornhub",
		.url = "https://help.pornhub.com/hc/en-us/articles/4419877487635-How-do-I-delete-my-account-",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "postale.io",
		.query = "postaleio",
		.url = "https://postale.io/admin/my/show",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on the 'Delete account' red button at the bottom of the page. Only administrator accounts can delete an account though."
	},
	{
		.name = "Postcrossing",
		.query = "postcrossing",
		.url = "https://www.postcrossing.com/removal",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log into your account -> Click the link (data fully deleted, not possible to revert this)."
	},
	{
		.name = "postimage",
		.query = "postimage",
		.url = "https://postimg.cc/profile/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in, go to the linked website, enter your password and confirm"
	},
	{
		.name = "Postman",
		.query = "postman",
		.url = "https://app.getpostman.com/dashboard/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log into your account, then click the 'Delete Account' button on your profile page."
	},
	{
		.name = "Postmates",
		.query = "postmates",
		.url = "https://support.postmates.com/buyer/contact-us/delete-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Fill in account information and click 'Report Issue'. Reply to the email sent to you to confirm deletion."
	},
	{
		.name = "Pottermore",
		.query = "pottermore",
		.url = "https://privacyportal.onetrust.com/webform/1b21e05d-c206-4e0b-970e-2d73a23e42e8/780a7716-f409-47f4-afdf-fbe274737e6f",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out form and submit. Non-USA form entries will receive an email to confirm the deletion request. If you are from the USA, use [this form](https://privacy.wizardingworld.com/delete-data-request/) instead."
	},
	{
		.name = "The Powder Toy",
		.query = "the powder toy",
		.url = "https://powdertoy.co.uk/Discussions/Thread/View.html?Thread=24007",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = NULL
	},
	{
		.name = "PowToon",
		.query = "powtoon",
		.url = "https://support.powtoon.com/en/article/deleting-your-powtoon-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Click on the contact link of the linked page and fill out the form."
	},
	{
		.name = "Poznaj.to",
		.query = "poznajto",
		.url = "https://poznaj.to/konto-panelisty/usun-konto",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Provide your password, check the consent, and click the \"Delete\" button on the page. The deletion takes 14 days."
	},
	{
		.name = "Premera",
		.query = "premera",
		.url = "https://www.premera.com/wa/visitor/",
		.email = "mailto:support@premera.com",
		.difficulty = 0x1000,
		.notes = "Email Premera's support team to request account deletion."
	},
	{
		.name = "Premier League",
		.query = "premier league",
		.url = "https://www.premierleague.com/news/844577",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the Manage Profile page and click 'Delete My Account'. Enter your password and click confirm."
	},
	{
		.name = "Premiumize.me",
		.query = "premiumizeme",
		.url = "https://www.premiumize.me/deleteaccount",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log into your account -> Click the link -> Click on Send verification code -> Paste the code you got on your email and click Delete Account."
	},
	{
		.name = "PrestaShop",
		.query = "prestashop",
		.url = "https://accounts.distribution.prestashop.net/settings/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Fill out the form."
	},
	{
		.name = "Previewed",
		.query = "previewed",
		.url = "https://previewed.app/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log into your account -> Go to account settings -> Scroll down to the bottom of the page -> Click Delete Account."
	},
	{
		.name = "Prey",
		.query = "prey",
		.url = "https://panel.preyproject.com/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log into your account -> Click 'Need to close your account?' near the bottom of the page -> Confirm deletion"
	},
	{
		.name = "Prezi",
		.query = "prezi",
		.url = "https://prezi.com/settings/delete-account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log into your account -> Click the link -> Enter your password and click on Delete Account."
	},
	{
		.name = "Printful",
		.query = "printful",
		.url = "https://printful.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on \"More\", then \"Settings\", then \"My account\". Scroll down and click \"Delete account\""
	},
	{
		.name = "Privacy",
		.query = "privacy",
		.url = "https://support.privacy.com/hc/en-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Click on the submit request button and click the request type to Close Account and fill out the form."
	},
	{
		.name = "ProductHunt",
		.query = "producthunt",
		.url = "https://www.producthunt.com/my/settings/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the account setting, click 'Continue' under 'Delete my Account' and follow from there."
	},
	{
		.name = "Progate",
		.query = "progate",
		.url = "https://progate.com/deactivate",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and click 'Delete Account'"
	},
	{
		.name = "Programiz PRO",
		.query = "programiz pro",
		.url = "https://programiz.pro",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to the website and tap on your profile icon. Click on 'My Profile' and navigate to the 'Account' section. Hit the 'Delete My Account' button."
	},
	{
		.name = "ProMods",
		.query = "promods",
		.url = "https://promods.net/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact via Discord or forum asking to delete account."
	},
	{
		.name = "Proofwiki",
		.query = "proofwiki",
		.url = "https://proofwiki.org/wiki/ProofWiki:Privacy_policy#Removal_of_user_accounts",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = NULL
	},
	{
		.name = "PropertyListingsAI",
		.query = "propertylistingsai",
		.url = "https://propertylistingsai.com/terms-of-use",
		.email = "mailto:balt1794@gmail.com?subject=Account%20Deletion%20Request&body=Account%20Deletion%20Request",
		.difficulty = 0x1000,
		.notes = "Send an email. After receiving the email, your account will be deleted in the next 24 hours."
	},
	{
		.name = "PROS",
		.query = "pros",
		.url = "https://prismray.io/account?section=profile",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click on 'Delete account' near the bottom of the page, wait 30 days after that"
	},
	{
		.name = "Prosper",
		.query = "prosper",
		.url = "https://www.prosper.com/secure/account/borrower/close_account.aspx",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log into your account -> Click the link -> Click on Close My Account Now."
	},
	{
		.name = "Proto.io",
		.query = "protoio",
		.url = "https://support.proto.io/hc/en-us/articles/222733628-Dashboard-basics-Billing-Settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You can either close your account temporary or delete it permanently. Log into your account -> Click Settings -> Manage Subscription -> NEED TO CLOSE YOUR ACCOUNT? click Yes, Close Account"
	},
	{
		.name = "Proton",
		.query = "proton",
		.url = "https://account.proton.me/u/0/mail/account-password",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Open your account settings, go to 'Account' -> 'Account and password' -> 'Delete your account'. You need to select a reason for deleting your account and give some feedback."
	},
	{
		.name = "Prott",
		.query = "prott",
		.url = "https://prottapp.com/app/#/users/edit/general",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log into your account -> Click Settings -> in General tab scroll down and find 'Click here if you want to cancel your account' -> Choose why you are leaving and click 'Continue' -> Click 'Yes Cancel My Account'"
	},
	{
		.name = "ProWritingAid",
		.query = "prowritingaid",
		.url = "https://prowritingaid.com/en/Account/Manage",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and press 'Delete Account'."
	},
	{
		.name = "Proxer",
		.query = "proxer",
		.url = "https://proxer.me/ucp?s=deleteaccount",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "The account deletion page can be found by hovering the logo -> Impressum -> FAQ/Kontakt -> Zur Accountlöschung. When logged in, the linked page should present a pop-up dialogue to confirm account deletion."
	},
	{
		.name = "Prusa",
		.query = "prusa",
		.url = "https://account.prusa3d.com/extra-login/?next=/delete-account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Using the link, your account will be deleted in 3 days. If you want to cancel it, log-in before that period to cancel the deletion."
	},
	{
		.name = "PTC (MathCad, Vuforia Chalk Community)",
		.query = "ptc mathcad vuforia chalk community",
		.url = "https://www.ptc.com/en/support/article/CS115856",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Log into your account to check the current state of the help page for any updates. If you cannot log in to your account anymore, use this [link](https://support.ptc.com/support/feedback/web-account.htm) and fill out the form to request the deletion of a personal accounts data. A support agent should reach out to reconfirm your choice via email. This process may differ for education or business accounts."
	},
	{
		.name = "Pulse.red",
		.query = "pulsered",
		.url = "https://pulse.red/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Hit the button with the user name in the top-right. Navigate to the 'Settings' tab and pick 'Delete account'. Confirm by clicking 'Yes, delete'."
	},
	{
		.name = "Pulseway",
		.query = "pulseway",
		.url = "https://my.pulseway.com/main/account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "At the bottom of the page click 'Delete Account'. You will need a code sent to the 'Work E-Mail' listed on the same page (can be changed without confirmation)."
	},
	{
		.name = "Pushlink",
		.query = "pushlink",
		.url = "https://adm.pushlink.com/delete-account.xhtml",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Type your current password and click 'Erase all data permanently'."
	},
	{
		.name = "Pushover",
		.query = "pushover",
		.url = "https://pushover.net/settings/delete_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Put.io",
		.query = "putio",
		.url = "https://app.put.io/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click Destroy my account completely, then click Delete everything."
	},
	{
		.name = "PxHere",
		.query = "pxhere",
		.url = "https://pxhere.com/my/settings",
		.email = "mailto:pxhere.com@gmail.com?subject=Account%20Deletion%20Request&body=Please%20delete%20my%20PxHere%20account%20registered%20under%20this%20email%20address.",
		.difficulty = 0x1000,
		.notes = "You must email support to delete your account."
	},
	{
		.name = "Python Morsels",
		.query = "python morsels",
		.url = "https://www.pythonmorsels.com/delete-account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and enter your email and password"
	},
	{
		.name = "Python Package Index (PyPI)",
		.query = "python package index pypi",
		.url = "https://pypi.org/manage/account/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Go to \"Delete account -> Delete your PyPI account\". Projects that you are the sole of owner of will be needed to have their ownership transferred to another user or to be deleted before being able to proceed."
	},
	{
		.name = "PythonAnywhere",
		.query = "pythonanywhere",
		.url = "https://help.pythonanywhere.com/pages/DeleteAccount/",
		.email = "mailto:usercare@anaconda.com?subject=Delete%20account%20%27your-username%27&body=I%20request%20to%20permanently%20delete%20my%20PythonAnywhere%20account%20%27your-username%27%20with%20all%20its%20files%20and%20data.",
		.difficulty = 0x1000,
		.notes = "You must email support to delete your account."
	},
	{
		.name = "QIWI Wallet",
		.query = "qiwi wallet",
		.url = "https://qiwi.com/support/security/subject21/udalit-qiwi-koshelek",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "If you want to delete the wallet, then log in to your QIWI Wallet and fill out the form below, which will be available after authorization."
	},
	{
		.name = "Qoala",
		.query = "qoala",
		.url = "https://www.joinqoala.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to My Account, select the gear icon just by your name, select 'Delete account and all associated data'."
	},
	{
		.name = "Qobuz",
		.query = "qobuz",
		.url = "https://www.qobuz.com/profile/delete/confirmation/email",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Requires email confirmation."
	},
	{
		.name = "QooApp",
		.query = "qooapp",
		.url = "https://www.qoo-app.com/",
		.email = "mailto:mr@qoo-app.com?subject=Account%20and%20Data%20Deletion%20Request",
		.difficulty = 0x1000,
		.notes = "Email the customer support team requesting account data deletion containing your UID and username"
	},
	{
		.name = "QQ",
		.query = "qq",
		.url = "https://kf.qq.com/faq/1803146n2yMr180314MbIfER.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "From the app: Avatar -> Settings -> Account Security -> Account Cancellation."
	},
	{
		.name = "QQTube",
		.query = "qqtube",
		.url = "https://www.qqtube.com/identity",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'Close account' -> Enter your current password -> Click 'Deactivate'."
	},
	{
		.name = "Qt",
		.query = "qt",
		.url = "https://my.qt.io/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked page and scroll down to the bottom. From there, click on 'Delete Account'."
	},
	{
		.name = "Quantic Foundry",
		.query = "quantic foundry",
		.url = "https://quanticfoundry.com/",
		.email = "mailto:team@quanticfoundry.com",
		.difficulty = 0x1000,
		.notes = "Email their support team asking for account deletion."
	},
	{
		.name = "QuillBot",
		.query = "quillbot",
		.url = "https://help.quillbot.com/hc/en-us/requests/new?ticket_form_id=13656193734039",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Visit the linked page and use the form to request the deletion of your account."
	},
	{
		.name = "QuintoAndar",
		.query = "quintoandar",
		.url = "https://help.quintoandar.com.br/hc/pt-br/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Send a message to them requesting deletion. They will reply asking for the reason and a few personal data and eventually delete. If you had rented something on their platform in the past, they won't be able to delete your personal data to comply with regulations."
	},
	{
		.name = "Quip",
		.query = "quip",
		.url = "https://www.quipsupport.com/entries/25079898-How-do-I-delete-my-account-",
		.email = "mailto:support@quip.com",
		.difficulty = 0x1000,
		.notes = "Email support@quip.com and ask them to delete your account."
	},
	{
		.name = "Quire",
		.query = "quire",
		.url = "https://quire.io/r/setting?tab=options#additional",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Settings -> Options -> Advanced -> Delete account... Type in a reason and your password."
	},
	{
		.name = "Quizlet",
		.query = "quizlet",
		.url = "https://quizlet.com/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Quora",
		.query = "quora",
		.url = "https://help.quora.com/hc/en-us/articles/115004250866-How-do-I-delete-my-Quora-account-?",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in, go to 'Settings', 'Privacy', and then 'Delete Account'. Your account will be deactivated, then permanently deleted after 14 days. If you log in during that time, your account will be reactivated and deletion will be canceled."
	},
	{
		.name = "Quotev",
		.query = "quotev",
		.url = "https://www.quotev.com/help/q/23",
		.email = NULL,
		.difficulty = 0x800,
		.notes = NULL
	},
	{
		.name = "RackNerd",
		.query = "racknerd",
		.url = "https://my.racknerd.com/submitticket.php",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Opening a support ticket will result in your account being closed by customer support. However, you can still log in with the same account credentials, but it will show that your account is in a closed status. You will not be able to re-register using the same email address."
	},
	{
		.name = "radio.fr",
		.query = "radiofr",
		.url = "https://www.radio.fr/#%2Fkonto_loeschen.jsf",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login, go to profile page, it's in tab 'my data' and click 'delete my account'."
	},
	{
		.name = "Radiooooo",
		.query = "radiooooo",
		.url = "https://radiooooo.com/",
		.email = "mailto:support@radiooooo.com",
		.difficulty = 0x1000,
		.notes = "Account removal must be requested directly by email."
	},
	{
		.name = "Rail Europe",
		.query = "rail europe",
		.url = "https://www.raileurope.com/account/settings",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Go to account settings and click the 'Delete my account' button at the top right corner. This will open a ticket for them to delete your account and it will eventually be processed."
	},
	{
		.name = "Raindrop.io",
		.query = "raindropio",
		.url = "https://api.raindrop.io/v1/user/remove",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Rainforest QA",
		.query = "rainforest qa",
		.url = "https://app.rainforestqa.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login, go to the settings page and click 'I want to delete my account'."
	},
	{
		.name = "Rakuten",
		.query = "rakuten",
		.url = "https://www.rakuten.com/privacy-preferences.htm",
		.email = "mailto:memberservices@rakuten.com?subject=Request%20to%20Delete%20Rakuten%20Account",
		.difficulty = 0x4000,
		.notes = "If you're on a region where privacy rights are covered by law, it's as easy as clicking a button, otherwise you have to send an e-mail."
	},
	{
		.name = "RapidAPI",
		.query = "rapidapi",
		.url = "https://rapidapi.com/auth/user/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Account can be deleted by clicking \"delete\" under \"Delete Current User\"."
	},
	{
		.name = "RateYourMusic",
		.query = "rateyourmusic",
		.url = "https://rateyourmusic.com/account/delete",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "After deleting the account, it will be deactivated for 30 days before being deleted permanently. Messages, forum posts, and contributions stay on the site even after your account is deleted."
	},
	{
		.name = "RayWenderlich",
		.query = "raywenderlich",
		.url = "https://accounts.raywenderlich.com/profile",
		.email = "mailto:support@razeware.com?subject=Account%20deletion%20request",
		.difficulty = 0x1000,
		.notes = "Send an email to support@razeware.com with your account username and email address. Within a few business days, you should receive confirmation that your account was deleted."
	},
	{
		.name = "Razer",
		.query = "razer",
		.url = "https://razer-id.razerzone.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "An account is required to access the warranty and product registration section of the website. Despite being on a different subdomain, this affects the normal Razerzone.com website and the assorted store as well."
	},
	{
		.name = "RD Saúde (Droga Raia and Drogasil)",
		.query = "rd saude droga raia and drogasil",
		.url = "https://privacyportal-br.onetrust.com/webform/ece1e280-13aa-4d10-984a-bda9a79f64d7/c973a872-1b90-4b71-8284-e75ce6928857",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form and make your data deletion request."
	},
	{
		.name = "Read the Docs",
		.query = "read the docs",
		.url = "https://readthedocs.org/accounts/delete/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the linked page confirm your username and select 'Delete Account'."
	},
	{
		.name = "Readernaut",
		.query = "readernaut",
		.url = "https://readernaut.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your profile page, and use the 'Delete Your Account' button."
	},
	{
		.name = "RealDebrid",
		.query = "realdebrid",
		.url = "https://real-debrid.com/support",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "First, search \"delete account\" in the search bar in order to obtain the \"I want to delete my Real-Debrid account\" entry. Click on it for the instructions for users in premium state. Once your account is no longer premium, proceed to the \"Contact us\" button to create a support ticket requesting to delete your account."
	},
	{
		.name = "RealPython",
		.query = "realpython",
		.url = "https://realpython.com/account/delete/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "RealVNC",
		.query = "realvnc",
		.url = "https://manage.realvnc.com/en/close_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Rebelsmarket",
		.query = "rebelsmarket",
		.url = "https://www.rebelsmarket.com/my",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on URL and then choose Cancel Account. Once prompted confirm that you want to cancel your account and then you will receive a verification email. Note, you can also download your personal data on this page."
	},
	{
		.name = "Rebrickable",
		.query = "rebrickable",
		.url = "https://rebrickable.com/login/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to Settings, then Account. Scroll to the bottom. Click 'Delete Account', then 'Yes - Delete Account', then 'DELETE ALL MY REBRICKABLE DATA'."
	},
	{
		.name = "rebuy",
		.query = "rebuy",
		.url = "https://www.rebuy.de/my/personal-data",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of your Account/personal-data page should be a button to delete your account"
	},
	{
		.name = "RecargaPay",
		.query = "recargapay",
		.url = "https://recargapay.com.br/user/close-account",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can't completely delete your account. On the account closure page, you are informed that after you closing your account, most of your data will be deleted from the system, however it's not specified which data will be kept and why. Closed accounts can also be reactivated at any time by the user."
	},
	{
		.name = "Recreation.gov",
		.query = "recreationgov",
		.url = "https://www.recreation.gov/account/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login and go to the link to click the button to delete account. Confirm your password and you'll receive an e-mail with the deletion completion."
	},
	{
		.name = "Red Hat",
		.query = "red hat",
		.url = "https://www.redhat.com/en/about/personal-data-request",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Select \"I have a redhat.com login ID and I want Red Hat to delete it.\""
	},
	{
		.name = "Red Robin",
		.query = "red robin",
		.url = "https://dsr.redrobin.com",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Select \"Delete my data\" as the request type."
	},
	{
		.name = "Redacteur.com",
		.query = "redacteurcom",
		.url = "https://www.redacteur.com/identities/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account. Click on \"My Account\" then \"My connection information\". Finally click \"Delete my account\""
	},
	{
		.name = "Redbooth",
		.query = "redbooth",
		.url = "https://redbooth.com/a/#!/settings/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "By deleting your account you will lose access to all your organizations and workspaces. This action is irreversible."
	},
	{
		.name = "Redbubble",
		.query = "redbubble",
		.url = "https://www.redbubble.com/account/settings/cancel",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the button to delete your account."
	},
	{
		.name = "Reddit",
		.query = "reddit",
		.url = "https://www.reddit.com/prefs/delete/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "If you are opted in to the redesign, scroll to the bottom and click on the Delete Account button. Your content will not be deleted (only disassociated)."
	},
	{
		.name = "Redfin",
		.query = "redfin",
		.url = "https://www.redfin.com/myredfin/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "After logging in, click the \"Delete Your Account\" link at the bottom of the Account Settings page."
	},
	{
		.name = "Rediff",
		.query = "rediff",
		.url = "https://m.rediff.com/w3c/policy.html#:~:text=If%20your%20personally%20identifiable%20information%20or%20email%20address%20change,or%20postal%20mail%20at%20the%20contact%20information%20listed%20below.",
		.email = "mailto:customersupport@rediff.co.in",
		.difficulty = 0x1000,
		.notes = "To delete the account, according to the linked page, an e-Mail must be sent to their Support team. If the linked e-Mail doesn't work, try this one: shopsupport@rediff.co.in"
	},
	{
		.name = "Redirect.ing",
		.query = "redirecting",
		.url = "https://redirect.ing/account/settings/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the settings page, click the \"Delete my account & data\" button at the bottom of the page."
	},
	{
		.name = "redirect.pizza",
		.query = "redirectpizza",
		.url = "https://redirect.pizza/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In the bottom right corner of the linked page, click 'Delete my account'."
	},
	{
		.name = "RedPen.io",
		.query = "redpenio",
		.url = "https://redpen.io/account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You would need to email the team by clicking feedback to have your account removed."
	},
	{
		.name = "RedShelf",
		.query = "redshelf",
		.url = "https://solve.redshelf.com/hc/requests/new?ticket_form_id=1260804993770",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Brytewave users should [submit a DSAR request to Follett](https://www.follett.com/policies/)."
	},
	{
		.name = "Reg.ru",
		.query = "regru",
		.url = "https://help.reg.ru/support/#request",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "To deactivate an account in Reg.ru, send a request to the support service with the account's login."
	},
	{
		.name = "Remember The Milk",
		.query = "remember the milk",
		.url = "https://www.rememberthemilk.com/login/delete.rtm",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Remind",
		.query = "remind",
		.url = "https://www.remind.com/settings/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom of the page and click 'Delete Account'"
	},
	{
		.name = "Remitly",
		.query = "remitly",
		.url = "https://www.remitly.com/fr/en/help/article/138e6277-84e5-43d1-9034-382f58e5eff1",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "In your profile settings, scroll down and select \"Close my profile\". You account will remain recoverable anytime but you con contact the support to delete your data."
	},
	{
		.name = "RemNote",
		.query = "remnote",
		.url = "https://help.remnote.com/en/articles/8033036-deleting-your-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You can delete your account from Settings -> Profile -> Account Deletion -> Delete Account"
	},
	{
		.name = "Render",
		.query = "render",
		.url = "https://render.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your profile page, scroll to the bottom and click Delete Render Account."
	},
	{
		.name = "Renderforest",
		.query = "renderforest",
		.url = "https://www.renderforest.com/profile/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'Delete account' in the middle of the page, then enter your password."
	},
	{
		.name = "Replay Poker",
		.query = "replay poker",
		.url = "https://www.replaypoker.com/settings/deactivate",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Please enter a reason for deactivating your account and then click 'Deactivate' after you're finished."
	},
	{
		.name = "Replit",
		.query = "replit",
		.url = "https://replit.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the linked page under Account select 'Request account deletion' and then click the 'Yes, Delete my Account' button."
	},
	{
		.name = "Report URI",
		.query = "report uri",
		.url = "https://report-uri.com/account/settings/#deleteData",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "RescueTime",
		.query = "rescuetime",
		.url = "https://www.rescuetime.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Use the 'Delete your account' link in the lower right-hand corner."
	},
	{
		.name = "Reservio",
		.query = "reservio",
		.url = "https://app.reservio.com/#/business/settings",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Go to the **Business** tab -> **Settings**. You will find the option for the deletion of your account at the bottom of this page."
	},
	{
		.name = "ResumeBoostAI",
		.query = "resumeboostai",
		.url = "https://resumeboostai.com/privacy",
		.email = "mailto:balt1794@gmail.com?subject=Account%20Deletion%20Request&body=Account%20Deletion%20Request",
		.difficulty = 0x1000,
		.notes = "Send an email. After receiving the email, your account will be deleted in the next 24 hours."
	},
	{
		.name = "ResumeGenius",
		.query = "resumegenius",
		.url = "https://app.resumegenius.com/data-access/personal-data",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Simply login to your resumegenius account, go to the form, click delete and you should be good to go!"
	},
	{
		.name = "Resy",
		.query = "resy",
		.url = "https://resy.com/terms",
		.email = "mailto:help@resy.com?body=Please%20delete%20my%20Resy%20account%20as%20I%20do%20not%20wish%20to%20use%20it%20any%20further.",
		.difficulty = 0x1000,
		.notes = "While self-deletion is possible through [their app](https://apps.apple.com/app/apple-store/id866163372), it is iOS only. Everyone else must send an email."
	},
	{
		.name = "RetroAchievements",
		.query = "retroachievements",
		.url = "https://retroachievements.org/controlpanel.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Retroroms",
		.query = "retroroms",
		.url = "https://www.retroroms.info/unregister.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in, then go to the linked page, and click in the blue button labeled \"DELETE ACCOUNT\". The deletion is performed immediately."
	},
	{
		.name = "Retrospring",
		.query = "retrospring",
		.url = "https://retrospring.net/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Use the Delete button at the bottom of the page."
	},
	{
		.name = "Rev",
		.query = "rev",
		.url = "https://www.rev.com/account/settings/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and click 'Close Account'. Type 'CLOSE' in the text box, then click 'Close Account Forever'."
	},
	{
		.name = "RevenueHits",
		.query = "revenuehits",
		.url = "https://www.revenuehits.com/privacy/",
		.email = "mailto:privacy@intango.com",
		.difficulty = 0x1000,
		.notes = "In the support center it says that you can't delete your account, but if you contact them by e-mail, you should be able to get it deleted."
	},
	{
		.name = "Reverso",
		.query = "reverso",
		.url = "https://www.reverso.net/contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "On your own, you can only disable your account in your profile settings. If you want to request its removal, you must contact support using the linked form, but they may ask you to confirm your identity."
	},
	{
		.name = "Revolt",
		.query = "revolt",
		.url = "https://revolt.chat/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your account options and click on 'Mark Account for Deletion'."
	},
	{
		.name = "Revolut",
		.query = "revolut",
		.url = "https://help.revolut.com/en-US/help/profile-and-plan/closing-account/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Open the Revolut app on your phone, go to the profile icon, then press on \"Account\", \"Close account\", and follow the instructions.\nIn order to close your account you must meet the requirements written in the linked page."
	},
	{
		.name = "Rhonexpress",
		.query = "rhonexpress",
		.url = "https://www.rhonexpress.fr/en_GB/account/profile/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your personal information page, scroll down to \"Delete my account\", and click on \"I delete my account\"."
	},
	{
		.name = "Rideindego",
		.query = "rideindego",
		.url = "https://www.rideindego.com/faq/#how-do-i-cancel-my-pass",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can only cancel the auto-renewal feature. I called them and asked to cancel my account and be removed from their mailing list and they told me my account was already not renewing and there was nothing else they could do."
	},
	{
		.name = "Riffle",
		.query = "riffle",
		.url = "https://help.realnames.com/hc/en-us/articles/202814089-Deactivate-your-Email-Address",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your profile page, click 'Edit Profile' and use the 'Cancel account' button."
	},
	{
		.name = "Ring",
		.query = "ring",
		.url = "https://account.ring.com/account/data-requests",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Go to the URL, sign into your account, and select \"Delete Data\" near the bottom. Reenter your password, select \"Confirm Deletion,\" and then wait for up to 30 days for your request to be processed. When your information has been deleted, your account credentials will no longer work."
	},
	{
		.name = "Riot Games",
		.query = "riot games",
		.url = "https://support-valorant.riotgames.com/hc/en-us/requests/new?ticket_form_id=360004036693",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "To delete your account, you need to open a support request from any game's support page. If your account is verified by the algorithm, you can use [self service option](https://support-leagueoflegends.riotgames.com/hc/en-us/articles/360050328454-Deleting-Your-Riot-Account-and-All-Your-Data)."
	},
	{
		.name = "Ripe NCC",
		.query = "ripe ncc",
		.url = "https://www.ripe.net",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = NULL
	},
	{
		.name = "RiseUp",
		.query = "riseup",
		.url = "https://account.riseup.net",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to account.riseup.net -> 'Login' -> Press 'purge data' then press 'close account'. Finally, follow any instructions on screen."
	},
	{
		.name = "Rituals.com",
		.query = "ritualscom",
		.url = "https://service.rituals.com/s/contact?topic=a2L4L0000008xwDUAQ&language=de&country=DE",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to claim a GDPR case for the right to delete your data."
	},
	{
		.name = "RLV e-boutique",
		.query = "rlv eboutique",
		.url = "https://eboutique-rlv.airwebpass.com/account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your account page, click on your account name, scroll down, and click on \"Supprimer mon compte\". Confirm you want to delete your account, a login prompt will ask for your email and password, and click on \"Me Connecter\"."
	},
	{
		.name = "Roadie",
		.query = "roadie",
		.url = "https://send.roadie.com/profile/settings",
		.email = "mailto:privacy@roadie.com",
		.difficulty = 0x1000,
		.notes = "Send an email requesting account deletion. They will ask for your full name, email address, the last four digits of your SSN, and date of birth. You can refuse the latter two items and provide your phone number and physical address instead. Note that the 'DELETE ACCOUNT' button in your profile settings will simply autogenerate an email addressed to their support who will tell you to request deletion from the privacy team."
	},
	{
		.name = "Robinhood",
		.query = "robinhood",
		.url = "https://robinhood.com/contact",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Support will not disable / delete your login. Individual brokerage or crypto accounts can be deleted, as well as marketing information through self-service option."
	},
	{
		.name = "Roblox",
		.query = "roblox",
		.url = "https://en.help.roblox.com/hc/en-us/articles/203313050-How-Do-I-Delete-My-Account-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "A form of photo ID is required. Despite what the initial email claims, they will delete your account regardless of your location."
	},
	{
		.name = "RoboForm",
		.query = "roboform",
		.url = "https://online.roboform.com/site/account/manage?type=profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click \"Delete my RoboForm account\" then confirm."
	},
	{
		.name = "Rockstar Games Social Club",
		.query = "rockstar games social club",
		.url = "https://support.rockstargames.com/account/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Click on the delete account and information button on the support page to submit a ticket. They will then email you asking you to confirm a few details of your account which you have to reply to, after that the account will be deleted."
	},
	{
		.name = "Roku",
		.query = "roku",
		.url = "https://my.roku.com/account/close",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Factory reset your roku devices before deleting account."
	},
	{
		.name = "Roland",
		.query = "roland",
		.url = "https://www.roland.com/us/privacy/",
		.email = "mailto:privacy@rolandus.com",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support."
	},
	{
		.name = "Roll20",
		.query = "roll20",
		.url = "https://app.roll20.net/account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the account page, scroll down to the \"Danger Zone\" and click on the \"Delete My Account\" button. After that, you will have to type \"DELETE\" in the pop-up box."
	},
	{
		.name = "The Root",
		.query = "the root",
		.url = "https://notice.sp-prod.net/sar/index.html?message_id=539278&account_id=1195&ccpa_type=delete",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form using the email address of your account and click on the verification link that is sent."
	},
	{
		.name = "Rosetta Stone",
		.query = "rosetta stone",
		.url = "https://privacyportal-cdn.onetrust.com/dsarwebform/27aac3ab-c36e-4457-81d4-9773ba27887e/f1e6ce28-8f84-4cae-9bdd-bc40113d5ee0.html",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Submit a personal data deletion request via the support site form using your registered email. Your data will be deleted after some time without any email confirmation. (Note: [California residents must use this form instead!](https://privacyportal-cdn.onetrust.com/dsarwebform/27aac3ab-c36e-4457-81d4-9773ba27887e/a4611d02-cd40-4c80-8efb-af97324e0cc4.html))"
	},
	{
		.name = "Rotten Tomatoes",
		.query = "rotten tomatoes",
		.url = "https://support.fandango.com/contact/contact-us-fandango-rkksORSDO",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "If you want to delete an account you’ve created on Rotten Tomatoes, please contact an agent on live chat or fill out the email contact form."
	},
	{
		.name = "Rscipts",
		.query = "rscipts",
		.url = "https://rscripts.net",
		.email = "mailto:hello@rscripts.net?subject=Delete%20Account%20Request&body=Dear%20Rscripts%20support%20team%2C%20I%20hope%20this%20message%20finds%20you%20well.%20I%20would%20like%20to%20formally%20request%20the%20closure%20and%20the%20deletion%20of%20all%20associated%20personal%20data%20and%20account.%20Below%20are%20my%20account%20details%3A%20Email%20Address%3A%20XXXXX%40XXXXX.XXXXX%2C%20Username%3A%20XXXXX.%20I%20would%20appreciate%20it%20if%20you%20could%20process%20my%20account%20closure%20request%20as%20soon%20as%20possible.%20Please%20confirm%20once%20the%20account%20has%20been%20deleted%20and%20all%20associated%20data%20has%20been%20deleted.%20Best%20regards%2C%20XXXXX",
		.difficulty = 0x1000,
		.notes = "Account deletion requires contacting Customer Support. They do respond fast taking only ~8 hours."
	},
	{
		.name = "Rue du Commerce",
		.query = "rue du commerce",
		.url = "https://www.rueducommerce.fr",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "No online request possible."
	},
	{
		.name = "Rumble",
		.query = "rumble",
		.url = "https://rumble.com/account/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on the big red button at the bottom of the page."
	},
	{
		.name = "Runescape",
		.query = "runescape",
		.url = "https://www.runescape.com/zendesk/support-form?form=360000041149",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Select 'Remove your personal data and permanently disable your account' as your request type and fill out the rest of the form."
	},
	{
		.name = "RunKeeper",
		.query = "runkeeper",
		.url = "https://runkeeper.com/delete-account?confirm",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Enter your password, select a reason for deletion, complete the captcha, press the delete button and then confirm it in the dialog."
	},
	{
		.name = "Runtastic",
		.query = "runtastic",
		.url = "https://help.runtastic.com/hc/en-us/articles/200370082-Delete-Account-Cancel-Membership",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "To delete your account go to Runtastic.com & log in, click on the arrow on the right side of your user name, click on \"Settings\", click on \"Login Data\" on the left hand side, click on \"Delete my account\" at the bottom"
	},
	{
		.name = "Ryanair",
		.query = "ryanair",
		.url = "https://m.marketing.ryanairemail.com/webApp/dataerasure",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Link found in their privacy policy to process account deletion."
	},
	{
		.name = "Rytr",
		.query = "rytr",
		.url = "https://rytr.me/blog/resources#how-to-delete-my-account",
		.email = "mailto:support@rytr.me",
		.difficulty = 0x1000,
		.notes = "In order to delete your acoount, you have to send an e-mail to them."
	},
	{
		.name = "SadlyUnfriended",
		.query = "sadlyunfriended",
		.url = "https://www.sadlyunfriended.com/close_account.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Alternatively, remove the Sadly Unfriended application from Facebook and follow the email instructions."
	},
	{
		.name = "Sahibinden",
		.query = "sahibinden",
		.url = "https://banaozel.sahibinden.com/bilgilerim/uyelik-iptali",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Salad",
		.query = "salad",
		.url = "https://support.salad.com/article/45-how-can-i-delete-my-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to create a ticket."
	},
	{
		.name = "SamMobile",
		.query = "sammobile",
		.url = "https://www.sammobile.com/remove-account/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Type in your password and click \"Submit\". Click the confirmation link sent to your email address."
	},
	{
		.name = "Samsung Account",
		.query = "samsung account",
		.url = "https://account.samsung.com/membership/contents/profile/delete-samsung-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click in the checkbox \"I confirm the conditions above\", click at \"Delete\", type your password and confirm your action by clicking \"Confirm\"."
	},
	{
		.name = "SamyGO Forum",
		.query = "samygo forum",
		.url = "https://forum.samygo.tv/memberlist.php?mode=contactadmin",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "The only way is to send a request but no one responds."
	},
	{
		.name = "Sapinet",
		.query = "sapinet",
		.url = "https://my.sapinet.fr/submitticket.php",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Send a support request, they will delete your \"account\" you will still be able to login and your ability to send support request will be removed. The website will tell you \"no account found, to make a mew one you have to make a new order.\". Your name and email address will not be deleted."
	},
	{
		.name = "Satispay",
		.query = "satispay",
		.url = "https://disattivazione-account-satispay.paperform.co/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Follow the steps in the form. You will need the mobile open with your account logged in to provide some details like the UID"
	},
	{
		.name = "Scaleway",
		.query = "scaleway",
		.url = "https://console.scaleway.com/#/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the organization view and click the red 'deactivate organisation'."
	},
	{
		.name = "Scammer.info",
		.query = "scammerinfo",
		.url = "https://scammer.info/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go into your account preferences and click \"Delete My Account\"."
	},
	{
		.name = "Scavify",
		.query = "scavify",
		.url = "https://www.scavify.com/users/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the 'Delete Account' button, type in the confirmation and delete the account!"
	},
	{
		.name = "Scene+",
		.query = "scene",
		.url = "https://scenesupport.zendesk.com/hc/en-ca/p/contactUs",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You must call support to delete your account, they will not do it over email."
	},
	{
		.name = "Scentbird",
		.query = "scentbird",
		.url = "https://scentbird.zendesk.com/hc/en-us/articles/115004536388-How-do-I-cancel-my-subscription-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Open a ticket with the customer service using their chat/ticket form and ask them to delete your account."
	},
	{
		.name = "Scholly",
		.query = "scholly",
		.url = "https://search.myscholly.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in, go to the URL, open 'Account Details' -> 'Delete Account', and press 'Yes' to confirm. Scholly will immediately log you out and your credentials will no longer work."
	},
	{
		.name = "School of Chaos Online MMORPG",
		.query = "school of chaos online mmorpg",
		.url = "https://vnlentertainment.com/soc-html-privacy-policy-english.html",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "E-mailing customer service does not delete the account, only put it in spawn and reset mission progress. All items, currency and usernames are intact. The e-mail is not even publicly available."
	},
	{
		.name = "SchoolCashOnline",
		.query = "schoolcashonline",
		.url = "https://schoolcashonline.com/MyAccount/EditProfile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down to the bottom of the page and click 'Deactivate Account'."
	},
	{
		.name = "SchoolFinder",
		.query = "schoolfinder",
		.url = "https://www.schoolfinder.com/About/SchoolFinder-Privacy-Policy.pdf",
		.email = "mailto:info@SchoolFinder.com",
		.difficulty = 0x1000,
		.notes = "Email customer service to request account deletion."
	},
	{
		.name = "Schoology",
		.query = "schoology",
		.url = "https://app.schoology.com/settings/account/action?delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on the \"I Agree\" button."
	},
	{
		.name = "scite_",
		.query = "scite",
		.url = "https://scite.ai/policy#your-privacy-choices",
		.email = "mailto:hi@scite.ai",
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "Score",
		.query = "score",
		.url = "https://getscore.app",
		.email = "mailto:hello@getscore.app",
		.difficulty = 0x1000,
		.notes = "Email to ensure your account is deleted."
	},
	{
		.name = "Scratch",
		.query = "scratch",
		.url = "https://scratch.mit.edu/accounts/settings/delete_account_confirmation/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'Yes, next step', and follow the prompt"
	},
	{
		.name = "Screenshot to Code",
		.query = "screenshot to code",
		.url = "https://screenshottocode.com/",
		.email = "mailto:support@picoapps.xyz",
		.difficulty = 0x1000,
		.notes = "There is no delete button. You can send an account deletion request to the provided email."
	},
	{
		.name = "Scribd",
		.query = "scribd",
		.url = "https://support.scribd.com/hc/en-us/articles/360000894843-Deleting-your-account#h_01HBVYCPRH4GEMX24PD473BHP8",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Follow the instructions from this link."
	},
	{
		.name = "Sdc.com",
		.query = "sdccom",
		.url = "http://www.sdc.com/react/#/settings2",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Seagate",
		.query = "seagate",
		.url = "https://myportal.seagate.com/consumer-identity/profile/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Log in, go to the URL, press 'Delete Account and Product Registrations', and press 'Delete'. You should receive an email asking you to confirm account deletion."
	},
	{
		.name = "SEAGM",
		.query = "seagm",
		.url = "https://member.seagm.com/ucp/account/info",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click the 'Delete Account' button and follow the instructions sent to your email, wait 30 days after that"
	},
	{
		.name = "Second Life",
		.query = "second life",
		.url = "https://secondlife.com/my/account/cancel.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Sedo",
		.query = "sedo",
		.url = "https://sedo.com/us/about-us/policies/protecting-your-privacy/",
		.email = "mailto:contact@sedo.com",
		.difficulty = 0x1000,
		.notes = "You can only request account deletion by sending an email. \"Upon your request, we will deactivate and delete your account, contact information, billing information, shipping information, and financial information from our active databases. To make this request, email contact@sedo.com. Your account will be deactivated and deleted as soon as reasonably possible after we receive your request but no later than 30 days.\""
	},
	{
		.name = "Seedbox",
		.query = "seedbox",
		.url = "https://wiki.seedbox.fr/index.php/Comment_R%C3%A9silier_son_abonnement",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "There are two ways of cancelling your pack, depending on how you ordered your services: **Without automatic payment:** Simply ignore the reminders and the pack will be automatically deleted from our servers. **With automatic payment:** It is imperative to cancel the automatic payment before the renewal of your service, no refund will be made. Log in to your PayPal account, click on Preferences at the top of the page, click on \"My money\", then on \"Update\" next to \"My pre-approved payments\". Select the payment, then click Cancel, now all you have to do is ignore the renewal calls issued by the system and your pack will be deleted automatically when it expires."
	},
	{
		.name = "seedr.cc",
		.query = "seedrcc",
		.url = "https://www.seedr.cc/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Scroll down to the bottom of the webpage and click on \"Contact Us\". Fill in the message as \"Please delete my seedr.cc account\", include your registered email in the contact email field, submit the form and wait for their confirmation email. Note that the chances of them actually replying is very very low."
	},
	{
		.name = "Sega",
		.query = "sega",
		.url = "https://privacy.sega.com/en/your-rights",
		.email = "mailto:dataprivacy@sega.com?subject=I%20want%20to%20delete%20all%20my%20data%20from%20Sega&body=Data%20erasure.",
		.difficulty = 0x1000,
		.notes = "Send an email to dataprivacy@sega.com / dpo@sega.co.uk / dataprivacy@segaamerica.com that says \"I want to delete all my data from Sega.\"."
	},
	{
		.name = "SelfWealth",
		.query = "selfwealth",
		.url = "https://www.selfwealth.com.au/",
		.email = "mailto:support@selfwealth.com.au",
		.difficulty = 0x1000,
		.notes = "Contact them through e-mail to delete your account."
	},
	{
		.name = "Sellfy",
		.query = "sellfy",
		.url = "https://sellfy.com/user/settings/account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Log in first, go to the url and press 'Close Account', all products and orders will be lost, you will have to add a reason why, and depending on the option you will have to further explain"
	},
	{
		.name = "Semrush",
		.query = "semrush",
		.url = "https://www.semrush.com/kb/support/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You can delete your free account anytime by sending a request to their support team via this link, as described in their Terms of Service (7.4 De-Registration). To have your account deleted from their system, you will get a separate email with a removal activation link. You must click this link before they can take action on the request. This is to guarantee that you intend to delete your account."
	},
	{
		.name = "SendGrid",
		.query = "sendgrid",
		.url = "https://support.sendgrid.com/hc/en-us/articles/4410760485403-Data-Retention-and-Deletion-in-Twilio-Products",
		.email = "mailto:datasubjectrequests@sendgrid.com?subject=SendGrid%20account%20deletion%20request&body=Please%20delete%20my%20SendGrid%20account%20under%20my%20email%20address.",
		.difficulty = 0x1000,
		.notes = "You must send an email from your account's registered address. Some account data may be retained in anonymized form for up to a year."
	},
	{
		.name = "Sendspace",
		.query = "sendspace",
		.url = "https://www.sendspace.com/mysendspace/prefs.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, then open the URL. You should see the option 'Close my account'. They will ask for confirmation, and after you confirm your account will be deleted."
	},
	{
		.name = "SensCritique",
		.query = "senscritique",
		.url = "https://www.senscritique.com/parametres/compte-suppression",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in, go to the url. Fill your password and click on \"Valider\". Click on the blue text button \"Je souhaite supprimer mon compte et ma collection\". Your account will be deleted in 7 days."
	},
	{
		.name = "Sentry",
		.query = "sentry",
		.url = "https://sentry.io/settings/account/close-account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Serpstat",
		.query = "serpstat",
		.url = "https://serpstat.com/users/profile/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click on \"Settings\", then scroll down and click on \"Delete account\". Verify by entering the word \"delete\". A deletion request is sent and your data will be deleted after 72 hours."
	},
	{
		.name = "Server.pro",
		.query = "serverpro",
		.url = "https://server.pro/",
		.email = "mailto:support@server.pro",
		.difficulty = 0x1000,
		.notes = "Contact support with email provided here."
	},
	{
		.name = "Serverless",
		.query = "serverless",
		.url = "https://app.serverless.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "To delete your account, click your avatar and go to \"Profile\" page, click on \"delete account\" and then confirm the deletion by entering your username."
	},
	{
		.name = "Service-Public.fr",
		.query = "servicepublicfr",
		.url = "https://www.service-public.fr/compte/parametres",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Open your profile settings and click on \"Supprimer mon Compte\"."
	},
	{
		.name = "Session",
		.query = "session",
		.url = "https://sessionapp.zendesk.com/hc/en-us/articles/7726435197849-How-can-I-delete-my-Session-account-",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go into settings, press 'Clear Data', then 'Delete' and finally 'Entire Account'."
	},
	{
		.name = "SetApp",
		.query = "setapp",
		.url = "https://my.setapp.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in, go to the URL, press 'Delete account', and enter your password to confirm. Your account becomes unavailable and all the data in it is deleted."
	},
	{
		.name = "Seznam.cz",
		.query = "seznamcz",
		.url = "https://profil.seznam.cz/gdpr",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Sfimg",
		.query = "sfimg",
		.url = "https://www.sfimg.com/MyAccount/Remove",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Go to 'Account Options' on the menu of the icon of your profile, click 'Cancel SFI Account', and 'Opt Out Of SFI COMPLETELY', then send the form with the reason of the deletion and confirm the e-mail."
	},
	{
		.name = "Shadow",
		.query = "shadow",
		.url = "https://account.shadow.tech/home/security",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the \"Delete my shadow account\" at the bottom of the security page. Confirm by clicking yes and enter your password."
	},
	{
		.name = "Sharesome",
		.query = "sharesome",
		.url = "https://sharesome.com/settings/privacy/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On Privacy tab, click in the 'Delete Account' button. After that, insert a reason (this step is optional) and your account password."
	},
	{
		.name = "Shazam",
		.query = "shazam",
		.url = "https://www.shazam.com/privacy/login/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and sign in to your account. Your account will be deleted within 30 days. According to their privacy page \"Shazam may retain data that has been deidentified and is no longer associated with you.\""
	},
	{
		.name = "SHEEPIT",
		.query = "sheepit",
		.url = "https://www.sheepit-renderfarm.com/user/remove",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked page and provide a Reason for Account Deletion and click 'Remove Account'."
	},
	{
		.name = "Shein",
		.query = "shein",
		.url = "https://shein.com/robot",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Click on the link, then click on \"Contact Agent\", select \"Unsubscribe and delete\". Finally fill in the various fields and then press \"Submit\". ⚠️ It is imperative to give a reason for deleting an account for it to work."
	},
	{
		.name = "Shikimori",
		.query = "shikimori",
		.url = "https://shikimori.one/clubs/1093-faq-chasto-zadavaemye-voprosy",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "The site does not provide for the possibility of account deletion. However, you can remove all contact information from your profile and replace your email with a non-existent one. After performing these actions, there will be virtually nothing left of your account."
	},
	{
		.name = "Shinden",
		.query = "shinden",
		.url = "https://shinden.pl",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to \"Moje konto\", \"Edytuj\", \"Konto\" and \"Usuń konto\"."
	},
	{
		.name = "Shipito",
		.query = "shipito",
		.url = "https://www.shipito.com/es/help/faq/account-navigation",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Create a customer support ticket requesting deletion."
	},
	{
		.name = "Shodan",
		.query = "shodan",
		.url = "https://static.shodan.io/legal/terms.html",
		.email = "mailto:support@shodan.io",
		.difficulty = 0x1000,
		.notes = "Send an email to Shodan support to delete your account."
	},
	{
		.name = "Shop",
		.query = "shop",
		.url = "https://help.shop.app/hc/en-us/articles/360058842072-Delete-your-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the shop app: Open the 'Account' tab and tap the settings icon on the top right corner. Tap 'App settings', then 'Delete account', and then 'Delete account'. On the 'Are you sure you want to delete your account?' dialog, tap 'Delete account' to complete your account deletion. Deleting your account on a web browser is possible, but hardest: If you can't log in to the Shop app, submit your email address at https://shop.app/opt-out, and then check your email to complete deleting your account."
	},
	{
		.name = "Shop Your Way",
		.query = "shop your way",
		.url = "https://privacyportal.onetrust.com/webform/cc9a8230-03c2-46ab-afe1-51ced9dc71c0/30774a09-e2e1-4f85-9d3d-fc51a7530f05",
		.email = NULL,
		.difficulty = 0x4000,
		.notes = "Only California and Virginia residents may file a deletion request. Complete the linked form or call 1-888-527-6415."
	},
	{
		.name = "Shopee",
		.query = "shopee",
		.url = "https://www.sharelatex.com/user/settings",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Tap Saya (me)->Akun Saya (My account)->Ajukan Penghapusan akun (Submit Account removal/Submit Account Deletion)."
	},
	{
		.name = "Shopify",
		.query = "shopify",
		.url = "https://privacy.shopify.com/dsr_submission/subject_types?selected=erasure",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Go to the linked URL and follow the steps to send a data deletion request. You may be asked to provide additional details at some point."
	},
	{
		.name = "Shopper+",
		.query = "shopper",
		.url = "https://www.shopperplus.ca/policies/Shopper+%20Account%20Removal%20Policy",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the app and select Account Settings. Navigate to Account Information. Select 'Delete My Account'."
	},
	{
		.name = "Shorte.st",
		.query = "shortest",
		.url = "https://shorte.st/profile/remove-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Log in to your account, access the account deletion link specified above, access the confirmation link received by email and select 'Remove Account'. Note: Your created links will remain working and you will not be able to use the same email for creating a new account. So remember to manually delete all your created links first."
	},
	{
		.name = "Shotgun.live",
		.query = "shotgunlive",
		.url = "https://support.shotgun.live/hc/en-us/articles/360016912580--I-want-to-delete-my-account-",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You need to download the mobile app to delete your account. See the link for instructions on how to do it."
	},
	{
		.name = "showRSS",
		.query = "showrss",
		.url = "https://showrss.info/edit/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Shpock",
		.query = "shpock",
		.url = "https://en.shpock.com",
		.email = "mailto:support@shpock.com",
		.difficulty = 0x1000,
		.notes = "Requires e-mailing support to delete the account."
	},
	{
		.name = "Shutterfly",
		.query = "shutterfly",
		.url = "https://www.shutterfly.com/delete-account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and request account deletion. You will receive an email when your request is completed."
	},
	{
		.name = "Shutterstock",
		.query = "shutterstock",
		.url = "https://www.shutterstock.com/account/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your [account details](https://www.shutterstock.com/account/profile) and press [Delete my account](https://accounts.shutterstock.com/remove) and confirm."
	},
	{
		.name = "Sibra",
		.query = "sibra",
		.url = "https://boutique.sibra.fr/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Nothing says how to do it and the support does not respond."
	},
	{
		.name = "SigFig",
		.query = "sigfig",
		.url = "https://support.sigfig.com/hc/en-us/articles/202586434-How-do-I-completely-delete-my-account-",
		.email = "mailto:support@sigfig.com",
		.difficulty = 0x1000,
		.notes = "Contact customer service by email and request deletion."
	},
	{
		.name = "Signal",
		.query = "signal",
		.url = "https://support.signal.org/hc/en-us/articles/360007061192-Delete-Account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In Signal, tap your 'profile' -> 'Account' -> 'Delete account'. And Enter your Signal number, Tap 'Delete account'."
	},
	{
		.name = "Similarweb",
		.query = "similarweb",
		.url = "https://account.similarweb.com/user-details",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In your Similarweb account settings, Within the user profile, click Delete Account, then click the 'Delete Account' button."
	},
	{
		.name = "Simple",
		.query = "simple",
		.url = "https://help.simple.life/en/articles/9887975-how-to-delete-your-account-or-request-data-deletion",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, open your profile and then delete your account. Even better use their form at delete.simple.life."
	},
	{
		.name = "Simple Machines",
		.query = "simple machines",
		.url = "https://simplemachines.org/community/index.php?action=profile;area=deleteaccount",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Enter your password to have your account marked for deletion by an administrator or moderator. You can do this for any other Simple Machines forums if the forum administrator allows."
	},
	{
		.name = "SimpleLogin",
		.query = "simplelogin",
		.url = "https://app.simplelogin.io/dashboard/setting",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to \"Delete Account -> Yes, delete my account\"."
	},
	{
		.name = "Simplenote",
		.query = "simplenote",
		.url = "https://app.simplenote.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, go to account settings and click 'Delete Account'. Confirm by ticking the box, entering your password and click 'Delete Account'."
	},
	{
		.name = "SimplePlanes",
		.query = "simpleplanes",
		.url = "https://www.simpleplanes.com/Account/DeleteAccount",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, open your profile page and follow these steps: click 'Manage Account' -> click 'Close Account' -> click 'OK' -> type 'CLOSE' -> click 'CLOSE' -> click 'OK'. Using the link from here also skips every step before \"type 'CLOSE'\"."
	},
	{
		.name = "Simplified",
		.query = "simplified",
		.url = "https://app.simplified.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the 'Danger Zone' and then click 'Delete Account'."
	},
	{
		.name = "Simply Plural",
		.query = "simply plural",
		.url = "https://app.apparyllis.com/#/Settings/Account/UserSettings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your settings page, go to \"Account\" -> \"Account Settings\", Scroll down to \"Danger zone\" and click on \"Delete Account\""
	},
	{
		.name = "SimplyPrint",
		.query = "simplyprint",
		.url = "https://simplyprint.io/panel/user_settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Under your user settings, scroll down to the buttom and click \"Delete account\""
	},
	{
		.name = "The Sims Resource",
		.query = "the sims resource",
		.url = "https://help.thesimsresource.com/article/14-how-do-i-delete-my-account",
		.email = "mailto:support@thesimsresource.com",
		.difficulty = 0x1000,
		.notes = "Since there is no button, you must contact them through a support ticket. Subsequently, after inclusion in their ticket system, they will resolve the matter soon; however, this may differ from one to another."
	},
	{
		.name = "SitePoint",
		.query = "sitepoint",
		.url = "https://www.sitepoint.com/community/faq/#leaving",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = NULL
	},
	{
		.name = "Sketchfab",
		.query = "sketchfab",
		.url = "https://sketchfab.com/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You have to click on the button 'Delete your account', select the 'consent to delete all content' and confirm."
	},
	{
		.name = "SketchUp",
		.query = "sketchup",
		.url = "https://privacy.sketchup.com/email-form",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill in the details requested by the linked form (First and Last name, e-Mail address, and \"Please delete my SketchUp account\" as comment), then click \"Submit\"."
	},
	{
		.name = "Skiddle",
		.query = "skiddle",
		.url = "https://www.skiddle.com/skiddlepeople/removeaccount.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Follow the link above, or alternatively check the bottom of the notification settings page."
	},
	{
		.name = "Skillshare",
		.query = "skillshare",
		.url = "https://preferences.skillshare.com/privacy",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Fill out the Privacy Request Form and select Delete under Type of Request."
	},
	{
		.name = "Skinbaron",
		.query = "skinbaron",
		.url = "https://skinbaron.de/en/profile/tickets",
		.email = "mailto:info@skinbaron.de",
		.difficulty = 0x1000,
		.notes = "Create a ticket on the website, or email them."
	},
	{
		.name = "Skoob",
		.query = "skoob",
		.url = "https://www.skoob.com.br/usuario/excluir/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Skool",
		.query = "skool",
		.url = "https://www.skool.com/privacy?rt=udt",
		.email = "mailto:help@skool.com",
		.difficulty = 0x800,
		.notes = "Use the link to submit a request to delete your account permanently. You will receive a confirmation mail shortly. Note that this will not cancel payments processed outside of the platform. Best to contact the group admins for further assistance."
	},
	{
		.name = "SkySilk",
		.query = "skysilk",
		.url = "https://help.skysilk.com/support/solutions/articles/9000106317-how-do-i-deactivate-my-account-",
		.email = NULL,
		.difficulty = 0x4000,
		.notes = "Once you [deactivate your account](https://www.skysilk.com/settings/deactivation) you can request a GDPR delete by submitting the request in a [support ticket](https://help.skysilk.com/support/tickets/new). A GDPR delete will erase 100% of your personal information that you provided when you created an account with them."
	},
	{
		.name = "Slack",
		.query = "slack",
		.url = "https://my.slack.com/account/settings",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "If you are the Slack team's primary owner you will need to either delete the team or transfer its ownership before deleting your account. If you're not, you'll need to request a deletion from the workspace admin."
	},
	{
		.name = "Slashdot",
		.query = "slashdot",
		.url = "https://slashdot.org/faq",
		.email = "mailto:feedback@slashdot.org?subject=Delete%20Account&body=I%20want%20to%20permanently%20delete%20my%20account%20from%20Slashdot",
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "SleeveYourGames",
		.query = "sleeveyourgames",
		.url = "https://www.sleeveyourgames.com/feedback",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Write on the FAQ requesting for deletion, they will reply asking which e-mail you used to sign-up, then you provide and it gets deleted."
	},
	{
		.name = "Slideshare",
		.query = "slideshare",
		.url = "https://support.scribd.com/hc/en-us/articles/360000894843-Deleting-your-account#h_01HBVYCPRH4GEMX24PD473BHP8",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Follow the instructions from this link."
	},
	{
		.name = "Slowly",
		.query = "slowly",
		.url = "https://help.slowly.app/hc/en-us/articles/115001828351-How-do-I-delete-my-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "This procedure is not available in the web version, but only in the app."
	},
	{
		.name = "SmallPDF",
		.query = "smallpdf",
		.url = "https://smallpdf.com/profile",
		.email = "mailto:support@smallpdf.com?subject=Delete%20Account&body=Hi%2C%20I%20want%20to%20permanently%20delete%20my%20account%20from%20SmallPDF%2C%20thanks",
		.difficulty = 0x1000,
		.notes = "The only way to delete your account is by emailing their customer support team."
	},
	{
		.name = "SmartRecruiters",
		.query = "smartrecruiters",
		.url = "https://help.smartrecruiters.com/Getting_Started/User_settings/How_do_I_close_my_user_account%3F",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can deactivate your user account, but you cannot delete it."
	},
	{
		.name = "Smartsheet",
		.query = "smartsheet",
		.url = "https://app.smartsheet.com/b/form/599b304161d34e29baa9c5fb985c4333",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "An account deletion request needs to be sent to customer services via a privacy request form found in their privacy policy."
	},
	{
		.name = "SmartyPig",
		.query = "smartypig",
		.url = "https://www.smartypig.com/faqs",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to contact their customer support team."
	},
	{
		.name = "Smodin",
		.query = "smodin",
		.url = "https://smodin.io/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the 'Subscriptions' tab at the top left of the page. Then scroll down and click the 'Delete Account' button at the very bottom of the page and select a checkbox. Your account will be deleted after 5 days"
	},
	{
		.name = "Smoothcomp",
		.query = "smoothcomp",
		.url = "https://support.smoothcomp.com/article/193-please-remove-delete-hide-my-account-gdpr",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on your name at the top right of the website, which opens a dropdown. Then, click Settings and click the Delete Account button at the bottom of the page."
	},
	{
		.name = "SMSPool",
		.query = "smspool",
		.url = "https://www.smspool.net/my/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In order to delete your account you have to head over to the settings page and click on the 'Delete Account' button after filling in your password. Keep in mind that the site does not allow you to delete the account if a card transaction has been made within the last 14 days."
	},
	{
		.name = "Smule",
		.query = "smule",
		.url = "https://smule.zendesk.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Create a ticket, select 'Remove Smule Profile', fill in the necessary details and tick the boxes. Make sure to remove subscriptions from the required services too."
	},
	{
		.name = "Snapchat",
		.query = "snapchat",
		.url = "https://accounts.snapchat.com/accounts/delete_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Enter username and password and click 'Delete'."
	},
	{
		.name = "Snapfish",
		.query = "snapfish",
		.url = "https://support.snapfish.com/hc/en-us/articles/360008146353-Delete-your-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to open a request with customer service to delete your account."
	},
	{
		.name = "Snappa",
		.query = "snappa",
		.url = "https://snappa.com/app/account-settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'Delete Account' -> Click 'Delete' to confirm."
	},
	{
		.name = "SNCF",
		.query = "sncf",
		.url = "https://www.sncf-connect.com/en-en/help/your-customer-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Once logged into your customer account, you can take the request by clicking \"delete my account\", in the bottom of your homepage, then follow the instructions."
	},
	{
		.name = "Snov.io",
		.query = "snovio",
		.url = "https://app.snov.io/account#/security-settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click \"Delete Account\" and follow the instructions"
	},
	{
		.name = "Social Blade",
		.query = "social blade",
		.url = "https://socialblade.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You can delete your account by clicking the red 'DELETE YOUR ACCOUNT' button at the very bottom of the page."
	},
	{
		.name = "Sofascore",
		.query = "sofascore",
		.url = "https://sofascore.helpscoutdocs.com/article/55-how-to-delete-account?lng=en",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "SoftCreatR Media",
		.query = "softcreatr media",
		.url = "https://www.softcreatr.com/account-management/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Your user account will be deleted after 7 days if you do not cancel the process beforehand. Created content, such as forum posts, will not be deleted, but your username will be anonymized and protected from re-registration for 363 days."
	},
	{
		.name = "solo.to",
		.query = "soloto",
		.url = "https://solo.to/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom of the Account page linked and click the 'Delete Account' button."
	},
	{
		.name = "SoloLearn",
		.query = "sololearn",
		.url = "https://www.sololearn.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to Profile -> Settings -> Delete account"
	},
	{
		.name = "Sonder",
		.query = "sonder",
		.url = "https://www.sonder.com/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "On the app, tap the 'profile' button, go into settings then 'Request account deletion'. State the reason and agree everything will be deleted and that should be it. The option to delete your account does not appear on the website."
	},
	{
		.name = "Songkick",
		.query = "songkick",
		.url = "https://www.songkick.com/settings/account-settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Sonix",
		.query = "sonix",
		.url = "https://my.sonix.ai/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Sonos",
		.query = "sonos",
		.url = "https://www.sonos.com/en-us/legal/privacy#legal-privacy-contact",
		.email = "mailto:privacy@sonos.com",
		.difficulty = 0x1000,
		.notes = "In order to delete your account you have to email them"
	},
	{
		.name = "Sony",
		.query = "sony",
		.url = "https://www.sony-europe.com/mysony/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your profile, then to \"My Account Details\", scroll down and click \"Delete Account\", at the bottom of the page."
	},
	{
		.name = "Soulseek",
		.query = "soulseek",
		.url = "https://www.slsknet.org/news/node/748",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Your username is deleted automatically if you haven't logged into your account for 30 days."
	},
	{
		.name = "SoundCloud",
		.query = "soundcloud",
		.url = "https://soundcloud.com/settings/account#delete-user",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Soundtrap",
		.query = "soundtrap",
		.url = "https://support.soundtrap.com/hc/en-us/articles/360033406534-Delete-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "If you have a subscription, you must cancel it before deleting your account. The only way to delete your account is by contacting support, which you can do using the \"Submit a request\" button at the top of their support site."
	},
	{
		.name = "SourceForge",
		.query = "sourceforge",
		.url = "https://sourceforge.net/auth/disable/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Data created by the user such as posts and tickets will remain and be attributed to the account, even if deleted. The username will not become available."
	},
	{
		.name = "Sourcegraph",
		.query = "sourcegraph",
		.url = "https://sourcegraph.com/docs/sourcegraph-accounts#how-to-delete-accounts-or-unlink-social-sign-ins",
		.email = "mailto:support@sourcegraph.com",
		.difficulty = 0x1000,
		.notes = "Contact Sourcegraph support via email using your primary email (shown at [accounts.sourcegraph.com](https://accounts.sourcegraph.com) when signed in)."
	},
	{
		.name = "Sourcery.ai",
		.query = "sourceryai",
		.url = "https://sourcery.ai/privacy/",
		.email = "mailto:info@sourcery.ai",
		.difficulty = 0x1000,
		.notes = "Contact support by email and request account deletion."
	},
	{
		.name = "South Plus",
		.query = "south plus",
		.url = "https://south-plus.net/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = NULL
	},
	{
		.name = "SpaceHey",
		.query = "spacehey",
		.url = "https://spacehey.com/deleteaccount",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the linked page select 'Delete this Account'."
	},
	{
		.name = "SPC",
		.query = "spc",
		.url = "https://www.spccard.ca/privacy-policy",
		.email = "mailto:privacy@spccard.ca",
		.difficulty = 0x2000,
		.notes = "According to their privacy policy, emailing should be sufficient for data deletion, but they are unresponsive."
	},
	{
		.name = "Speaker Deck",
		.query = "speaker deck",
		.url = "https://speakerdeck.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom of page and click on the 'Delete my account and all of my presentations'."
	},
	{
		.name = "speedrun.com",
		.query = "speedruncom",
		.url = "https://www.speedrun.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the linked page open the Delete tab, confirm your password, check 'Delete all runs' and 'Delete all forum posts', and select 'Delete account'."
	},
	{
		.name = "Speedtest",
		.query = "speedtest",
		.url = "https://help.speedtest.net/hc/en-us/articles/360035679994-How-do-I-delete-my-data-GDPR-",
		.email = "mailto:support@speedtest.net",
		.difficulty = 0x1000,
		.notes = "The only way to delete your speedtest account is by emailing their support team."
	},
	{
		.name = "Sphere Online Judge (SPOJ)",
		.query = "sphere online judge spoj",
		.url = "https://www.spoj.com/legal-tos/#:~:text=In%20order%20to%20remove%20the,and%20file%20a%20proper%20motion.",
		.email = "mailto:contact@sphere-research.com",
		.difficulty = 0x1000,
		.notes = "The only way to delete the account is by emailing the Operator, as per section 3.19 of their TOS."
	},
	{
		.name = "Spieletipps",
		.query = "spieletipps",
		.url = "https://www.spieletipps.de/m/resign/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Confirm password and click the delete button."
	},
	{
		.name = "SpigotMC",
		.query = "spigotmc",
		.url = "https://www.spigotmc.org/threads/delete-account.205176/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can't delete your account you can only deactivate your account. Go for this to your profile and click the report button on your profile and write delete me and wait."
	},
	{
		.name = "Splice",
		.query = "splice",
		.url = "https://splice.com/profile/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select 'Delete account' at the bottom of the page."
	},
	{
		.name = "Splitser",
		.query = "splitser",
		.url = "https://app.splitser.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select 'Close account' and press 'OK' in the popup."
	},
	{
		.name = "Splitwise",
		.query = "splitwise",
		.url = "https://secure.splitwise.com/account/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Sporcle",
		.query = "sporcle",
		.url = "https://www.sporcle.com/settings/account-info/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page, scroll to the bottom and click 'Want to delete your account? Click Here' and confirm."
	},
	{
		.name = "Sportsbet",
		.query = "sportsbet",
		.url = "https://helpcentre.sportsbet.com.au/hc/en-us/articles/115007208487-How-do-I-close-my-account-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "On the bottom of the page, download and fill the Self Exclusion Form."
	},
	{
		.name = "Sportsbet.io",
		.query = "sportsbetio",
		.url = "https://sportsbet.io/help-centre/help-getting-started/help-account/how-do-i-close-my-account",
		.email = "mailto:hello@sportsbet.io",
		.difficulty = 0x1000,
		.notes = "Send an e-mail to them, from the registered e-mail, requesting the account exclusion."
	},
	{
		.name = "Spotify",
		.query = "spotify",
		.url = "https://support.spotify.com/close-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "1. Cancel your subscription at https://www.spotify.com/us/account/subscription/ 2. Public playlists will be anonymised, delete any playlists you want. 3. Go to the provided link, Account -> I want to close my account and follow the instructions. The account can still be restored within 7 days of the request."
	},
	{
		.name = "Spreadshirt",
		.query = "spreadshirt",
		.url = "https://my.spreadshirt.com/account/contact",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'Delete account' on the page, confirm with your password."
	},
	{
		.name = "SquadJobs",
		.query = "squadjobs",
		.url = "https://squadjobs.com/help",
		.email = "mailto:support@squadjobs.com",
		.difficulty = 0x1000,
		.notes = "You need to e-mail them to request for account deletion."
	},
	{
		.name = "Square",
		.query = "square",
		.url = "https://app.squareup.com/dashboard/shifts/settings/clock-in-out",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Square Cash",
		.query = "square cash",
		.url = "https://cash.me/login?return_to=support",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Login into the support page and email customer support asking to delete your account."
	},
	{
		.name = "Squarespace",
		.query = "squarespace",
		.url = "https://account.squarespace.com/settings/security/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Stack Overflow / Stack Exchange Accounts",
		.query = "stack overflow stack exchange accounts",
		.url = "https://stackoverflow.com/help/deleting-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You can delete using the provided link, but then you have to [submit an Erase my account request](https://stackoverflow.com/legal/gdpr/request) to have the profile fully deleted and the data removed or anonymized in the network."
	},
	{
		.name = "StackBlitz",
		.query = "stackblitz",
		.url = "https://stackblitz.com/settings/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In the linked settings page, select \"Delete my account\" at the very bottom, then click on \"Permanently delete my account and X project(s).\" (\"X\" is the number of projects in the account at the time of deletion.)"
	},
	{
		.name = "Stackhero",
		.query = "stackhero",
		.url = "https://www.stackhero.io/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Click the lower right position messenger to request for account deletion."
	},
	{
		.name = "Stake",
		.query = "stake",
		.url = "https://trading.hellostake.com/platform/update-profile/close-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Stan",
		.query = "stan",
		.url = "https://help.stan.com.au/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Use the Stan Help Centre to submit a request, choose 'Account and Billing' then 'Cancelling my Stan account' and fill out the remaining fields."
	},
	{
		.name = "Standard Notes",
		.query = "standard notes",
		.url = "https://standardnotes.com/reset",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Star't",
		.query = "start",
		.url = "https://www.star-t.fr/account/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your profile page, scroll down, click on \"Supprimer mon compte\" then click on \"Oui, supprimer\"."
	},
	{
		.name = "Starbucks",
		.query = "starbucks",
		.url = "https://www.starbucks.com/terms/privacy-policy/#contact_us",
		.email = "mailto:privacy@starbucks.com?subject=Account%20Deletion%20Request&body=I%20request%20deletion%20of%20my%20Starbucks%20account.",
		.difficulty = 0x1000,
		.notes = "US and Canadian users: Select the correct privacy form to submit your request. All others must send an email."
	},
	{
		.name = "Stardock",
		.query = "stardock",
		.url = "https://stardock.atlassian.net/servicedesk/customer/portal/4/group/14/create/10143",
		.email = "mailto:support@stardock.com?subject=Right%20to%20Erasure%20Request&body=I%20wish%20to%20exercise%20my%20right%20to%20erasure%20under%20data%20protection%20law.%0A%0A%5BGive%20details%20of%20what%20personal%20data%20you%20want%20erased/deleted.%5D",
		.difficulty = 0x1000,
		.notes = "Fill out the form or send an email (from the same email as your account)."
	},
	{
		.name = "Startnext",
		.query = "startnext",
		.url = "https://www.startnext.com/help/FAQ.html#q74",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your profile settings, scroll down, and click the 'Delete profile' link. It may be possible that your account cannot be deleted for a number of reasons, such as: you have a project in the starting, funding, or end phase; you have an active partner page; you supported a project that is still in the funding phase and we have not yet received your payment or your payment has not been returned to you."
	},
	{
		.name = "STAS - Agence en Ligne",
		.query = "stas agence en ligne",
		.url = "https://www.reseau-stas.fr/fr/nous-contacter/14/Contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to contact support to delete your account."
	},
	{
		.name = "statcounter",
		.query = "statcounter",
		.url = "https://statcounter.com/close_account.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the link, fill in your login info and confirm. It's reversible for 30 days, until your data gets purged."
	},
	{
		.name = "Statista",
		.query = "statista",
		.url = "https://www.statista.com/profile/delete/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "StatusCake",
		.query = "statuscake",
		.url = "https://app.statuscake.com/User.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Under 'My Account' scroll down and click the red button 'Delete Your Account'"
	},
	{
		.name = "StatusInvest",
		.query = "statusinvest",
		.url = "https://statusinvest.com.br/usuario/configuracao",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your account configurations and click the button to permanently delete. You have 15 days to go back and ask for it to be restored, after that it is deleted."
	},
	{
		.name = "Steam",
		.query = "steam",
		.url = "https://help.steampowered.com/en/wizard/HelpDeleteAccount",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "First you must verify ownership of the account, then Steam Support will respond to confirm your identification. After it is confirmed your account will be locked and then deleted in 30 days. You can cancel the deletion by contacting Steam Support during the 30 days. You can't reuse your account name."
	},
	{
		.name = "SteamDB",
		.query = "steamdb",
		.url = "https://steamdb.info/signout/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Enable the 'Delete my account and all of its data' tick box then press 'Delete my SteamDB account'"
	},
	{
		.name = "SteelSeries",
		.query = "steelseries",
		.url = "https://steelseries.com/dashboard/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Just click delete my account button on the my profile page."
	},
	{
		.name = "StepMap",
		.query = "stepmap",
		.url = "https://www.stepmap.de/profile.html#profile_delete",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "StickK",
		.query = "stickk",
		.url = "https://stickk.zendesk.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "From the dropdown select \"I'd like to request to end my account\" and then fill in and submit the form."
	},
	{
		.name = "Stocard",
		.query = "stocard",
		.url = "https://stocardapp.com/privacy",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "From the app: Account -> Manage Account -> Delete account."
	},
	{
		.name = "Stock Informer",
		.query = "stock informer",
		.url = "https://www.stockinformer.com/myprofile.aspx",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'Deactivate Account' at the bottom of the page."
	},
	{
		.name = "Storenvy",
		.query = "storenvy",
		.url = "https://www.storenvy.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in, then navigate to 'Account Settings' -> 'Profile'. Scroll to the bottom and click 'Delete my Storenvy store & account'. Click 'OK' when prompted to confirm."
	},
	{
		.name = "Storj",
		.query = "storj",
		.url = "https://docs.storj.io/dcs/billing-payment-and-accounts-1/closing-an-account/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Before requesting account deletion, make sure you have deleted all Buckets, Objects and Access Grants. These can all be found on the main dashboard after logging in. You'll have to create another account for their helpdesk ticket system, but after contacting support, they will delete both the main Storj account as well as the Helpdesk one."
	},
	{
		.name = "Strava",
		.query = "strava",
		.url = "https://www.strava.com/athlete/delete_your_account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Account deletion is irreversible: Your account and data will be permanently deleted, and you will be removed from all clubs, heatmaps, challenges and leaderboards. Some data you created for the community, like public segments or routes, may remain on Strava."
	},
	{
		.name = "Strawpoll",
		.query = "strawpoll",
		.url = "https://strawpoll.com/account/settings/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "All of your polls will be eliminated"
	},
	{
		.name = "Streamable",
		.query = "streamable",
		.url = "https://support.streamable.com/contact-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to contact support in order to delete your account."
	},
	{
		.name = "StreamLabs",
		.query = "streamlabs",
		.url = "https://getonstream.com/how-to-delete-a-streamlabs-account-easy-guide/",
		.email = "mailto:support@streamlabs.com?subject=REQUEST%20TO%20DELETE%20MY%20ACCOUNT",
		.difficulty = 0x1000,
		.notes = "Contact customer support via email, set subject line to \"REQUEST TO DELETE MY ACCOUNT\". You will soon receive an email informing you about need to appeal on Logitech's website in order to fully delete your account with a link provided. Here you will need to enter your name, email, choose \"Data privacy request\" for a topic and say that you want to delete your Streamlabs account in the textbox below"
	},
	{
		.name = "StreamYard",
		.query = "streamyard",
		.url = "https://streamyard.com/account/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the delete account button, confirm and enter the 6-digit code sent to your e-mail to finalize"
	},
	{
		.name = "Stripe",
		.query = "stripe",
		.url = "https://dashboard.stripe.com/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Account owners only, not team members can delete the account. Balances and pending invoices all need to be resolved before the account is permanently closed. Cannot be reversed."
	},
	{
		.name = "Stronghold Kingdoms",
		.query = "stronghold kingdoms",
		.url = "https://login.strongholdkingdoms.com/ajaxphp/main_ajax.php?event=ChangeGDPR&status=0",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Log in, select the option view my account, a dialog will have delete my account button which is then confirmed by the email. After confirming, your GDPR request will takes 2 weeks to be completed. You are able to cancel this deletion request any time within that 2 week processing period by clicking the link below in the confirmation email."
	},
	{
		.name = "StudentBeans",
		.query = "studentbeans",
		.url = "https://accounts.studentbeans.com/us/my/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Open account settings, click on 'Delete Account', provide a reason, and confirm you'd like to delete it."
	},
	{
		.name = "Studio",
		.query = "studio",
		.url = "https://studio.com/settings?page=advanced",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'Delete My Account' and confirm you'd like to delete it."
	},
	{
		.name = "Studios New York",
		.query = "studios new york",
		.url = "https://www.studiosnewyork.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login and navigate to Your Profile by clicking on your name in the header. Scroll down to the bottom of the page and click 'Remove My Profile'."
	},
	{
		.name = "StudyMode",
		.query = "studymode",
		.url = "https://www.studymode.com/about-us/contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to contact support in order to delete your account."
	},
	{
		.name = "StumbleUpon",
		.query = "stumbleupon",
		.url = "https://www.stumbleupon.com/settings/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You can reactivate within 14 days. After that the account is deleted."
	},
	{
		.name = "Subaru Maps",
		.query = "subaru maps",
		.url = "https://subaru-maps.com/#/users/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the \"Delete User\" button in the bottom-right corner."
	},
	{
		.name = "SubMeNow",
		.query = "submenow",
		.url = "https://www.submenow.com/account.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'Close Account' then click 'YES, close my Account' to confirm."
	},
	{
		.name = "SulAmérica",
		.query = "sulamerica",
		.url = "https://saude.sulamericaseguros.com.br/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "They claim nothing can be deleted."
	},
	{
		.name = "Super Domínios",
		.query = "super dominios",
		.url = "https://superdominios.org/contato/",
		.email = "mailto:suporte@superdominios.org",
		.difficulty = 0x1000,
		.notes = "Use the contact form. If you prefer, you can also request deletion of the account via email."
	},
	{
		.name = "Super Tux Kart",
		.query = "super tux kart",
		.url = "https://online.supertuxkart.net/users.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Enter your passwords in the account deletion page."
	},
	{
		.name = "Supercell ID",
		.query = "supercell id",
		.url = "https://help.supercellsupport.com/clash-of-clans/en/articles/gdpr-request-deletion-of-your-personal-data.html",
		.email = "mailto:legal-requests@supercell.com",
		.difficulty = 0x2000,
		.notes = "Even after \"deleting\" your account, Supercell will still keep your personal information saved on its servers to, according to them, \"business interests\"."
	},
	{
		.name = "SurfEasy",
		.query = "surfeasy",
		.url = "https://support.surfeasy.com/hc/en-us/articles/360000937226-What-can-I-request-under-the-GDPR-",
		.email = "mailto:gdpr@surfeasy.com",
		.difficulty = 0x1000,
		.notes = "Send an email from the address associated with your account. It takes up to 30 days for the account to be removed and data deleted."
	},
	{
		.name = "Surfshark",
		.query = "surfshark",
		.url = "https://my.surfshark.com/account/delete",
		.email = "mailto:support@surfshark.com",
		.difficulty = 0x400,
		.notes = "You can only delete your account if you click on the link provided."
	},
	{
		.name = "SurveyMonkey",
		.query = "surveymonkey",
		.url = "https://www.surveymonkey.com/user/account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom of the page and click 'Permanently delete account'. After reviewing the information, click all checkboxes and enter your password. Click 'Yes, delete this account' to confirm.The account and questionnaire data will be definitively excluded within 90 days."
	},
	{
		.name = "Surveytime",
		.query = "surveytime",
		.url = "https://surveytime.io/privacy-policy",
		.email = "mailto:tommy@surveytime.io",
		.difficulty = 0x800,
		.notes = "You have to mail them requesting deletion or tap the \"Delete your account\" button in the Mobile App Settings screen."
	},
	{
		.name = "Svbtle",
		.query = "svbtle",
		.url = "https://svbtle.com/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the 'Delete Account' link. After 30 days the data is irreversible to retrieve."
	},
	{
		.name = "Swagbucks",
		.query = "swagbucks",
		.url = "https://www.swagbucks.com/account/settings#tab=account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Use the 'Cancel My Account' link on your Account Settings page. Requires email confirmation."
	},
	{
		.name = "Swappa.com",
		.query = "swappacom",
		.url = "https://swappa.com/my/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom of the page and click 'Delete Account'. Confirm the action by typing \"I understand\" in the text box."
	},
	{
		.name = "Swift",
		.query = "swift",
		.url = " https://privacyportal.onetrust.com/webform/068883cc-1dae-4395-abfe-6eba2f29de47/d962e88c-edab-4c51-8428-9030bbaf552f",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "The request to remove your account is made via a form, in which you need to fill in some information and provide a valid ID document. [Swift's privacy policy](https://www.swift.com.br/Institucional/politica-privacidade\" target=\"_blank)"
	},
	{
		.name = "Swiggy",
		.query = "swiggy",
		.url = "https://swiggy.com",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Despite their [privacy policy](https://www.swiggy.com/privacy-policy\" target=\"_blank) stating that account deletion is possible, their response to such a request was that \"there is no way to delete/erase your order history, and personal information.\""
	},
	{
		.name = "SwissPass / SBB CFF FFS",
		.query = "swisspass sbb cff ffs",
		.url = "https://www.swisspass.ch/kunde/logindaten?lang=en#kontoLoeschen",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You can delete your customer account on swisspass.ch under \"My account\", \"Login data\"."
	},
	{
		.name = "Sync.com",
		.query = "synccom",
		.url = "https://cp.sync.com/account/info",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page. Scroll to the bottom of the page and click 'Delete account'. Select a reason for deleting and type a brief description of why."
	},
	{
		.name = "Syncfusion",
		.query = "syncfusion",
		.url = "https://www.syncfusion.com/account/my-profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In \"My Profile Page\", click on \"Delete Account\" link on the left side and then the \"Delete Account\" button."
	},
	{
		.name = "Synchro Mobilités",
		.query = "synchro mobilites",
		.url = "https://start.synchro.grandchambery.fr/fr/compte/informations",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your account information page, click on \"Supprimer mon compte\", confirm your email address and your password, and click on \"Supprimer mon compte\"."
	},
	{
		.name = "Synology",
		.query = "synology",
		.url = "https://account.synology.com/en-us/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, go to profile. Scroll to the bottom and click on the \"Proceed\" link. Type your password, check the checkbox and click on the next button. Finally, choose a reason and click on \"Delete Account\". Your account will be deleted in 10 days."
	},
	{
		.name = "T-Mobile",
		.query = "tmobile",
		.url = "https://privacyportal-t-mobile.my.onetrust.com/webform/d4a925f0-4ebf-40ba-817b-bccc309e602f/7831d667-1ebc-4b1e-a941-e545cb0d0523",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You will need to provide proof of identity such as a passport or drivers license and verify the phone number associated with your T-Mobile ID. This will not delete active service plans if you have any."
	},
	{
		.name = "T2C Alertes",
		.query = "t2c alertes",
		.url = "https://www.t2c.fr/formulaire/nous-contacter",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to contact support to delete your account. Send them your name, surname, email address, phone number, and home address."
	},
	{
		.name = "T2C Boutique",
		.query = "t2c boutique",
		.url = "https://eboutique.smtc-clermont.fr/en/account/informations",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your account information page, click on \"Supprimer mon compte\", confirm your email address and your password, and click on \"Supprimer mon compte\"."
	},
	{
		.name = "Tablondeanuncios.com",
		.query = "tablondeanuncioscom",
		.url = "https://www.tablondeanuncios.com/mis-anuncios/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, go to Opciones, click Eliminar cuenta. Confirm by clicking I want to delete my account. Then, your account and your classified ads will be deleted."
	},
	{
		.name = "Tabnine",
		.query = "tabnine",
		.url = "https://tabnine.com",
		.email = "mailto:support@tabnine.com?subject=Account%20Deletion&body=Hello.%20Please%20delete%20my%20Tabnine%20account.",
		.difficulty = 0x1000,
		.notes = "The only way to delete your account is to send a deletion request to the support using the email which your account is registered to."
	},
	{
		.name = "TAC Mobilités",
		.query = "tac mobilites",
		.url = "https://www.tac-mobilites.fr/account/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your profile page, scroll down, click on \"Supprimer mon compte\" then click on \"Supprimer\"."
	},
	{
		.name = "Tagged",
		.query = "tagged",
		.url = "https://tagged.com/account_cancel.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You can reactivate at any time by logging in to your account."
	},
	{
		.name = "Taiga",
		.query = "taiga",
		.url = "https://tree.taiga.io/user-settings/user-profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in to your user account, go to 'User Settings' and select 'Delete Taiga account' below the save button. Confirm and done."
	},
	{
		.name = "Tailscale",
		.query = "tailscale",
		.url = "https://tailscale.com/kb/1237/delete-tailnet",
		.email = NULL,
		.difficulty = 0x4000,
		.notes = "Tailscale uses Single Sign-on with identity providers. As such, deleting the account can only be done through the identity provider itself. (apparently, accounts made with Passkeys cannot be deleted)"
	},
	{
		.name = "The Takeout",
		.query = "the takeout",
		.url = "https://notice.sp-prod.net/sar/index.html?message_id=539278&account_id=1195&ccpa_type=delete",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form using the email address of your account and click on the verification link that is sent."
	},
	{
		.name = "Tanga",
		.query = "tanga",
		.url = "https://www.tanga.com/support",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Select \"Account issues\" option and fill the form requesting your account deletion."
	},
	{
		.name = "Tango",
		.query = "tango",
		.url = "https://help.tango.me/en/articles/2985296-how-do-i-delete-my-tango-account",
		.email = "mailto:support@tango.me",
		.difficulty = 0x400,
		.notes = "Follow the instructions provided in the article. If you prefer, you can also request deletion of your account via email."
	},
	{
		.name = "Tanki Online",
		.query = "tanki online",
		.url = "https://tankionline.com",
		.email = "mailto:help@tankionline.com?subject=Account%20Deletion%20Request&body=Hi%20there%2C%20I%20request%20to%20remove%20all%20of%20my%20personal%20data%20associated%20with%20my%20account.",
		.difficulty = 0x1000,
		.notes = "You have to contact the support team by mail."
	},
	{
		.name = "Tapas",
		.query = "tapas",
		.url = "https://tapas.io/profile/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom, click \"Delete Account\", and click through the prompts.  You'll need to re-enter your password."
	},
	{
		.name = "TapTap",
		.query = "taptap",
		.url = "https://accounts.taptap.io/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and delete your account. The account will be locked for a week, after which it will be deleted."
	},
	{
		.name = "Target",
		.query = "target",
		.url = "https://www.target.com/ccpa-intake-form",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Select \"Delete your personal info and Target.com account\""
	},
	{
		.name = "targetjobs",
		.query = "targetjobs",
		.url = "https://targetjobs.co.uk/account/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to 'Account Settings' and then click 'Delete Account'."
	},
	{
		.name = "TargetProcess",
		.query = "targetprocess",
		.url = "https://www.targetprocess.com",
		.email = "mailto:support@targetprocess.com",
		.difficulty = 0x1000,
		.notes = "You need to e-mail them to ask for the deletion to be processed."
	},
	{
		.name = "Tastebuds",
		.query = "tastebuds",
		.url = "https://tastebuds.fm/user_deletions/confirm_delete_reason",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "TastyWorks",
		.query = "tastyworks",
		.url = "https://support.tastyworks.com/support/solutions/articles/43000435334-close-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "TCL",
		.query = "tcl",
		.url = "https://www.tcl.com/deleteaccount/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click 'Continue' -> Click 'Register to delete' -> Enter verification code sent to your email -> Click 'Proceed' to confirm deletion."
	},
	{
		.name = "TCL à la demande",
		.query = "tcl a la demande",
		.url = "https://tad.tcl.fr/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your account settings, unroll the \"Personal Data\" Section, and click on \"Delete my Account\"."
	},
	{
		.name = "Teachable",
		.query = "teachable",
		.url = "https://support.teachable.com/hc/en-us/articles/5540634496525-Delete-Your-School-or-Account#Deleteyouruseraccount",
		.email = "mailto:privacy@teachable.com?subject=Account%20Deletion&body=Hello.%20Please%20delete%20my%20Teachable%20account.",
		.difficulty = 0x1000,
		.notes = "You need to submit a deletion request by emailing them from the email address associated with your account."
	},
	{
		.name = "Teachoo",
		.query = "teachoo",
		.url = "https://www.teachoo.com/contact/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You must contact teachoo to remove your account."
	},
	{
		.name = "TeamGantt",
		.query = "teamgantt",
		.url = "https://app.teamgantt.com/admin/account-settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to Account Settings -> Subscription -> Cancel. Click 'Cancel my subscription and delete my data'"
	},
	{
		.name = "Teams",
		.query = "teams",
		.url = "https://account.live.com/closeaccount.aspx",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can't delete your Teams account without deleting your entire Microsoft account. This is also true if you migrated your former Skype account to a Teams account. If you want to delete your entire Microsoft account click on the provided link or follow the instructions [here](https://justdeleteme.xyz/#microsoft)."
	},
	{
		.name = "TeamSpeak",
		.query = "teamspeak",
		.url = "https://support.teamspeak.com/hc/en-us/articles/4408933645201-I-can-t-find-the-option-to-delete-myTeamSpeak-account-How-do-I-do-this-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to contact the support using their contact form."
	},
	{
		.name = "TeamViewer",
		.query = "teamviewer",
		.url = "https://login.teamviewer.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Edit profile (menu item at the top right corner of the page) ->  Delete account"
	},
	{
		.name = "Tebex",
		.query = "tebex",
		.url = "https://server.tebex.io",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact customer support to request account deletion"
	},
	{
		.name = "Technic Platform & Technic Forums",
		.query = "technic platform technic forums",
		.url = "https://forums.technicpack.net/topic/322688-platform-forum-account-deletion-requests",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To delete your forum account reply to the linked topic with the message \"I request that my Technic forum account be deleted.\". To delete your platform account, report yourself with reason \"Other Reason\" and input the message \"I request that my Technic platform account be deleted.\"."
	},
	{
		.name = "TED",
		.query = "ted",
		.url = "https://support.ted.com/hc/en-us/articles/360005310614-TED-Ed-Accounts-and-managing-students",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact the TED support team [via their online contact form](https://support.ted.com/customer/portal/emails/new) for account deletion requests"
	},
	{
		.name = "Teespring",
		.query = "teespring",
		.url = "https://forms.gle/T8LQEYdQrwRoTa469 ",
		.email = "mailto:privacy@spri.ng",
		.difficulty = 0x1000,
		.notes = "Use the form listed above, which can be obtained by: Login -> Chat with bot -> Get form -> Fill out form"
	},
	{
		.name = "Teladoc",
		.query = "teladoc",
		.url = "https://member.teladoc.com/help/contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You must contact your insurance to delete your Teladoc account."
	},
	{
		.name = "Telegram",
		.query = "telegram",
		.url = "https://telegram.org/deactivate",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Open deactivation page. Enter your phone number and one time password sent to your Telegram account. Delete your account then."
	},
	{
		.name = "Telltale",
		.query = "telltale",
		.url = "https://account.telltale.com/account/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "After logging in, navigate to your account's settings, scroll down to the “Delete Account” section. After pressing the “DELETE” button, enter your E-Mail and click the button again to confirm."
	},
	{
		.name = "TEMPO",
		.query = "tempo",
		.url = "https://tempo.eu.com",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "No options to delete the account on website or app. Customer service asks for validation (phone number) but account is not actually deleted."
	},
	{
		.name = "Temu",
		.query = "temu",
		.url = "https://www.temu.com/bgp_close_account.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log into Temu and open your profile. Click on \"Account security\" and then select \"Delete my account\"."
	},
	{
		.name = "Ten Percent Happier",
		.query = "ten percent happier",
		.url = "https://support.tenpercent.com/article/22-how-do-i-delete-my-account",
		.email = "mailto:support@tenpercent.com?subject=Account%20Deletion%20Request&body=I%20would%20like%20to%20delete%20my%20account.",
		.difficulty = 0x1000,
		.notes = "Cancel any subscriptions associated with your account. Then you must send an email to Ten Percent support to have them delete your account. They will delete the account associated with the email address from which you send the request. Once their confirmation email arrives, your credentials will no longer work."
	},
	{
		.name = "Tenor",
		.query = "tenor",
		.url = "https://support.google.com/tenor/answer/10455265?hl=en#zippy=%2Chow-can-i-terminate-my-tenor-account",
		.email = "mailto:support@tenor.com?subject=Account%20Deletion%20Request&body=I%20would%20like%20to%20delete%20my%20account%2C%20with%20login%20XXXXXX%20and%20e-mail%20YYYYYY.",
		.difficulty = 0x1000,
		.notes = "Contact customer support and provide your Tenor username or email address to request for the account to be deleted."
	},
	{
		.name = "Tenso",
		.query = "tenso",
		.url = "https://www.tenso.com/en/inquiry",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "While connected to you account you need to fill the contact form to request the deletion of the account and personal data."
	},
	{
		.name = "Termius",
		.query = "termius",
		.url = "https://account.termius.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to account settings, click 'Delete Account', enter your password, then verify your email address."
	},
	{
		.name = "Terms of Service; Didn't Read",
		.query = "terms of service didnt read",
		.url = "https://edit.tosdr.org/users/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log-in, then go to Menu -> Settings, scroll down and click 'Cancel my account'. Your contributions will stay and will be switched to an anonymous account."
	},
	{
		.name = "TerraCycle",
		.query = "terracycle",
		.url = "https://help.us.terracycle.com/hc/en-us/articles/360060676652-How-can-I-delete-my-account-",
		.email = "mailto:customersupport@terracycle.com",
		.difficulty = 0x1000,
		.notes = "You must contact customer support through email or by phone at +1(866)967-6766."
	},
	{
		.name = "Terraform Cloud",
		.query = "terraform cloud",
		.url = "https://support.hashicorp.com/hc/en-us/articles/1500002617421-Deleting-Terraform-Cloud-Accounts",
		.email = "mailto:tf-cloud@hashicorp.support",
		.difficulty = 0x1000,
		.notes = "You must contact customer support through email. The email must include the email address of the account as well as the account's organization."
	},
	{
		.name = "Tesla",
		.query = "tesla",
		.url = "https://www.tesla.com/support/how-create-or-delete-tesla-account#deleting-your-tesla-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Open the Tesla app, tap the profile picture in the top-right corner -> ‘Account' -> ‘Security and Privacy' and finally ‘Delete Account’."
	},
	{
		.name = "Testbirds",
		.query = "testbirds",
		.url = "https://nest.testbirds.com/faq/category/list#accordion_faq-167",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on your Username -> Settings and Press the 'Delete account' Button on the bottom left, then confirm."
	},
	{
		.name = "Teuxdeux",
		.query = "teuxdeux",
		.url = "https://teuxdeux.com/account/request-delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Check your email. There will be the url for permanently deleting your account."
	},
	{
		.name = "Text.ru",
		.query = "textru",
		.url = "https://text.ru/user/profile/settings/secure",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "TextNow",
		.query = "textnow",
		.url = "https://www.textnow.com/account/new#requestDataDeletionDisclosure",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page to delete your account."
	},
	{
		.name = "textPlus",
		.query = "textplus",
		.url = "https://help.textplus.com/portal/en/kb/articles/how-can-i-delete-my-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Follow the instructions in the support article."
	},
	{
		.name = "Textures.com",
		.query = "texturescom",
		.url = "https://www.textures.com/my-account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "If you want to permanently delete your Textures.com account, go to the [**Delete Account** tab on your account](https://www.textures.com/my-account/delete) fill out your password and press **Delete My Account**."
	},
	{
		.name = "TheHub",
		.query = "thehub",
		.url = "https://thehub.io/contact",
		.email = "mailto:info@thehub.io",
		.difficulty = 0x1000,
		.notes = "You need to send an email to support and request the deletion of your data."
	},
	{
		.name = "Themeplaza",
		.query = "themeplaza",
		.url = "https://themeplaza.art/contact",
		.email = NULL,
		.difficulty = 0x4000,
		.notes = "You need to send a support request through Discord."
	},
	{
		.name = "TheMovieDB",
		.query = "themoviedb",
		.url = "https://www.themoviedb.org/settings/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Press the button to delete the account within 30 seconds after the password confirmation, otherwise you have to reenter your password."
	},
	{
		.name = "Theta TV",
		.query = "theta tv",
		.url = "https://community.theta.tv/general-data-protection-gdpr-data-deletion-requests/",
		.email = NULL,
		.difficulty = 0x4000,
		.notes = "In order to close your account, you must file a GDPR data deletion request to the website."
	},
	{
		.name = "TheTVDB",
		.query = "thetvdb",
		.url = "https://thetvdb.com/dashboard/account/editinfo",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom of the linked page, enter your email address and click 'Delete Account'."
	},
	{
		.name = "Thingiverse",
		.query = "thingiverse",
		.url = "https://support.makerbot.com/s/article/MakerBot-Account-Information",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the profile dropdown in the top right corner, click 'See Profile', click 'Edit profile', then scroll to the bottom of the page and click the red 'DELETE USER' button. This will also delete your MakerBot account."
	},
	{
		.name = "Things",
		.query = "things",
		.url = "https://support.culturedcode.com/customer/en/portal/articles/2803591-deleting-your-account-data",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In the Things app go to Preferences -> Things Cloud and select Edit Account. Then select 'Delete Account'."
	},
	{
		.name = "Threads",
		.query = "threads",
		.url = "https://www.threads.net/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In the app go to your profile, click on the right top corner and go to \"Account -> Deactivate or delete profile -> Delete profile\""
	},
	{
		.name = "Threema",
		.query = "threema",
		.url = "https://myid.threema.ch/revoke",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In the app, go to your ID and select 'Delete ID' at the bottom. Alternatively go to [https://myid.threema.ch/revoke](https://myid.threema.ch/revoke) and remove your ID with your revocation password. If you do not have one, you can only unlink your phone number and mail under [https://myid.threema.ch/unlink](https://myid.threema.ch/unlink)."
	},
	{
		.name = "Thrive Market",
		.query = "thrive market",
		.url = "https://thrivemarket.com/privacy-policy",
		.email = "mailto:help@thrivemarket.com",
		.difficulty = 0x1000,
		.notes = "You may request termination of your account or deletion of certain information by e-mail."
	},
	{
		.name = "Ticketcorner",
		.query = "ticketcorner",
		.url = "https://www.ticketcorner.ch/helpcenter/en/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You cannot currently delete your account via our webshop. We will do this for you. Please send us your message by clicking on the button 'This answer was not helpful'."
	},
	{
		.name = "Ticketmaster",
		.query = "ticketmaster",
		.url = "https://privacyportal.onetrust.com/webform/ba6f9c5b-dda5-43bd-bac4-4e06afccd928/968ed217-e724-4a6b-8bc0-7cb2a2c10c47",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You must submit a request to close your account via the form."
	},
	{
		.name = "TicketWeb",
		.query = "ticketweb",
		.url = "https://help.ticketweb.co.uk/hc/en-gb/articles/360007874593-How-do-I-close-my-Ticketweb-account-",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "TickTick",
		.query = "ticktick",
		.url = "https://help.ticktick.com/articles/7136181511681736704",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Follow the instructions from this link."
	},
	{
		.name = "TIDAL",
		.query = "tidal",
		.url = "https://account.tidal.com/account-deletion",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Navigate to Settings, Manage Account and select Delete account. It is necessary to enter a verification code."
	},
	{
		.name = "TikTok",
		.query = "tiktok",
		.url = "https://www.tiktok.com",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Tap account (with people depicton, on the bottom right edge)->Menu (on top right edge)->Privacy and Settings->Privacy and Safety->Delete Account->Next->Continue->Delete Account."
	},
	{
		.name = "TikTok Developer",
		.query = "tiktok developer",
		.url = "https://developers.tiktok.com/support/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Select \"Support\" as the category and \"Developer Portal\" as the topic."
	},
	{
		.name = "Time and Date",
		.query = "time and date",
		.url = "https://www.timeanddate.com/custom/modify.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom of the linked page, click 'Delete Account' and confirm."
	},
	{
		.name = "Timus Online Judge (TOJ)",
		.query = "timus online judge toj",
		.url = "https://acm.timus.ru/",
		.email = "mailto:timus_support@acm.timus.ru",
		.difficulty = 0x2000,
		.notes = "There is no option to delete accounts. You may try requesting deletion by e-Mailing their Support Team, but keep in mind it seems they don't ever reach out."
	},
	{
		.name = "Tinder",
		.query = "tinder",
		.url = "https://tinder.com/app/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the profile page is a delete account bottom, after clicking on it, you can either hide it or delete your account entirely."
	},
	{
		.name = "TinyLetter",
		.query = "tinyletter",
		.url = "https://app.tinyletter.com/#!/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Tisséo",
		.query = "tisseo",
		.url = "https://moncompte.tisseo.fr/fr/questions-frequentes?question=comment-supprimer-mon-compte",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to send a request to the support"
	},
	{
		.name = "TKirch.dev",
		.query = "tkirchdev",
		.url = "https://tkirch.dev/account-management/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Your account will be deleted after 7 days, if you don't cancel the deletion process before. Created content (such as forum posts) won't be deleted."
	},
	{
		.name = "TLauncher",
		.query = "tlauncher",
		.url = "https://tlauncher.org/en/how-remove-tl-account.html",
		.email = NULL,
		.difficulty = 0x4000,
		.notes = "They say they are working on it but planned to support it in March 2023. Sending an email leads to nothing. Contanting TLauncher administration regarding account deletion and possibly involving your country privacy laws through the Discord server is possible."
	},
	{
		.name = "Today's Wordle",
		.query = "todays wordle",
		.url = "https://todayswordle.net/account/settings/deletion",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked page and click the delete button"
	},
	{
		.name = "Todo Cloud",
		.query = "todo cloud",
		.url = "https://support.appigo.com/support/solutions/articles/4000180942-how-to-delete-my-todo-cloud-account",
		.email = "mailto:support@appigo.com?body=Please%20delete%20my%20account%20and%20the%20data%20associated%20with%20it.",
		.difficulty = 0x1000,
		.notes = "Send an email from the address associated with your account."
	},
	{
		.name = "Todoist",
		.query = "todoist",
		.url = "https://todoist.com/app/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the page is a delete account bottom, after clicking on it, you will need to re-enter your password."
	},
	{
		.name = "Toggl Track",
		.query = "toggl track",
		.url = "https://track.toggl.com/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down the profile page and click 'Close Account'"
	},
	{
		.name = "Tois Bet",
		.query = "tois bet",
		.url = "https://toisbet.com/ptb/contents/self-exclusion",
		.email = "mailto:suporte@toisbet.com",
		.difficulty = 0x1000,
		.notes = "Send an e-mail to them requesting the account exclusion."
	},
	{
		.name = "Tokopedia",
		.query = "tokopedia",
		.url = "https://www.tokopedia.com/help/article/apakah-saya-dapat-menghapus-akun-tokopedia",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Must contact Customer Service. NOTE: Email and mobile number cannot be reused or in other accounts."
	},
	{
		.name = "Toluna",
		.query = "toluna",
		.url = "https://us.toluna.com/contactus",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to fill the form and submit it. After that you need to wait for them to answer to get back to you."
	},
	{
		.name = "TomTom GO",
		.query = "tomtom go",
		.url = "https://help.tomtom.com/hc/en-gb/requests/new?ticket_form_id=360000697820",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill in the form to automatically open a support ticket."
	},
	{
		.name = "Too Good To Go",
		.query = "too good to go",
		.url = "https://space.toogoodtogo.com/privacy",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on Delete your account, enter your email. Then click on the confirmation link in the email. Alternatively, you can delete your account in the app settings."
	},
	{
		.name = "ToolsForImage",
		.query = "toolsforimage",
		.url = "https://www.toolsforimage.com/contact-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "Top Universities",
		.query = "top universities",
		.url = "https://www.topuniversities.com/user/account-details#accountSettings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'Close Your Account' near the bottom of the page and follow the instructions."
	},
	{
		.name = "Topcoder",
		.query = "topcoder",
		.url = "https://www.topcoder.com",
		.email = "mailto:support@topcoder.com",
		.difficulty = 0x2000,
		.notes = "You can't delete your account, but you can contact them via email to deactivate it."
	},
	{
		.name = "Topface",
		.query = "topface",
		.url = "https://topface.com/delete-profile/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Tor Project",
		.query = "tor project",
		.url = "https://trac.torproject.org",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can create an account with your email address only. But you cannot change, close, or delete your account"
	},
	{
		.name = "Torn",
		.query = "torn",
		.url = "https://www.torn.com/preferences.php#tab=accountClosure",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account first before deleting, you will lose all access to the account"
	},
	{
		.name = "Toronto Star",
		.query = "toronto star",
		.url = "https://www.thestar.com/about/privacy-anti-spam-notice-with-privacy-policy-and-terms-of-use-for-google-play-store.html",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "According to their Privacy Policy, you must call customer service at 1-800-279-0181 to request the deletion of your account."
	},
	{
		.name = "Toyota.de",
		.query = "toyotade",
		.url = "https://www.toyota.de/apps/customerportal#/publish/customer_portal_profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, go to your Settings, choose Tab 'Meine Einstellungen' and click on 'Konto löschen'"
	},
	{
		.name = "TP-Link Cloud",
		.query = "tplink cloud",
		.url = "https://account-delete.tplinkcloud.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked form, select 'Continue', enter your account credentials, then select 'Send Verification Email'. Follow the directions in the email that arrives to verify your email. Then return to the form and select 'Verified & Continue'. Finish the confirmation form, select a reason for leaving, then select 'Permanently Delete Account'. Wait for an email confirming the account was deleted."
	},
	{
		.name = "Trabalha Brasil",
		.query = "trabalha brasil",
		.url = "https://www.trabalhabrasil.com.br/fale-conosco",
		.email = "mailto:atendimento@trabalhabrasil.com.br",
		.difficulty = 0x1000,
		.notes = "Send an e-mail to them requesting the account exclusion."
	},
	{
		.name = "The Tracktor",
		.query = "the tracktor",
		.url = "https://thetracktor.com/account/close",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account first. Confirm by ticking 'Close my account' and click 'Close Account'."
	},
	{
		.name = "TradeMe",
		.query = "trademe",
		.url = "https://help.trademe.co.nz/hc/en-us/articles/360007000092#h_01GBNRBS8NG0QNNRWXCV7RVWDS",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Click on the link and ask the staff to delete your account"
	},
	{
		.name = "Trading 212",
		.query = "trading 212",
		.url = "https://app.trading212.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to Settings -> My Account -> Account Details then click 'Close Account'"
	},
	{
		.name = "TradingView",
		.query = "tradingview",
		.url = "https://www.tradingview.com/u/account/#settings-profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account. Click on \"Learn more about Account Deletion\". Press \"Yes, delete account\". Fill in your password"
	},
	{
		.name = "Traduc.com",
		.query = "traduccom",
		.url = "https://traduc.com/users/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account. Click on \"My Account\" then \"My connection information\". Finally click \"Delete my account\""
	},
	{
		.name = "Tragicbeautiful",
		.query = "tragicbeautiful",
		.url = "https://tragicbeautiful.com",
		.email = "mailto:support@tragicbeautiful.com?subject=Hello%0A%2C%20please%20delete%20the%20account%20associated%20to%20this%20email.%20My%20phone%20number%20is%20XXXXXXXX%20and%20I%20would%20like%20all%20data%20associated%20to%20my%20account%20to%20be%20removed.",
		.difficulty = 0x1000,
		.notes = "Email customer service to delete the account associated to this email. Include your phone number and email address. There is no confirmation email. Later, you can verify that the account is deleted by trying to log in."
	},
	{
		.name = "Trakt",
		.query = "trakt",
		.url = "https://trakt.tv/settings/advanced",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "TransferXL",
		.query = "transferxl",
		.url = "https://transferxl.com/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on \"Delete your account\" at the bottom of the page."
	},
	{
		.name = "Transifex",
		.query = "transifex",
		.url = "https://app.transifex.com/user/settings/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on the link, scroll to the bottom and click 'Delete my account'. Confirm you want to delete your account by clicking 'Delete my account' in the popup view."
	},
	{
		.name = "Transpocket",
		.query = "transpocket",
		.url = "https://transpocket.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the settings button in the bottom left corner -> select delete account -> enter DELETE and click confirm"
	},
	{
		.name = "TrashMail",
		.query = "trashmail",
		.url = "https://trashmail.com/?lang=en&cmd=manager",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In top navigation bar, click on 'Account', then select 'Delete account'."
	},
	{
		.name = "tree-nation",
		.query = "treenation",
		.url = "https://tree-nation.com/userProfile/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in to your account, go to the linked page, scroll to the \"Account management\" section, click \"Delete account\" and confirm. You will have 5 days to cancel the deletion."
	},
	{
		.name = "Trello",
		.query = "trello",
		.url = "https://trello.com/your/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select 'Delete your account?' option to delete your account"
	},
	{
		.name = "Trenitalia",
		.query = "trenitalia",
		.url = "https://www.trenitalia.com/en/info_contacts/delete-account.html",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to send a support request to delete your account"
	},
	{
		.name = "Trenitalia France",
		.query = "trenitalia france",
		.url = "https://www.trenitalia.com/trenitalia-france/information-and-contacts/comment-supprimer-un-espace-reserve.html",
		.email = "mailto:dpo@trenitalia.fr?subject=Demande%20de%20suppression%20de%20compte",
		.difficulty = 0x1000,
		.notes = "You need to send an email or a mail to request account deletion."
	},
	{
		.name = "Tresorit",
		.query = "tresorit",
		.url = "https://web.tresorit.com/account/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the link, it redirects you to your Tresorit profile. Login, scroll to the end, and click 'Delete my account'. The deletion of your account needs confirmation by email, open your email and click 'confirm'."
	},
	{
		.name = "Trillian",
		.query = "trillian",
		.url = "https://trillian.im/account/#delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select the option to delete your account and enter your username, password and the code which will be send to your mailaddress."
	},
	{
		.name = "TripAdvisor",
		.query = "tripadvisor",
		.url = "https://www.tripadvisorsupport.com/hc/en-us/articles/200615117",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "TripIt",
		.query = "tripit",
		.url = "https://www.tripit.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Triptipedia",
		.query = "triptipedia",
		.url = "https://www.triptipedia.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on \"Delete my account\" and confirm"
	},
	{
		.name = "Troll and Toad",
		.query = "troll and toad",
		.url = "https://www.trollandtoad.com/contact.php",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You must contact customer support using their 'Contact Us' form, and provide your account's e-mail address. The account will be deleted once a support staff member processes it."
	},
	{
		.name = "TruckersMP",
		.query = "truckersmp",
		.url = "https://truckersmp.com/profile/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Solve the math problem and enter your password. You must wait 14 days to register again."
	},
	{
		.name = "TrueNAS Forums",
		.query = "truenas forums",
		.url = "https://forums.truenas.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "While logged in, click on your profile icon -> Profile -> Preferences -> Bottom of web page is a \"Delete My Account\" button"
	},
	{
		.name = "TrueNAS Forums (old)",
		.query = "truenas forums old",
		.url = "https://www.truenas.com/community/help/privacy-policy/",
		.email = "mailto:compliance@ixsystems.com",
		.difficulty = 0x1000,
		.notes = "Need to email to request account deletion. GDPR, CCPA, etc form download can be found at truenas.com/community/help/privacy-policy/"
	},
	{
		.name = "Trustpilot",
		.query = "trustpilot",
		.url = "https://www.trustpilot.com/users/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'Delete my profile' at the bottom of the page, then enter your email address to delete."
	},
	{
		.name = "TruthFinder",
		.query = "truthfinder",
		.url = "https://www.truthfinder.com/privacy-center",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'Right to Delete' under 'User Data Tools'. Then enter your email and click 'Delete My User Data'."
	},
	{
		.name = "TryHackMe",
		.query = "tryhackme",
		.url = "https://tryhackme.com/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Under the profile page navigate to the \"other\" tab, then select \"Delete My Account\"."
	},
	{
		.name = "TubeBuddy",
		.query = "tubebuddy",
		.url = "https://www.tubebuddy.com/account/deleteuser",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'YES, Delete My Account' and then confirm to delete."
	},
	{
		.name = "Tubi",
		.query = "tubi",
		.url = "https://tubitv.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on'Delete Account' at the bottom of the page, specify why you'd like to delete your account and enter your password."
	},
	{
		.name = "Tumblr",
		.query = "tumblr",
		.url = "https://www.tumblr.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Tunecore",
		.query = "tunecore",
		.url = "https://support.tunecore.com/hc/en-us/articles/115006687268-How-do-I-close-my-account",
		.email = "mailto:support@tunecore.zendesk.com",
		.difficulty = 0x1000,
		.notes = "Send an email to the customer support team containing your UID, username, third-party account used to log in, and reason for deleting the account."
	},
	{
		.name = "TuneMyMusic",
		.query = "tunemymusic",
		.url = "https://app.tunemymusic.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the \"Delete Account\" button."
	},
	{
		.name = "TunnelBear",
		.query = "tunnelbear",
		.url = "https://www.tunnelbear.com/account/remove",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and enter your password to deleted your account."
	},
	{
		.name = "TurboScribe",
		.query = "turboscribe",
		.url = "https://turboscribe.ai/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit \"Account Settings\" then click \"Delete Account\"."
	},
	{
		.name = "TurboSquid",
		.query = "turbosquid",
		.url = "https://resources.turbosquid.com/how-do-i-close-my-account/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = NULL
	},
	{
		.name = "Turing",
		.query = "turing",
		.url = "https://developers.turing.com/dashboard/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Turismo Itaipu",
		.query = "turismo itaipu",
		.url = "https://ingressos.turismoitaipu.com.br",
		.email = "mailto:atendimento@turismoitaipu.com.br",
		.difficulty = 0x1000,
		.notes = "Send an e-mail to them requesting deletion. They will ask for the ticket code to be able to delete the account."
	},
	{
		.name = "Turo",
		.query = "turo",
		.url = "https://support.turo.com/hc/en-us/articles/203991030-How-to-close-your-account",
		.email = "mailto:accountclosure@turo.com?subject=Account%20Deletion%20Request&body=Please%20delete%20the%20data%20associated%20with%20my%20account.",
		.difficulty = 0x1000,
		.notes = "Email accountclosure@turo.com and request that they delete your personal information."
	},
	{
		.name = "Turtl",
		.query = "turtl",
		.url = "https://turtlapp.com/users/delete/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You only need to confirm your email address; there's no requirement to log in."
	},
	{
		.name = "Tutamail",
		.query = "tutamail",
		.url = "https://app.tuta.com/settings/global",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to \"Delete account\", type your password and confirm your action by clicking \"Delete\"."
	},
	{
		.name = "TV 2",
		.query = "tv 2",
		.url = "https://mit.tv2.dk/konto/luk",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your account page and press 'Slet konto'."
	},
	{
		.name = "TV Tropes",
		.query = "tv tropes",
		.url = "https://tvtropes.org/pmwiki/profile.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In your profile, there is a 'Delete Account' link. Clicking this will permanently delete all personal information from your user profile and deactivate your account. Your username cannot be used again by you or anyone else"
	},
	{
		.name = "Tweek",
		.query = "tweek",
		.url = "https://tweek.so/calendar/help",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Follow the instructions on the help article to delete your account."
	},
	{
		.name = "Twilio",
		.query = "twilio",
		.url = "https://support.twilio.com/hc/en-us/requests/new",
		.email = "mailto:support@twilio.com?subject=Twilio%20user%20account%20deletion%20request&body=Please%20delete%20my%20Twilio%20user%20account.",
		.difficulty = 0x1000,
		.notes = "Type something along the lines of 'delete my account' in the chatbox, then select 'No, show me more'. Scroll down and select 'Contact Support'. Select 'Not Product Specific' as the product."
	},
	{
		.name = "Twitch",
		.query = "twitch",
		.url = "https://www.twitch.tv/user/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "twoseven",
		.query = "twoseven",
		.url = "https://twoseven.xyz/help/faq",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "The instructions are the the bottom of their FAQs"
	},
	{
		.name = "Typeform",
		.query = "typeform",
		.url = "https://help.typeform.com/hc/en-us/articles/360029631211-The-right-to-be-forgotten",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Follow the steps in the link: Login, then click 'My Account', scroll to the 'Danger Zone', click 'Delete my account' and confirm."
	},
	{
		.name = "TypePad",
		.query = "typepad",
		.url = "https://www.typepad.com/secure/account/cancel-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "TypeRacer",
		.query = "typeracer",
		.url = "https://data.typeracer.com/pit/delete_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in and go to the main page. Click on the gear button, next to the logout button to access your \"Account Information\". Then expand \"Account Settings\" and click on \"Delete Account\". You will be redirected to the account deletion page."
	},
	{
		.name = "Typing.com",
		.query = "typingcom",
		.url = "https://www.typing.com/student/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "TypingClub / EdClub",
		.query = "typingclub edclub",
		.url = "https://www.edclub.com/sportal/profile.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked page and delete your account."
	},
	{
		.name = "Uber",
		.query = "uber",
		.url = "https://myprivacy.uber.com/privacy/deleteyouraccount",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can select a reason and supposedly wait 30 days for the account to be deleted, but it never happens."
	},
	{
		.name = "Ubiquiti",
		.query = "ubiquiti",
		.url = "https://www.ui.com/global-request/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Open a ticket with support using the email address associated with the account."
	},
	{
		.name = "Ubisoft",
		.query = "ubisoft",
		.url = "https://account.ubisoft.com/en-US/account-information/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Ubuntu One",
		.query = "ubuntu one",
		.url = "https://login.ubuntu.com/+faq#can-i-delete-my-ubuntu-one-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Yes and no, it depends on which type(s) of accounts, and you will need to delete the accounts in the correct order. All accounts are tied to Ubuntu One's Single Sign-On (login.ubuntu.com), so that is the account you should close last. Everything else, such as Launchpad.net, cloud file storage, AskUbuntu, and other accounts should be closed first if possible. This is especially important if you have any paid services attached, to make sure you won't be billed for anything after closing the accounts. The last step is to delete your Single Sign-On (SSO) account. SSO accounts must be deleted manually by the Ubuntu One staff."
	},
	{
		.name = "Udacity",
		.query = "udacity",
		.url = "https://udacity.trsnd.co/policies?action=ERASURE&modal=take-control",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Follow the link to Udacity's privacy centre. Select \"Delete my personal data\" from the modal. In the next screen enter the email address that you use for Udacity and submit. You will be sent an email with a login link. Follow the link and you will be taken back to the privacy centre where a confirmation modal will be shown. Finally, confirm the request to delete your account. Note that you are still being charged for any courses you are enrolled in!"
	},
	{
		.name = "Udemy",
		.query = "udemy",
		.url = "https://www.udemy.com/user/close-account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'Close account' and confirm with the 6-digit code sent by email."
	},
	{
		.name = "UGC",
		.query = "ugc",
		.url = "https://www.ugc.fr/aide.html?question=supprimer-compte-ugc",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to My account/My profile and select \"Supprimer mon compte\"."
	},
	{
		.name = "Ultimate Guitar",
		.query = "ultimate guitar",
		.url = "https://www.ultimate-guitar.com/forum/profile/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the link or log in, go to 'settings', 'Profile' and click the small delete button at the bottom."
	},
	{
		.name = "umami",
		.query = "umami",
		.url = "https://cloud.umami.is/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "After logging in, proceed to the “Manage” section and select the red button labelled “Delete”. In the pop-up text box, type “DELETE” and confirm once more."
	},
	{
		.name = "Uncubed",
		.query = "uncubed",
		.url = "https://uncubed.com/learn/users/edit",
		.email = "mailto:team@uncubed.com",
		.difficulty = 0x1000,
		.notes = "You can deactivate your account from 'Settings', but must contact them via email to terminate your account"
	},
	{
		.name = "Uncyclopedia",
		.query = "uncyclopedia",
		.url = "https://en.uncyclopedia.co/wiki/Uncyclopedia:Delete_my_account",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Like Wikipedia, the account cannot be removed, but there are some suggestions, like stop contributing, user rename or ask an admin or bureaucrat for a content vanishing."
	},
	{
		.name = "Unfuddle Ten",
		.query = "unfuddle ten",
		.url = "https://unfuddle.io/app",
		.email = "mailto:support@unfuddle.com",
		.difficulty = 0x1000,
		.notes = "Send an email with the subject 'Delete my account', it is the only way."
	},
	{
		.name = "Unidays",
		.query = "unidays",
		.url = "https://www.myunidays.com/US/en-US/account/settings/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Enter your password and click 'Delete my account'."
	},
	{
		.name = "Uniqlo",
		.query = "uniqlo",
		.url = "https://www.uniqlo.com/us/en/member/details",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "United Domains",
		.query = "united domains",
		.url = "https://www.united-domains.de/support/kontakt-formular/close//",
		.email = "mailto:support@united-domains.de",
		.difficulty = 0x1000,
		.notes = "Contact Support and request to delete your account."
	},
	{
		.name = "Unity ID",
		.query = "unity id",
		.url = "https://id.unity.com/en/account/edit",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'Request to Delete Your Account' at the bottom of the account settings page."
	},
	{
		.name = "UnKnoWnCheaTs",
		.query = "unknowncheats",
		.url = "https://www.unknowncheats.me/forum/showgroups.php",
		.email = "mailto:siteadmin@unknowncheats.me",
		.difficulty = 0x4000,
		.notes = NULL
	},
	{
		.name = "Unroll.me",
		.query = "unrollme",
		.url = "https://unroll.me/user/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'Delete my account' at the bottom of the user settings page."
	},
	{
		.name = "Unsplash",
		.query = "unsplash",
		.url = "https://unsplash.com/account/close",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Uphold",
		.query = "uphold",
		.url = "https://wallet.uphold.com/close-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To close your account, you must withdraw all funds. Next, click on the three dots in the left menu, then \"Security\", \"Close account\", \"Continue with account closure\", and follow the procedure."
	},
	{
		.name = "UPS",
		.query = "ups",
		.url = "https://wwwapps.ups.com/ppc/ppc.html?loc=en_US#/informationPage/deleteProfile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Uptime Observer",
		.query = "uptime observer",
		.url = "https://uptimeobserver.com/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Send a message using the website chat feature (bottom right), asking them to delete your account."
	},
	{
		.name = "Uptime Robot",
		.query = "uptime robot",
		.url = "https://uptimerobot.com/dashboard#mySettings",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Login to your account and click on 'My Settings' or follow the link. On the 'Delete Account' section click on 'I still want to delete the account' link & click on 'Send account deletion e-mail'. Check your email and open provided link. Lastly confirm deletion by click on 'Delete Account'."
	},
	{
		.name = "Urcdkey",
		.query = "urcdkey",
		.url = "https://www.urcdkey.com/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Send a message using the website chat feature (bottom right), asking them to delete your account"
	},
	{
		.name = "Usersnap",
		.query = "usersnap",
		.url = "https://usersnap.com/contact",
		.email = "mailto:help@usersnap.com",
		.difficulty = 0x1000,
		.notes = "Send an email with the subject 'Delete my account'"
	},
	{
		.name = "Usmobile",
		.query = "usmobile",
		.url = "https://www.usmobile.com/about-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Request account deletion through chat. They'll send you a code to give back to them, takes about 15 minutes before deletion."
	},
	{
		.name = "Uswitch",
		.query = "uswitch",
		.url = "https://www.uswitch.com/account/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom of the 'Account Settings' page and click 'Delete Account'"
	},
	{
		.name = "Utry.me",
		.query = "utryme",
		.url = "https://shop.utryme.com/kontaktformular",
		.email = "mailto:service@utryme.com",
		.difficulty = 0x1000,
		.notes = "Contact the customer support via email and request the deletion of your account."
	},
	{
		.name = "uVPN",
		.query = "uvpn",
		.url = "https://uvpn.me/support/#contactus",
		.email = "mailto:support@uvpn.me",
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "Uxcel",
		.query = "uxcel",
		.url = "https://app.uxcel.com/settings/account-settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In the account settings menu find and select the Account section. Then look for the option to Delete Account and click on it. Finally, confirm your decision in a popup."
	},
	{
		.name = "UXPin",
		.query = "uxpin",
		.url = "https://www.uxpin.com/docs/account/closing-your-account/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You must call them to close your account."
	},
	{
		.name = "V.PS Hosting",
		.query = "vps hosting",
		.url = "https://vps.hosting/clientarea/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = " Go to the page and click the delete account button."
	},
	{
		.name = "Valence Romans Mobilités",
		.query = "valence romans mobilites",
		.url = "https://start.valenceromansmobilites.fr/fr/compte/informations",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your account information page, click on \"Supprimer mon compte\", confirm your email address and your password, and click on \"Supprimer mon compte\"."
	},
	{
		.name = "Valorant",
		.query = "valorant",
		.url = "https://support-valorant.riotgames.com/hc/en-us/articles/360050328414-Deleting-Your-Riot-Account-and-All-Your-Data",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked page, scroll down, click on \"LOG IN\" and confirm your deletion."
	},
	{
		.name = "Vans.com",
		.query = "vanscom",
		.url = "https://www.vans.com/utility/contact-us.html",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Email customer service through the link and tell them you want your account deleted."
	},
	{
		.name = "VCRDB / Valorant Crosshair Database",
		.query = "vcrdb valorant crosshair database",
		.url = "https://www.vcrdb.net/profile",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Before deleting your account, make sure you have deleted all Crosshairs you have created, otherwise account deletion will fail with an unknown error."
	},
	{
		.name = "VCV Rack",
		.query = "vcv rack",
		.url = "https://vcvrack.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your account page and click the \"Delete account\" link."
	},
	{
		.name = "Veduca",
		.query = "veduca",
		.url = "https://veduca.org",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = NULL
	},
	{
		.name = "Velo Hero",
		.query = "velo hero",
		.url = "https://app.velohero.com/settings/terminate",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Velo'v",
		.query = "velov",
		.url = "https://velov.grandlyon.com/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Nothing says how to do it and the support does seem to be able to do it."
	},
	{
		.name = "Venmo",
		.query = "venmo",
		.url = "https://account.venmo.com/settings/profile/cancel/confirm",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Vercel",
		.query = "vercel",
		.url = "https://vercel.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In the dashboard, click your profile picture on the top right, click \"Settings\", scroll down and then click \"Delete Personal Account\"."
	},
	{
		.name = "Verkkokauppa.com",
		.query = "verkkokauppacom",
		.url = "https://asiakaspalvelu.verkkokauppa.com/hc/fi/articles/360000242527-Asiakastili",
		.email = "mailto:asiakaspalvelu@verkkokauppa.com",
		.difficulty = 0x1000,
		.notes = "You need to contact the customer service via email and include certain identifying information to prove you own the account."
	},
	{
		.name = "vgy.me",
		.query = "vgyme",
		.url = "https://vgy.me",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the Account Details page, there is a Close Account tab."
	},
	{
		.name = "ViaBox",
		.query = "viabox",
		.url = "https://viabox.zendesk.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Request the deletion of your account through the link above as a \"general request\". The system might create a support account for your request, so state that you want it to be deleted too."
	},
	{
		.name = "Viadeo",
		.query = "viadeo",
		.url = "https://www.viadeo.com/settings/account/?ga_from=Fu:%2Fsettings%2Faccount%2F;Fb%3Amenu_box_right%3BFe%3AL1-account-settings%3B",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "There's a button on the right, just under the menu."
	},
	{
		.name = "viainvest",
		.query = "viainvest",
		.url = "https://viainvest.com/en/faq",
		.email = "mailto:support@viainvest.com?subject=Request%20to%20delete%20my%20account%20from%20ViaInvest&body=I%20have%20an%20account%20in%20your%20database%20associated%20with%20the%20name%20XXXXXX%20and%20the%20email%20address%20XXXXXX.%20I%20have%20decided%20not%20to%20use%20the%20account%20again%3B%20therefore%2C%20I%20request%20that%20you%20kindly%20delete%20my%20account%20from%20your%20database%20and%20delete%20all%20the%20associated%20data.",
		.difficulty = 0x1000,
		.notes = "Before requesting account deletion, make sure you wait for the remaining payments to come through, and withdraw all available funds. The account balance must be 0. Then you can send an email to support."
	},
	{
		.name = "Viber",
		.query = "viber",
		.url = "https://help.viber.com/hc/en-us/articles/9174583112861",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and follow the instructions."
	},
	{
		.name = "VideosGeneratorAI",
		.query = "videosgeneratorai",
		.url = "https://videosgeneratorai.com/terms-of-use",
		.email = "mailto:balt1794@gmail.com?subject=Account%20Deletion%20Request&body=Account%20Deletion%20Request",
		.difficulty = 0x1000,
		.notes = "Send an email. After receiving the email, your account will be deleted in the next 24 hours."
	},
	{
		.name = "Vidio",
		.query = "vidio",
		.url = "https://support.vidio.com/support/solutions/articles/43000060322--delete-account",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = NULL
	},
	{
		.name = "VidIQ",
		.query = "vidiq",
		.url = "https://app.vidiq.com/account/settings/my-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to cancel your Subscription before writing the Support (Bot)"
	},
	{
		.name = "Vidyard",
		.query = "vidyard",
		.url = "https://knowledge.vidyard.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Click \"Submit a request\" and request an account deletion, entering your email into the request form."
	},
	{
		.name = "VikACG",
		.query = "vikacg",
		.url = "https://www.vikacg.com/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "A handwritten paper application is required."
	},
	{
		.name = "Vimeo",
		.query = "vimeo",
		.url = "https://vimeo.com/settings/goodbye/forever",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Vinted",
		.query = "vinted",
		.url = "https://www.vinted.com/member/general/delete_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on your profile icon, then \"Settings\", \"Account settings\", \"Delete my account\", confirm that all transactions are completed, and click \"Delete account\"."
	},
	{
		.name = "Virmach",
		.query = "virmach",
		.url = "https://billing.virmach.com/submitticket.php",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can open a ticket and ask to have your account deleted, but they will only close it. Login credentials will continue to work and profile information is retained after closure."
	},
	{
		.name = "VirtCloud",
		.query = "virtcloud",
		.url = "https://virtcloud.net",
		.email = "mailto:info@virtcloud.net?subject=Account%20Deletion%20Request&body=Hi%2C%20please%20delete%20the%20account%20associated%20with%20my%20FULL_NAME%20and%20EMAIL_ADDRESS.%20Thanks.",
		.difficulty = 0x1000,
		.notes = "To delete your account, please send an email to them. Once verified, your account and all associated data will be deleted within 48 hours."
	},
	{
		.name = "Virtualmaster",
		.query = "virtualmaster",
		.url = "https://www.virtualmaster.com/virtualmaster/en/issues",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Log in to your account and contact the customer support using the contact form and request the deletion of your account."
	},
	{
		.name = "VirusTotal",
		.query = "virustotal",
		.url = "https://www.virustotal.com/gui/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in to your account, go to the page linked above, and press 'Delete account'"
	},
	{
		.name = "Visit Japan Web (Japanese Customs)",
		.query = "visit japan web japanese customs",
		.url = "https://www.vjw.digital.go.jp/main/#/vjwpco005",
		.email = "mailto:ciq@digital.go.jp?body=Please%20delete%20my%20Visit%20Japan%20Web%20account.",
		.difficulty = 0x1000,
		.notes = "Accounts are deleted after 18 months of inactivity, although it is possible to request deletion earlier via email."
	},
	{
		.name = "Visme",
		.query = "visme",
		.url = "https://dashboard.visme.co/v2/account-settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click 'Delete Account' and then you will receive email for confirmation of deletion, click on the link in the email to confirm deletion, and then again click on 'confirm' on that page."
	},
	{
		.name = "Visualping",
		.query = "visualping",
		.url = "https://visualping.io/account/profile/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You can go to your profile and press 'Close Account', however, this will merely deactivate your account. To delete your account, you must contact them."
	},
	{
		.name = "Viva o Linux (VOL)",
		.query = "viva o linux vol",
		.url = "https://www.vivaolinux.com.br/minhaConta.php",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click at \"Excluir conta\", type your password and confirm your action by clicking \"Gravar\"."
	},
	{
		.name = "Vivaldi",
		.query = "vivaldi",
		.url = "https://help.vivaldi.com/services/account/delete-account-on-vivaldi-net/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = NULL
	},
	{
		.name = "Vive La Mode",
		.query = "vive la mode",
		.url = "https://vive-lamode.com",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact support using the linked form or by email and request account deletion."
	},
	{
		.name = "ViVo",
		.query = "vivo",
		.url = "https://passport.vivo.com/in/#/personalCenter",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "All data related to the account will be wiped in 180 days."
	},
	{
		.name = "VK/ВКонтакте",
		.query = "vkвконтакте",
		.url = "https://vk.com/settings?act=deactivate",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Voi",
		.query = "voi",
		.url = "https://help.voi.com/en_gb/i-want-to-delete-my-voi-account-S1TgkzhO_",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "In the Voi, view your profile, and press 'Delete Account' at the bottom of the screen."
	},
	{
		.name = "Voicemod",
		.query = "voicemod",
		.url = "https://www.voicemod.net/support/?letstalk=Account%20and%20Login&issue",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form, in the 'lets talk' field select 'Account & Login', in the second field select 'Delete account'. If you have active licenses, you may have to confirm in a later reply."
	},
	{
		.name = "Volcano Hosting",
		.query = "volcano hosting",
		.url = "https://www.volcanohosting.net",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You need to log into their billing panel and send a ticket regarding the account deletion."
	},
	{
		.name = "Volcengine",
		.query = "volcengine",
		.url = "https://console.volcengine.com/user/logout/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Verify your identity and then wait for 45 days."
	},
	{
		.name = "Volet",
		.query = "volet",
		.url = "https://support.volet.com/hc/en-us/articles/360021927159-Closing-your-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Follow the instructions on the linked page. Due to legal limitations, after closing an account, it will be blocked for 7 years. During this time, the account can be unblocked. After the 7 years, if the account hasn't been unblocked, its data will be automatically deleted."
	},
	{
		.name = "VoucherCodes",
		.query = "vouchercodes",
		.url = "https://support.vouchercodes.co.uk/hc/en-us/articles/360000349566-How-do-I-delete-my-Account-",
		.email = "mailto:privacy@vouchercodes.co.uk",
		.difficulty = 0x1000,
		.notes = "Send an email to them to request account deletion."
	},
	{
		.name = "Vox Media",
		.query = "vox media",
		.url = "https://www.voxmedia.com/contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Account can only be deleted by a contact form."
	},
	{
		.name = "Voxer",
		.query = "voxer",
		.url = "https://support.voxer.com/hc/en-us/articles/204330173-How-do-I-delete-my-Voxer-account-",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Account can only be deleted from Android or iOS app, not the Voxer website."
	},
	{
		.name = "Voxtelesys",
		.query = "voxtelesys",
		.url = "https://voxtelesys.com/contact-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You must either use their contact form linked, or go into the portal and make a ticket stating you want to delete your account."
	},
	{
		.name = "Vrbo",
		.query = "vrbo",
		.url = "https://www.vrbo.com/user/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on the provided link, login to your account and delete your account as prompted. The account will be deleted immediately."
	},
	{
		.name = "VRChat",
		.query = "vrchat",
		.url = "https://help.vrchat.com/hc/en-us/articles/1500002379282-I-want-to-delete-my-VRChat-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "There will be a 14-day waiting period. Once this period has been completed, the account will be deleted."
	},
	{
		.name = "VSCO",
		.query = "vsco",
		.url = "https://support.vsco.co/hc/en-us/articles/360004196352-How-do-I-delete-my-VSCO-Account-",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Deleting your account won't delete your membership."
	},
	{
		.name = "VSTBuzz",
		.query = "vstbuzz",
		.url = "https://vstbuzz.com/contact/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Account can only be deleted by sending request to their support team"
	},
	{
		.name = "VTech",
		.query = "vtech",
		.url = "https://www.vtechkids.com/support/support_form/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to call their toll-free number at 1-800-521-2010 or submit a request at the contact form to delete your account."
	},
	{
		.name = "Vueling",
		.query = "vueling",
		.url = "https://tickets.vueling.com/DeleteUser.aspx",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and enter your details to confirm the deletion of your account."
	},
	{
		.name = "Vuforia Chalk",
		.query = "vuforia chalk",
		.url = "https://support.ptc.com/help/vuforia/chalk_app_center/index.html#page/Vuforia_Chalk_Admin_Center/common/delete_account.html",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "To request that your Chalk account be deleted, open the Chalk app and navigate to Settings -> My Account, and tap Delete Account. When a pop-up appears at the bottom of your screen, tap Request account deletion. This action will trigger a process in which a PTC Administrator will delete the specific personal or business user.  If the user account being deleted belongs to a Primary Administrator, a new Primary Administrator must be designated before the user account can be deleted. Business Account users may need to contact their company administrator. You can contact your administrator by navigating to Settings -> Help -> Contact Company Admin in the Chalk app.\nAlternatively you might still be able to reach the Vuforia team at PTC by [email](mailto:vuforia-support@ptc.com) (vuforia-support@ptc.com) or get transferred by calling your regions phone number found [here]( https://support.ptc.com/company/mathsoft/)."
	},
	{
		.name = "Vuforia Developer Account",
		.query = "vuforia developer account",
		.url = "https://developer.vuforia.com/support/contact/login",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Use [this form](https://developer.vuforia.com/support/contact/login) to request deletion of your Vuforia developer account and its associated data. A support agent will reach out to you to reconfirm account ownership and intent to delete.\nWARNING: The form may not display properly if not logged in, using a privacy focused browser, using a cookie blocker or using Firefox or Safari. Using Chrome or Edge without extensions is recommended for this step."
	},
	{
		.name = "Vultr",
		.query = "vultr",
		.url = "https://my.vultr.com/support",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Create a ticket with customer support to request the deletion of your data"
	},
	{
		.name = "W3Schools",
		.query = "w3schools",
		.url = "https://support.w3schools.com/hc/en-gb/articles/14697964112402-How-can-I-delete-my-account",
		.email = "mailto:hello@w3schools.com?subject=%23deleteme&body=%23deleteme",
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "Wacom Cloud",
		.query = "wacom cloud",
		.url = "https://account.wacom.com/en-us/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Just click in 'Privacy' link, check the option 'I hereby certify that I am the consumer whose personal information is the subject of this request.' and click 'Delete My Information' button."
	},
	{
		.name = "Wahoo Fitness",
		.query = "wahoo fitness",
		.url = "https://privacyportal.onetrust.com/webform/b2b76ae8-d622-4165-97c7-8896261e24b7/b43eda4f-3724-4303-879c-e65dbcfced1d",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Fill the form, selecting \"Customer/Former Customer\" and \"Delete My Information\" on the respective prompts. A link will be sent to your email to confirm."
	},
	{
		.name = "Waifudex",
		.query = "waifudex",
		.url = "https://waifudex.com/home",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on your username (top right) -> Delete account (bottom of window) -> Confirm"
	},
	{
		.name = "Wakanim",
		.query = "wakanim",
		.url = "https://www.wakanim.tv/sc/v2/static/contactus",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill the form with your account's username and mail, select category \"Account/Login\" and subcategory \"Account Deletion\". Shortly after you will receive a mail that your request is being reviewed. You'll be notified via mail when the request is completed by support staff."
	},
	{
		.name = "wallabag",
		.query = "wallabag",
		.url = "https://app.wallabag.it/subscription/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "wallpiece",
		.query = "wallpiece",
		.url = "https://wallpiece.io/account/register/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Walmart",
		.query = "walmart",
		.url = "https://www.walmart.com/account/api/ccpa-intake?native=false&app=gm&type=access",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "They only accept requests from California, which is validated only by the actual selection on the form."
	},
	{
		.name = "Walmart Canada",
		.query = "walmart canada",
		.url = "https://www.walmart.ca/en/account/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Follow the link or scroll to the bottom of the website and click \"Delete my account.\" You will be prompted to log in and confirm the deletion."
	},
	{
		.name = "WaniKani",
		.query = "wanikani",
		.url = "https://www.wanikani.com/settings/danger_zone",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the given link and click on \"Send deletion confirmation mail\". You will receive a mail on your registered mail address and you can confirm the account deletion from there."
	},
	{
		.name = "Wappalyzer",
		.query = "wappalyzer",
		.url = "https://www.wappalyzer.com/account/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on your e-mail on the top right in the navigator. Find and click on Account. Scroll down to find the delete account button in red. Confirm deletion. Enter password to complete deletion."
	},
	{
		.name = "Wargaming.net",
		.query = "wargamingnet",
		.url = "https://eu.wargaming.net/personal/suspend_account/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Follow the link, log in, and enter your email address to confirm account deletion. A confirmation email will be sent to you. Follow the 'Confirm' link in the email, login again, and finally confirm account deletion again. After 45 days your account will be deleted permanently."
	},
	{
		.name = "Warmshowers",
		.query = "warmshowers",
		.url = "https://www.warmshowers.org/privacy",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the \"Cancel account\" button at the bottom of the page when editing your account."
	},
	{
		.name = "Warner Bros. Games",
		.query = "warner bros games",
		.url = "https://account.wbgames.com/account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click the \"Delete my account\" button and enter a confirmation code sent yo your email."
	},
	{
		.name = "Wasabi Hosting",
		.query = "wasabi hosting",
		.url = "https://wasabihosting.com/clientarea.php",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Create a ticket to the Billing department and request your account to be deleted."
	},
	{
		.name = "The Washington Post",
		.query = "the washington post",
		.url = "https://helpcenter.washingtonpost.com/hc/en-us/requests/new",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You have to submit a request regarding account deletion, and support will get back to you by sending you a account deletion confirmation email. After confirming, your account is deleted. For residents of EEA, UK, Switzerland, California, or Virginia who verify your address, they will delete additional information."
	},
	{
		.name = "Watch2Gether",
		.query = "watch2gether",
		.url = "https://w2g.tv/users/current_user",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down to the footer, click \"Delete my account\" and confirm."
	},
	{
		.name = "Wattpad",
		.query = "wattpad",
		.url = "https://www.wattpad.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Closed accounts are deleted after six months."
	},
	{
		.name = "WayFi Wireless",
		.query = "wayfi wireless",
		.url = "https://wayfiwireless.com/contact",
		.email = "mailto:privacy@wayfiwireless.com?body=I%20want%20my%20account%20to%20be%20deleted.%20My%20full%20name%20is%20XXXXXX%20and%20my%20user%20name%20is%20XXXXXX.%20Please%20remove%20my%20profile%20from%20WayFi%20Wireless%20and%20delete%20all%20associated%20data.",
		.difficulty = 0x1000,
		.notes = "To opt out, send an email or fill out the contact form."
	},
	{
		.name = "WAYN",
		.query = "wayn",
		.url = "https://www.wayn.com/wayn.html?wci=unregister",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Waze",
		.query = "waze",
		.url = "https://www.waze.com/dashboard/delete_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Weather API",
		.query = "weather api",
		.url = "https://www.weatherapi.com/my/close-account.aspx",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked page and check the box to confirm you want to delete your account. Then click on the 'Close My Account' button."
	},
	{
		.name = "The Weather Network",
		.query = "the weather network",
		.url = "https://www.theweathernetwork.com/my-account/?intcmp=twn_supernav_settings",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Scroll down to the bottom of the linked page and click on 'Delete my account'. Then, an email will be sent to you asking you to confirm your account deletion."
	},
	{
		.name = "Weather.com",
		.query = "weathercom",
		.url = "https://registration.weather.com/ursa/profile/unsubscribe",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Site uses the term \"unsubscribe\" to describe completely deleting an account."
	},
	{
		.name = "WEB.DE",
		.query = "webde",
		.url = "https://kundencenter.web.de",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Webex - Free Account",
		.query = "webex free account",
		.url = "https://help.webex.com/en-us/5m4i4y/Delete-Your-Free-Webex-Account#id_111643",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Just follow the settings to find the delete account button and click it"
	},
	{
		.name = "Webflow",
		.query = "webflow",
		.url = "https://support.webflow.com/resources/delete-account",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Submit a request to delete your account and confirm through an email sent to you. Account deletions are processed within 48 hours of requesting."
	},
	{
		.name = "Webhosting.dk",
		.query = "webhostingdk",
		.url = "https://www.webhosting.dk/DKK/deleteaccount.php",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "The service claims to be required by law to retain information for the last 5 financial years, and doesn't allow you to delete it. Your account must be inactive for 5 full years before you can delete it."
	},
	{
		.name = "Weblate",
		.query = "weblate",
		.url = "https://hosted.weblate.org/accounts/remove/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Webtickets",
		.query = "webtickets",
		.url = "https://www.webtickets.co.za/v2/FAQ.aspx?itemid=1505441537",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill in the form requesting the deletion of your account"
	},
	{
		.name = "WEBTOON",
		.query = "webtoon",
		.url = "https://www.webtoons.com/en/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Check the \"I understand and want to delete my account\" option and click on \"Delete my account\". Note that any comments you wrote will not be deleted automatically so you will need to go [here](https://www.webtoons.com/en/mycomment) and delete them yourself."
	},
	{
		.name = "Webull",
		.query = "webull",
		.url = "https://www.webull.com/hc/categories/fq125-How-do-I-delete-my-Webull-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Must use the mobile application to delete account."
	},
	{
		.name = "WeChat",
		.query = "wechat",
		.url = "https://help.wechat.com/cgi-bin/micromsg-bin/oshelpcenter?opcode=2&id=1706083AnYFb170608VF3Ur2",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "From the app: Me -> Settings -> Account Security -> WeChat Security Center -> Account Cancellation."
	},
	{
		.name = "Weebly",
		.query = "weebly",
		.url = "https://www.weebly.com/home/account/data",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "WeHeartIt",
		.query = "weheartit",
		.url = "https://weheartit.com/settings/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Weibo",
		.query = "weibo",
		.url = "https://kefu.weibo.com/faqdetail?id=20690",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Weights",
		.query = "weights",
		.url = "https://www.weights.com/settings",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Go to the bottom of the linked page. Under \"Danger Zone\", first click on \"Delete all content\", and click on \"Delete\" twice in the pop-up window that appears. This deletes everything tied to the account (covers, models, comments, images...), then logs you out. Log back in (if using mail login, you must go to the main page), return to \"Danger Zone\" in the linked page, now click on \"Delete Account\", and in the pop-up window that appears, click \"Delete\" twice. This deletes the account proper. You won't be able to use your mail to sign up again for 14 days after deleting the account."
	},
	{
		.name = "WeirdGloop",
		.query = "weirdgloop",
		.url = "https://weirdgloop.org/",
		.email = "mailto:support@weirdgloop.org",
		.difficulty = 0x2000,
		.notes = "They won't delete your wiki account but can remove personally identifying information."
	},
	{
		.name = "WeMod",
		.query = "wemod",
		.url = "https://support.wemod.com/docs/how-do-i-delete-my-account",
		.email = "mailto:support@wemod.com",
		.difficulty = 0x1000,
		.notes = "If you have currently active licenses, you may need to confirm account deletion in a later email."
	},
	{
		.name = "Western Union",
		.query = "western union",
		.url = "https://wucare.westernunion.com/s/article/How-do-I-log-in-at-westernunion-com?language=en_US#delete",
		.email = "mailto:customercare@westernunion.com?body=My%20name%20is%20XXXXXX%250AMy%20registered%20phone%20number%20is%20XXXXXX%250AMy%20WU%20number%20is%20XXXXXX%250AI%20would%20like%20to%20delete%20my%20WU%20profile%20because%20XXXXXX",
		.difficulty = 0x1000,
		.notes = "To delete your profile, [contact](https://www.westernunion.com/us/en/contactus.html) Customer Care or send an email from the account you registered with containing your name, registered phone number, My WU number (if applicable), and reason for deleting your profile."
	},
	{
		.name = "Westfield",
		.query = "westfield",
		.url = "https://www.westfield.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On your account page, go to \"My personal information\", scroll down, click on \"Delete my account\", then click \"Yes\" to confirm."
	},
	{
		.name = "WeTransfer",
		.query = "wetransfer",
		.url = "https://wetransfer.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click the \"Delete account\" button at the bottom of the page."
	},
	{
		.name = "WG-Gesucht.de",
		.query = "wggesuchtde",
		.url = "https://www.wg-gesucht.de/hilfe.html#collapse-account-4",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "WhatPulse",
		.query = "whatpulse",
		.url = "https://whatpulse.org/my/#home",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "When logged into the website, select \"My WhatPulse\" from the navigation bar, then click \"Unregister from WhatPulse\" towards the bottom of the page. This will permanently delete the account."
	},
	{
		.name = "WhatsApp",
		.query = "whatsapp",
		.url = "https://faq.whatsapp.com/2138577903196467/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "From the app: Settings -> Account -> Delete your account."
	},
	{
		.name = "Where Am I?",
		.query = "where am i",
		.url = "https://whereamigame.app/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log in to the mobile app, click on your username at the bottom navigation, select 'Delete Account' under 'Account Management'."
	},
	{
		.name = "Which?",
		.query = "which",
		.url = "https://www.which.co.uk/terms-and-conditions/your-which-membership/",
		.email = "mailto:which@which.co.uk?body=My%20membership%20number%20is%20XXXXXX",
		.difficulty = 0x1000,
		.notes = "Require your membership number to be sent in the email. This can be found [here](https://www.which.co.uk/account/#/)"
	},
	{
		.name = "Whimsical",
		.query = "whimsical",
		.url = "https://whimsical.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You will need to enter your e-mail address and then confirm by re-authenticating."
	},
	{
		.name = "Whirlpool",
		.query = "whirlpool",
		.url = "http://whirlpool.net.au/wiki/wp_deleteaccount",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Whirlpool refuses to permanently delete accounts and instead suggests that the best solution is 'simply to exercise self control and not log in anymore'. In exceptional circumstances (e.g. death, legal threats, security risks) you may contact a moderator to request that your account be marked as inactive or placed in the penalty box. The site also refuses to delete a large amount of posts on your behalf, so the best solution may be to turn on 2FA, change your username/email address to something that's not used elsewhere and not login anymore."
	},
	{
		.name = "Whizlabs",
		.query = "whizlabs",
		.url = "https://www.whizlabs.com/contact-us/",
		.email = "mailto:support@whizlabs.com",
		.difficulty = 0x1000,
		.notes = "Submit a request to delete your account using the contact form provided."
	},
	{
		.name = "WhoSay.com",
		.query = "whosaycom",
		.url = "https://www.whosay.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Just click 'Deactivate'."
	},
	{
		.name = "Wifi Map",
		.query = "wifi map",
		.url = "https://www.wifimap.io/accountDeleting",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Follow the link, log in, choose a reason (optional), then click on Delete account."
	},
	{
		.name = "WiGLE",
		.query = "wigle",
		.url = "https://wigle.net/deleteAccount",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked page and follow the instructions."
	},
	{
		.name = "Wikidot",
		.query = "wikidot",
		.url = "https://www.wikidot.com/account/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on 'Delete account'. Confirm account deletion through the link sent to user email address."
	},
	{
		.name = "wikiHow",
		.query = "wikihow",
		.url = "wikihow.com/Special:Preferences#mw-prefsection-personal",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Requires emailing them to request for deletion."
	},
	{
		.name = "Wikimedia Commons",
		.query = "wikimedia commons",
		.url = "https://commons.wikimedia.org/wiki/Commons:Username_policy#Deleting_your_account",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "An account cannot be deleted as all contibutions to Wikimedia Commons are licensed under licenses that require attribution. However, you can place the template {{SD|U1}} on your user and talk pages, and rename your account to something random [here](https://commons.wikimedia.org/wiki/Special:GlobalRenameRequest)"
	},
	{
		.name = "Wikipedia",
		.query = "wikipedia",
		.url = "https://en.wikipedia.org/wiki/Wikipedia:FAQ/Main#How_do_I_change_my_username%2Fdelete_my_account?",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "An account cannot be deleted because to all contributions to Wikipedia are licensed under licenses that require attribution. However, they do have some suggestions, such as [Courtesy Vanishing](https://en.wikipedia.org/wiki/Wikipedia:Courtesy_vanishing)"
	},
	{
		.name = "Wilds.io",
		.query = "wildsio",
		.url = "http://wilds.io",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to 'Settings and controls', then scroll to 'Delete my account'."
	},
	{
		.name = "Wilson epark",
		.query = "wilson epark",
		.url = "http://myaccount.epark.com.au/ContactUs.aspx",
		.email = "mailto:info@epark.com.au",
		.difficulty = 0x1000,
		.notes = "Send your request for account deletion to epark either via the form on the 'Contact Us' page, or by sending them an email."
	},
	{
		.name = "Wilson Parking",
		.query = "wilson parking",
		.url = "https://www.wilsonparking.com.au",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "To delete your online prepaid account, download the Wilson Parking App, select 'Account', 'Your Profile' under the 'About You' header, then scroll to 'Delete Account'."
	},
	{
		.name = "Windscribe",
		.query = "windscribe",
		.url = "https://windscribe.com/cancel/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page, enter your password, give a cancellation reason and click \"Delete Account\" at the bottom."
	},
	{
		.name = "Windy",
		.query = "windy",
		.url = "https://account.windy.com/profile/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked page, enter your email and password, click on 'Delete Account'."
	},
	{
		.name = "Wine HQ",
		.query = "wine hq",
		.url = "https://forum.winehq.org/",
		.email = "mailto:web-admin@winehq.org",
		.difficulty = 0x1000,
		.notes = "Send an E-Mail to the webmaster. If that didn't work, create a new forum thread on https://forum.winehq.org"
	},
	{
		.name = "Wire",
		.query = "wire",
		.url = "https://support.wire.com/hc/en-us/articles/207555795-Delete-a-Wire-Personal-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "On Windows/MacOS : Go Settings -> Account -> Delete Account And on mobile devices Tap Profile -> Settings -> Account -> Delete Account. You will receive a SMS to confirm the deletion."
	},
	{
		.name = "Wise",
		.query = "wise",
		.url = "https://wise.com/settings/",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You can find the \"Close Account\" option at the bottom of the settings page, but you can log in any time after closing to reactivate it, so it is never deleted."
	},
	{
		.name = "WiseMapping",
		.query = "wisemapping",
		.url = "https://app.wisemapping.com/c/maps/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on the profile icon in the top right corner and select \"Account\", then check the box next to \"Delete Account\" and click on \"Accept\"."
	},
	{
		.name = "Wish",
		.query = "wish",
		.url = "https://www.wish.com/settings/account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You will have to edit your 'Country' in the profile to be a country covered by e.g. GDPR (for example, France). Otherwise, you will not see the 'Permanently delete account' option when you click on 'Manage Account' (you will only see 'Deactivate account')."
	},
	{
		.name = "WishSimply",
		.query = "wishsimply",
		.url = "https://wishsimply.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Enter your account password and click on 'DELETE ACCOUNT'."
	},
	{
		.name = "Withings",
		.query = "withings",
		.url = "https://account.withings.com/account/account_delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You can delete your account after logging in, in one click from the user settings page. You can also choose to have your data sent to you first. The deletion process takes 7 days."
	},
	{
		.name = "Wix",
		.query = "wix",
		.url = "https://manage.wix.com/account/close-account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Make sure you're logged in and fill the form to delete the account."
	},
	{
		.name = "Wizarding World",
		.query = "wizarding world",
		.url = "https://www.wizardingworld.com/profile/settings/delete-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Does not delete data from a previous Pottermore account. See [Pottermore entry](https://justdeleteme.xyz/#pottermore)."
	},
	{
		.name = "Wizards of the Coast",
		.query = "wizards of the coast",
		.url = "https://support.wizards.com/hc/en-us/requests/new?ticket_form_id=360000108786",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill up the form requesting deletion. The customer support will reach back asking for tens of information to confirm deletion in each service they have. Provide what you can/remember and it eventually gets deleted."
	},
	{
		.name = "WolframAlpha.com",
		.query = "wolframalphacom",
		.url = "https://www.wolframalpha.com/fbfaqs.html",
		.email = "mailto:info@wolframalpha.com",
		.difficulty = 0x1000,
		.notes = "For the immediate future, send a message to WolframAlpha, and your Wolfram ID will be deleted manually."
	},
	{
		.name = "Woltlab",
		.query = "woltlab",
		.url = "https://www.woltlab.com/account-management/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Your account will be deleted after a 7-day grace period. Created content, like forum posts, will not be deleted. Your username will be anonymized and protected against re-registration for a year."
	},
	{
		.name = "Woolworths",
		.query = "woolworths",
		.url = "https://www.woolworths.com.au/shop/discover/about-us/contact-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Select the 'Chat with us' option and inform the chat bot you wish to delete your account until it gives you to option to talk to a human. Select that, tell them you want your account deleted, and they will action it for you."
	},
	{
		.name = "Woot",
		.query = "woot",
		.url = "https://account.woot.com/support/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "From the support page, choose 'I want to look at my account!' -> 'I want to deactivate my account.' and you will then see a form where you can fill out your request."
	},
	{
		.name = "Wordfeud",
		.query = "wordfeud",
		.url = "https://wordfeud.com/",
		.email = "mailto:support@wordfeud.com",
		.difficulty = 0x400,
		.notes = "Log in to your Wordfeud account in the Wordfeud app and go to settings. Click on 'Wordfeud-account' and click 'Delete account'. A notice will appear telling you your account is planned for deletion in 7 days."
	},
	{
		.name = "WordPress.com",
		.query = "wordpresscom",
		.url = "https://wordpress.com/me/account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "First cancel any active subscriptions in your account. Then go to Account Settings, click 'Delete your account permanently', click 'Delete account', click 'Continue', enter your username and click 'Delete Account'. You will not be able to open a new account using this email for 30 days and your WooCommerce, Crowdsignal, IntenseDebate, and Gravatar accounts will also be deleted."
	},
	{
		.name = "WordPress.org",
		.query = "wordpressorg",
		.url = "https://wordpress.org/about/privacy/data-erasure-request/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Use the linked form to request account deletion. This will prompt an automatic request for verification of email-address ownership. Once you verify ownership of the email-address, then the account is deleted. Forum activity will be anonymized rather than deleted."
	},
	{
		.name = "workupload",
		.query = "workupload",
		.url = "https://workupload.com/contact",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Write a short mail using their web contact form."
	},
	{
		.name = "Workwise.io",
		.query = "workwiseio",
		.url = "https://www.workwise.io/en/einstellungen",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on the link, scroll down and click on 'Delete Account'. After confirmation your account will be deleted immediately."
	},
	{
		.name = "World Market",
		.query = "world market",
		.url = "https://www.worldmarket.com/category/customer-service/world-market-rewards-faqs.do",
		.email = "mailto:customercare@worldmarket.com",
		.difficulty = 0x1000,
		.notes = "According to their help page, you must send an e-mail to them to request the deletion. The deletion is completed within 2-4 weeks."
	},
	{
		.name = "WorldAnvil",
		.query = "worldanvil",
		.url = "https://www.worldanvil.com/dashboard/user/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page, scroll down to `Account Deletion`, enter your username, then click `Delete Account`"
	},
	{
		.name = "WOT (Web Of Trust)",
		.query = "wot web of trust",
		.url = "https://support.mywot.com/hc/en-us/articles/115002805334-How-can-I-delete-my-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Log into your account -> go to \"My profile\" page -> click on pencil icon -> click on \"Delete account\"."
	},
	{
		.name = "WP",
		.query = "wp",
		.url = "https://1login.wp.pl/profil/dane",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page, click `Usuń konto`, log in again, then click `Usuń konto ze skrzynką`."
	},
	{
		.name = "Writefull",
		.query = "writefull",
		.url = "https://www.writefull.com/privacy",
		.email = "mailto:support@writefull.com?subject=Data%20Deletion%20Request&body=Please%20delete%20my%20account%20registered%20with%20this%20email%20address.",
		.difficulty = 0x1000,
		.notes = "One must contact customer support via email to request account deletion."
	},
	{
		.name = "WT.Social",
		.query = "wtsocial",
		.url = "https://wt.social/myaccount/deactivate-account",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "Only deactivation is possible"
	},
	{
		.name = "X",
		.query = "x",
		.url = "https://x.com/settings/deactivate",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Your account is deactivated before being deleted. After 30 days of remaining deactivated it will then be deleted."
	},
	{
		.name = "XDA Developers",
		.query = "xda developers",
		.url = "https://docs.google.com/forms/d/e/1FAIpQLSdxxyNAowYtLZ0Thrzjdrw_hME_mdQW5mU5JJG1tXwZuraang/viewform",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Visit this 'Data Deletion Request Form' and fill in the form. Make sure to specify if you want your posts deleted."
	},
	{
		.name = "XenForo Italia",
		.query = "xenforo italia",
		.url = "https://www.xfitalia.it/community/account/account-details",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Visit the linked page and delete your account. Your account will be deleted in 3 days."
	},
	{
		.name = "Xing",
		.query = "xing",
		.url = "https://www.xing.com/preferences/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select 'Delete Profile' at the bottom of the page."
	},
	{
		.name = "XREAL",
		.query = "xreal",
		.url = "https://us.shop.xreal.com/",
		.email = "mailto:support@xreal.com?subject=XREAL%20Account%20Deletion%20Request&body=Please%20delete%20my%20XREAL%20account.",
		.difficulty = 0x1000,
		.notes = "\"Account deactivation requires you to contact the support email, and they will assist you with the deactivation process. Deactivation removes all your personal information, including your account details, profile, and data associated with your account. This information will be permanently removed, and the operation cannot be undone.\""
	},
	{
		.name = "XSplit",
		.query = "xsplit",
		.url = "https://www.xsplit.com/dashboard/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "At the bottom of the account settings there is a delete account button. You'll just need to re-enter your password."
	},
	{
		.name = "XVideos",
		.query = "xvideos",
		.url = "https://info.xvideos.com/faq/question/73-everyone-how_can_i_delete_my_account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Yahoo!",
		.query = "yahoo",
		.url = "https://edit.yahoo.com/config/delete_user",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Account gets deactivated for a waiting period of 30-180 days depending on your country, then permanently deleted."
	},
	{
		.name = "Yammer",
		.query = "yammer",
		.url = "https://www.yammer.com/mozillians/account/display_options",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the above URL, click the 'Delete your Yammer account' link in the top right and confirm."
	},
	{
		.name = "Yandex",
		.query = "yandex",
		.url = "https://passport.yandex.com/profile/delete?origin=passport_profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "On the above URL, confirm the deletion by entering the CAPTCHA code. If backup email and/or phone added you will need to send a confirmation code and fill in the code(s). Press \"Delete account\" and confirm deletion in the dialog box."
	},
	{
		.name = "Yannik",
		.query = "yannik",
		.url = "https://yannik.biz/",
		.email = "mailto:support@yannik.biz",
		.difficulty = 0x1000,
		.notes = "Contact the customer support and ask to delete your account."
	},
	{
		.name = "Yelp",
		.query = "yelp",
		.url = "https://www.yelp.com/support/contact/account_closure",
		.email = "mailto:dataprotection@yelp.com?subject=Account%20Data%20Deletion%20Request&body=Please%20delete%20my%20account%20and%20all%20data%20associated%20with%20it.%20My%20username%20is%20XXXXXX",
		.difficulty = 0x1000,
		.notes = "Closing your account does not remove all data. To delete the data associated with your account, you must email them. Additional information can be found here: [Yelp - Support Center - How do I close my account?](https://www.biz.yelp.com/support-center/article/How-do-I-close-my-account)."
	},
	{
		.name = "YNAB (You Need A Budget)",
		.query = "ynab you need a budget",
		.url = "https://app.youneedabudget.com/users/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Yoast",
		.query = "yoast",
		.url = "https://yoast.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click \"Account\" then click \"Delete your account\"."
	},
	{
		.name = "You.com",
		.query = "youcom",
		.url = "https://you.com/profile",
		.email = "mailto:legal@you.com",
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "youlookfab",
		.query = "youlookfab",
		.url = "https://youlookfab.com",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login -> Profile Dropdown -> Profile -> Account -> Delete Your Account"
	},
	{
		.name = "YouSee.dk",
		.query = "youseedk",
		.url = "https://etray.yousee.dk/Privat/N/Portal/Master.html?token=Jhzav0yLEx1=1x/hWwg2lMi0OYiUyMQ4HsKy",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Fill out the form and request account deletion. Verification of your identity is required via MitID. Processing of the request takes up to 30 days. Payment history is kept for 5 years."
	},
	{
		.name = "Yousician",
		.query = "yousician",
		.url = "https://account.yousician.com/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your account, scroll down and click \"Delete account\" in the \"Advanced Settings\" section. You will be prompted to enter your password."
	},
	{
		.name = "YouTrack",
		.query = "youtrack",
		.url = "https://hub.jetbrains.com/users/me",
		.email = NULL,
		.difficulty = 0x2000,
		.notes = "You cannot delete your account, but anonymize your data. In your Profile settings page, on the top-right corner there is an \"anonymize user\" button. Click it, then your name&username will be anonymized and e-mail will be removed."
	},
	{
		.name = "YouTube",
		.query = "youtube",
		.url = "https://myaccount.google.com/deleteservices",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click the trash can next to YouTube and confirm the verification email. You can request a copy of your data, before you delete it.\nIf you want to delete your entire google account, use the instructions for [Google](https://justdeleteme.xyz/#google)."
	},
	{
		.name = "YoYo Games",
		.query = "yoyo games",
		.url = "https://help.yoyogames.com/hc/en-us/articles/360025895752-How-can-I-delete-my-data-",
		.email = "mailto:datacontroller@yoyogames.com",
		.difficulty = 0x1000,
		.notes = NULL
	},
	{
		.name = "YRIS",
		.query = "yris",
		.url = "https://www.yris.eu/en/frequently-asked-questions/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "To unsubscribe from YRIS, open the application on your smartphone, log in, go to \"Settings\" (the icon at the bottom right of the main screen), then click on \"Delete my account\". If you are unable to log in, you can request to unsubscribe via the contact form."
	},
	{
		.name = "Yuka",
		.query = "yuka",
		.url = "https://app.yuka.io/deleteAccount",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "After logging in the application, on your mobile device, visit the link and follow the instructions provided."
	},
	{
		.name = "Yummly",
		.query = "yummly",
		.url = "https://www.yummly.com/settings",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Select \"To delete your account, click here\" at the bottom of the page."
	},
	{
		.name = "YUR",
		.query = "yur",
		.url = "https://docs.google.com/forms/d/e/1FAIpQLSca2oePqdnrJWKh4U2LvnwSBZCi5FRTCDdoi0pjU21u9kBFLQ/viewform",
		.email = "mailto:hi@yur.fit",
		.difficulty = 0x1000,
		.notes = "Requests will be processed in accordance with local laws. Request account removal by sending an email to them or filling the form (requires Google account). Include your full name, email address associated with your account and a detailed description of your data request."
	},
	{
		.name = "Z-Library",
		.query = "zlibrary",
		.url = "https://z-library.se",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Click on top-right-corner menu -> Edit Profile -> Remove Profile -> Remove my account. Enter Captcha to remove account permanently. Note that you'll unable to create a new account associated with this emailID."
	},
	{
		.name = "Zalando",
		.query = "zalando",
		.url = "https://www.zalando.co.uk/myaccount/privacy/",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on the link, log in and then click on the \"Delete your account\" tab. Finally, click on \"Request account and data deletion\"."
	},
	{
		.name = "Zamnesia",
		.query = "zamnesia",
		.url = "https://www.zamnesia.com/contact-us",
		.email = "mailto:support@zamnesia.com",
		.difficulty = 0x1000,
		.notes = "If you want to have your account deleted you have to send Zamnesia an email and they will delete your account according to the GDPR rules."
	},
	{
		.name = "Zanichelli",
		.query = "zanichelli",
		.url = "https://my.zanichelli.it/registrazione/profilo",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your profile, click on the button to delete the account and confirm. Your account will be deleted after 30 days, if you log in during this period, you cancel the deletion of the account."
	},
	{
		.name = "Zap Imóveis",
		.query = "zap imoveis",
		.url = "https://privacidade.zapimoveis.com.br/?itl_id=1000129&itl_name=zap_-_link-footer_portal-de-privacidade_to_zap_login",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Access the link and click on 'Excluir Conta'"
	},
	{
		.name = "Zapier",
		.query = "zapier",
		.url = "https://zapier.com/app/settings/advanced/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the URL, confirm your email. You'll be redirected to the login page. Confirm your email again and enter \"DELETE\" (all caps) In the \"Confirm you want to delete your account\" field."
	},
	{
		.name = "Zappos",
		.query = "zappos",
		.url = "https://www.zappos.com/c/contact-us",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Contact chat support. You may be asked to verify your identity with your last name & billing address."
	},
	{
		.name = "Zattoo",
		.query = "zattoo",
		.url = "https://zattoo.com/account/delete",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Zaxby's",
		.query = "zaxbys",
		.url = "https://www.zaxbys.com/",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Call 1-866-892-9297 and press 2 to be connected with a reward account services agent and ask to have your account deleted. Your account will be deleted after 24-48 hours."
	},
	{
		.name = "Zazzle",
		.query = "zazzle",
		.url = "https://www.zazzle.com/about/ask",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "To terminate your account, simply send a message via their web contact form to Customer Care that contains your username and the email address associated with your account.  Once you've done so, a member of our Support Team will disable your account and remove any products, both public and private, and disable your store (if applicable).  The account will be deleted fully when our system processes the next batch of account removals."
	},
	{
		.name = "Zeet",
		.query = "zeet",
		.url = "https://zeet.co/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on the \"Delete Account\" button."
	},
	{
		.name = "Zeit Online",
		.query = "zeit online",
		.url = "https://zeit.de",
		.email = "mailto:community@zeit.de",
		.difficulty = 0x1000,
		.notes = "Send an Email with the Username"
	},
	{
		.name = "Zello",
		.query = "zello",
		.url = "https://my.zello.com/user/home/#remove-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Click on the \"Delete Account\" button."
	},
	{
		.name = "Zenamu",
		.query = "zenamu",
		.url = "https://zenamu.com/contact/",
		.email = "mailto:support@zenamu.com",
		.difficulty = 0x1000,
		.notes = "To request account deletion, you must email them"
	},
	{
		.name = "Zendesk",
		.query = "zendesk",
		.url = "https://support.zendesk.com/hc/en-us/articles/223774027-Canceling-your-Support-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to Admin->Settings->Subscription and click 'Yes, cancel my account'."
	},
	{
		.name = "Zenkit",
		.query = "zenkit",
		.url = "https://zenkit.com/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, go to profile, scroll down and click 'Delete Account'. Confirm by entering 'DELETEMYACCOUNT' and click 'Delete My Account'."
	},
	{
		.name = "ZenMarket",
		.query = "zenmarket",
		.url = "https://zenmarket.jp/en/help.aspx",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "You must contact support to request account deletion."
	},
	{
		.name = "Zenni Optical",
		.query = "zenni optical",
		.url = "https://www.zennioptical.com/help/contactsupport",
		.email = NULL,
		.difficulty = 0x1000,
		.notes = "Open a support ticket or call them. Upon calling (800) 211-2105 and using the '1' extension to talk to a human customer service agent, explain that you want to delete your account. Provide your account email and confirm that you will no longer be able to use that email to create a future account. After confirming, it takes 24-48h to receive an account deletion confirmation email"
	},
	{
		.name = "Zeplin",
		.query = "zeplin",
		.url = "https://app.zeplin.io/profile/account",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "You need to transfer or delete your projects and cancel your subscription (if you have one) before deleting you account. Unlink your google account if you used it to login. Go to \"Profile\" -> \"account\" -> click \"Want to remove your account completely?\" -> click \"DELETE ACCOUNT\" and provide your password."
	},
	{
		.name = "Zero",
		.query = "zero",
		.url = "https://zerofasting.zendesk.com/hc/en-us/articles/4402526167067-How-to-Delete-Your-Account-and-Data",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Open the app switch to the 'me' page and then My Data -> Delete my account"
	},
	{
		.name = "ZeroSSL",
		.query = "zerossl",
		.url = "https://app.zerossl.com/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll to the bottom of the linked page and click 'Delete Account'."
	},
	{
		.name = "ZeroTier",
		.query = "zerotier",
		.url = "https://docs.zerotier.com/central-billing/#how-to-delete-your-whole-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to your account page and click on the \"delete account\" button."
	},
	{
		.name = "Zhihu",
		.query = "zhihu",
		.url = "https://www.zhihu.com/unregister",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "Zoho",
		.query = "zoho",
		.url = "https://accounts.zoho.com/u/h#setting/closeaccount",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "ZombieLink",
		.query = "zombielink",
		.url = "https://zombiesrungame.com/zombielink/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Scroll down to 'Delete and Reset Account' and click the red link: 'delete your account'"
	},
	{
		.name = "Zoom",
		.query = "zoom",
		.url = "https://zoom.us/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, go to 'Account Profile', click 'Terminate my account'. Enter password in dialog box and confirm."
	},
	{
		.name = "Zotero",
		.query = "zotero",
		.url = "https://www.zotero.org/settings/account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Login to your account, go to 'Settings', click on 'Permanently Delete Account' at the bottom of the page."
	},
	{
		.name = "Zulip",
		.query = "zulip",
		.url = "https://zulipchat.com/help/deactivate-your-account",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Navigate to Settings -> Your Account -> Deactivate Account"
	},
	{
		.name = "zyBooks",
		.query = "zybooks",
		.url = "https://www.zybooks.com/privacy-policy",
		.email = "mailto:support@zybooks.com",
		.difficulty = 0x1000,
		.notes = "Submit a deletion request by emailing them or calling +1-833-719-2300."
	},
	{
		.name = "Zynga",
		.query = "zynga",
		.url = "https://privacy.zynga.com/portal/#/",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Select the game you want to delete your account from (if you want to delete the entire account choose zyngagames.com). Log in. Click on the FAQ tab on the top navigation bar. Then click “Go here to request account deletion”. Click the box indicating your understanding and then click Continue. To confirm deletion, click the box, select a reason, and then click Delete My Account. Your account deletion request is now pending. Expect the deletion request to be completed within 30 days of the request."
	},
	{
		.name = "Zé Delivery",
		.query = "ze delivery",
		.url = "https://faq-consumidor-zedelivery.sprinklr.com/articles/conta-e-privacidade/como-deletar-minha-conta/621889ac3df9251d7ed0da18",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "ÇiçekSepeti",
		.query = "ciceksepeti",
		.url = "https://www.ciceksepeti.com/gizlilik-sozlesmesi",
		.email = "mailto:kvkk@ciceksepeti.com?subject=Hesap%20Silme%20Talebi&body=Hesab%C4%B1m%C4%B1n%20silinmesini%20talep%20ediyorum.%20Ekte%20KVKK%20formum%20bulunmaktad%C4%B1r.",
		.difficulty = 0x1000,
		.notes = "In order to delete your account you have to email them and fill out their \"KVKK\" form and send them an email. [The form is only in Turkish](https://cdn03.ciceksepeti.com/images/Ciceksepeti_KVKK_Basvuru_Formu_06022019.docx)."
	},
	{
		.name = "Île-de-France Mobilités Connect",
		.query = "iledefrance mobilites connect",
		.url = "https://www.iledefrance-mobilites.fr/en/aide-et-contacts/iledefrance-mobilites-connect/desactiver-mon-compte-idfm-connect",
		.email = NULL,
		.difficulty = 0x800,
		.notes = "Log in to the account Île-de-France Mobilités Connect that you want to deactivate, in the \"My space\" section, select \"Manage my information\", click on the link \"Deactivate my Île-de-France Mobilités Connect account\", click the \"Confirm Deactivation\" button"
	},
	{
		.name = "ÖBB",
		.query = "obb",
		.url = "https://www.oebb.at/en/fragen-und-antworten/tickets-kaufen/online-mobile-ticketing/registrierung",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "You can easily delete your ÖBB customer account in the account settings page. Go to your account area at shop.oebbtickets.at or in the ÖBB app and go to the account settings. There you will find the menu item \"Close account\"."
	},
	{
		.name = "Мій Клас",
		.query = "міи клас",
		.url = "https://www.miyklas.com.ua/Account/DeleteProfile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = NULL
	},
	{
		.name = "РешуОГЭ/РешуЕГЭ/СдамГИА",
		.query = "решуогэрешуегэсдамгиа",
		.url = "https://chem-ege.sdamgia.ru/profile",
		.email = NULL,
		.difficulty = 0x400,
		.notes = "Go to the linked page and click \"Удалить учетную запись\"."
	},

};

#endif
