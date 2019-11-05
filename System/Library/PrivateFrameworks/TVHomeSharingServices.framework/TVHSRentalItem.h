/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHomeSharingServices-Structs.h>
#import <TVHomeSharingServices/NSSecureCoding.h>
#import <TVHomeSharingServices/NSCopying.h>

@class NSString, NSNumber;

@interface TVHSRentalItem : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSNumber* _rentalKeyID;
	NSNumber* _userID;
	NSNumber* _DAAPPersistentItemID;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSNumber * rentalKeyID;                       //@synthesize rentalKeyID=_rentalKeyID - In the implementation block
@property (nonatomic,copy) NSNumber * userID;                            //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSNumber * DAAPPersistentItemID;              //@synthesize DAAPPersistentItemID=_DAAPPersistentItemID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)userID;
-(void)setName:(NSString *)arg1 ;
-(void)setUserID:(NSNumber *)arg1 ;
-(void)setRentalKeyID:(NSNumber *)arg1 ;
-(void)setDAAPPersistentItemID:(NSNumber *)arg1 ;
-(NSNumber *)rentalKeyID;
-(NSNumber *)DAAPPersistentItemID;
@end

