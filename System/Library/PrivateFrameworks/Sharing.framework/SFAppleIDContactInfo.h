/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <Sharing/NSSecureCoding.h>

@class NSString, NSArray;

@interface SFAppleIDContactInfo : NSObject <NSSecureCoding> {

	NSString* _firstName;
	NSString* _lastName;
	NSArray* _validatedEmailAddresses;
	NSArray* _validatedPhoneNumbers;

}

@property (nonatomic,retain) NSString * firstName;                           //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                            //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSArray * validatedEmailAddresses;              //@synthesize validatedEmailAddresses=_validatedEmailAddresses - In the implementation block
@property (nonatomic,retain) NSArray * validatedPhoneNumbers;                //@synthesize validatedPhoneNumbers=_validatedPhoneNumbers - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(BOOL)isEqualToContactInfo:(id)arg1 ;
-(NSArray *)validatedEmailAddresses;
-(NSArray *)validatedPhoneNumbers;
-(void)setValidatedEmailAddresses:(NSArray *)arg1 ;
-(void)setValidatedPhoneNumbers:(NSArray *)arg1 ;
@end

