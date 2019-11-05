/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CTCarrierSpace/NSSecureCoding.h>

@class NSString, NSDate, NSArray;

@interface CTCarrierSpaceUsageAccountMetrics : NSObject <NSSecureCoding> {

	BOOL _localDevice;
	NSString* _networkUsageLabel;
	long long _deviceType;
	NSString* _subscriptionStatus;
	NSString* _planType;
	NSDate* _billingCycleEndDate;
	NSArray* _applicablePlans;

}

@property (nonatomic,retain) NSString * networkUsageLabel;               //@synthesize networkUsageLabel=_networkUsageLabel - In the implementation block
@property (assign,nonatomic) long long deviceType;                       //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) BOOL localDevice;                           //@synthesize localDevice=_localDevice - In the implementation block
@property (nonatomic,retain) NSString * subscriptionStatus;              //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
@property (nonatomic,retain) NSString * planType;                        //@synthesize planType=_planType - In the implementation block
@property (nonatomic,retain) NSDate * billingCycleEndDate;               //@synthesize billingCycleEndDate=_billingCycleEndDate - In the implementation block
@property (nonatomic,retain) NSArray * applicablePlans;                  //@synthesize applicablePlans=_applicablePlans - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)planType;
-(void)setPlanType:(NSString *)arg1 ;
-(long long)deviceType;
-(void)setDeviceType:(long long)arg1 ;
-(NSDate *)billingCycleEndDate;
-(void)setBillingCycleEndDate:(NSDate *)arg1 ;
-(NSString *)networkUsageLabel;
-(BOOL)localDevice;
-(NSString *)subscriptionStatus;
-(NSArray *)applicablePlans;
-(void)setNetworkUsageLabel:(NSString *)arg1 ;
-(void)setLocalDevice:(BOOL)arg1 ;
-(void)setSubscriptionStatus:(NSString *)arg1 ;
-(void)setApplicablePlans:(NSArray *)arg1 ;
@end

