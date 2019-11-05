/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/NSCopying.h>
#import <identityservicesd/IDSUser.h>

@class NSString;

@interface IDSPhoneUser : NSObject <NSCopying, IDSUser> {

	NSString* _phoneNumber;
	NSString* _phoneBookNumber;
	NSString* _labelID;

}

@property (nonatomic,retain) NSString * phoneNumber;                  //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * phoneBookNumber;              //@synthesize phoneBookNumber=_phoneBookNumber - In the implementation block
@property (nonatomic,readonly) NSString * labelID;                    //@synthesize labelID=_labelID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString*)uniqueIdentifier;
-(long long)realm;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)labelID;
-(NSString *)phoneBookNumber;
-(void)setPhoneBookNumber:(NSString *)arg1 ;
-(BOOL)isEqualToUser:(id)arg1 ;
-(id)unprefixedIdentifier;
-(id)realmPrefixedIdentifier;
-(id)phoneUserWithUpdatedPhoneNumber:(id)arg1 phoneBookNumber:(id)arg2 ;
-(BOOL)isEqualToPhoneUser:(id)arg1 ;
-(id)initWithLabelID:(id)arg1 ;
-(id)initWithLabelID:(id)arg1 phoneBookNumber:(id)arg2 ;
-(id)phoneUserWithUpdatedPhoneNumber:(id)arg1 ;
@end

