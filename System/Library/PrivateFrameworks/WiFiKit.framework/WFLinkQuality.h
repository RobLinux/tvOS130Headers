/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WFLinkQuality : NSObject {

	float _scaledRssi;
	NSString* _ssid;
	long long _rssi;

}

@property (nonatomic,copy) NSString * ssid;                 //@synthesize ssid=_ssid - In the implementation block
@property (assign,nonatomic) long long rssi;                //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) float scaledRssi;              //@synthesize scaledRssi=_scaledRssi - In the implementation block
-(id)description;
-(id)init;
-(long long)rssi;
-(void)setRssi:(long long)arg1 ;
-(NSString *)ssid;
-(void)setSsid:(NSString *)arg1 ;
-(float)scaledRssi;
-(id)initWithSSID:(id)arg1 rssi:(long long)arg2 scaledRSSI:(float)arg3 ;
-(void)setScaledRssi:(float)arg1 ;
@end

