/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/NSCopying.h>
#import <Contacts/NSSecureCoding.h>

@class NSString;

@interface CNAccount : NSObject <NSCopying, NSSecureCoding> {

	int _iOSLegacyIdentifier;
	NSString* _identifier;
	NSString* _externalIdentifierString;

}

@property (nonatomic,readonly) int iOSLegacyIdentifier;                               //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalIdentifierString;              //@synthesize externalIdentifierString=_externalIdentifierString - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)identifierProvider;
+(id)makeIdentifier;
+(id)makeIdentifierString;
+(id)localAccount;
+(id)predicateForAccountWithExternalIdentifier:(id)arg1 ;
+(id)predicateForAccountForContainerWithIdentifier:(id)arg1 ;
+(id)predicateForAccountsWithIdentifiers:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(int)iOSLegacyIdentifier;
-(id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2 ;
-(id)initWithExternalIdentifier:(id)arg1 ;
-(NSString *)externalIdentifierString;
-(id)initWithIdentifier:(id)arg1 externalIdentifier:(id)arg2 iOSLegacyIdentifier:(int)arg3 ;
@end

