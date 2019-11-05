/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>
#import <SAObjects/SAAceComparable.h>

@class NSArray, NSDate, NSString, NSDictionary, NSNumber;

@interface SAPerson : SADomainObject <SAAceComparable>

@property (nonatomic,copy) NSArray * addresses; 
@property (nonatomic,copy) NSDate * birthday; 
@property (nonatomic,copy) NSString * company; 
@property (nonatomic,copy) NSString * companyPhonetic; 
@property (nonatomic,copy) NSArray * emails; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSDictionary * firstNameAPGs; 
@property (nonatomic,copy) NSString * firstNamePhonetic; 
@property (nonatomic,copy) NSString * fullName; 
@property (nonatomic,copy) NSString * internalGUID; 
@property (nonatomic,copy) NSNumber * isBlocked; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSDictionary * lastNameAPGs; 
@property (nonatomic,copy) NSString * lastNamePhonetic; 
@property (nonatomic,copy) NSNumber * me; 
@property (nonatomic,copy) NSString * middleName; 
@property (nonatomic,copy) NSString * nickName; 
@property (nonatomic,copy) NSDictionary * nickNameAPGs; 
@property (nonatomic,copy) NSString * phonemeData; 
@property (nonatomic,copy) NSArray * phones; 
@property (nonatomic,copy) NSString * prefix; 
@property (nonatomic,copy) NSNumber * pseudo; 
@property (nonatomic,copy) NSArray * relatedNames; 
@property (nonatomic,copy) NSArray * socialProfiles; 
@property (nonatomic,copy) NSString * suffix; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)personFromDisplayName:(id)arg1 address:(id)arg2 ;
+(id)person;
+(id)personWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)addresses;
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)isBlocked;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)fullName;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(NSString *)company;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setCompany:(NSString *)arg1 ;
-(NSString *)nickName;
-(void)setNickName:(NSString *)arg1 ;
-(NSNumber *)me;
-(void)setMe:(NSNumber *)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(NSString *)suffix;
-(NSArray *)socialProfiles;
-(NSArray *)relatedNames;
-(NSString *)phonemeData;
-(void)setSocialProfiles:(NSArray *)arg1 ;
-(void)setRelatedNames:(NSArray *)arg1 ;
-(void)setPhonemeData:(NSString *)arg1 ;
-(NSDate *)birthday;
-(void)setBirthday:(NSDate *)arg1 ;
-(id)encodedClassName;
-(NSString *)internalGUID;
-(void)setInternalGUID:(NSString *)arg1 ;
-(NSArray *)emails;
-(void)setEmails:(NSArray *)arg1 ;
-(NSNumber *)pseudo;
-(void)setPseudo:(NSNumber *)arg1 ;
-(void)setAddresses:(NSArray *)arg1 ;
-(NSString *)companyPhonetic;
-(void)setCompanyPhonetic:(NSString *)arg1 ;
-(NSDictionary *)firstNameAPGs;
-(void)setFirstNameAPGs:(NSDictionary *)arg1 ;
-(NSString *)firstNamePhonetic;
-(void)setFirstNamePhonetic:(NSString *)arg1 ;
-(void)setIsBlocked:(NSNumber *)arg1 ;
-(NSDictionary *)lastNameAPGs;
-(void)setLastNameAPGs:(NSDictionary *)arg1 ;
-(NSString *)lastNamePhonetic;
-(void)setLastNamePhonetic:(NSString *)arg1 ;
-(NSDictionary *)nickNameAPGs;
-(void)setNickNameAPGs:(NSDictionary *)arg1 ;
-(NSArray *)phones;
-(void)setPhones:(NSArray *)arg1 ;
@end

