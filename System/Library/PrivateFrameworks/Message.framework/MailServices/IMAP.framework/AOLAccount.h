/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMAP/IMAPAccount.h>

@interface AOLAccount : IMAPAccount
+(id)hostname;
+(id)displayedAccountTypeString;
+(BOOL)usesSSL;
+(BOOL)isPredefinedAccountType;
+(id)accountPropertiesValueForKey:(id)arg1 value:(id)arg2 ;
+(id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2 ;
+(BOOL)usernameIsEmailAddress;
+(id)_usernameWithHostname:(id)arg1 ;
+(id)emailAddressHostPart;
+(id)deliveryAccountHostname;
+(BOOL)deliveryAccountUsesSSL;
+(unsigned)deliveryAccountPortNumber;
-(void)setHostname:(id)arg1 ;
-(void)setUsername:(id)arg1 ;
-(id)hostname;
-(id)emailAddresses;
-(BOOL)usesSSL;
-(void)setUsesSSL:(BOOL)arg1 ;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(id)_deliveryAccountCreateIfNeeded:(BOOL)arg1 ;
-(id)statisticsKind;
-(id)_defaultSpecialMailboxNameForType:(int)arg1 ;
-(id)displayUsername;
-(BOOL)derivesDeliveryAccountInfoFromMailAccount;
-(id)iconString;
@end

