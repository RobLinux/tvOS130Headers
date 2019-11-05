/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/NSSecureCoding.h>

@class NSString;

@interface SFContactInfo : NSObject <NSSecureCoding> {

	NSString* _contactIdentifier;
	NSString* _emailAddress;
	NSString* _phoneNumber;

}

@property (nonatomic,copy) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,copy) NSString * emailAddress;                   //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                    //@synthesize phoneNumber=_phoneNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)phoneNumber;
-(NSString *)contactIdentifier;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setContactIdentifier:(NSString *)arg1 ;
@end

