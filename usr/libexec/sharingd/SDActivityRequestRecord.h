/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:55 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSUUID, NSString, NSTimer, NSError;

@interface SDActivityRequestRecord : NSObject {

	NSDate* _requestCreatedDate;
	NSUUID* _requestIdentifier;
	NSString* _deviceIdentifier;
	/*^block*/id _completionHandler;
	NSTimer* _timeoutTimer;
	long long _timeoutTimeInterval;
	NSError* _error;

}

@property (nonatomic,copy) NSDate * requestCreatedDate;                  //@synthesize requestCreatedDate=_requestCreatedDate - In the implementation block
@property (nonatomic,copy) NSUUID * requestIdentifier;                   //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifier;                  //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSTimer * timeoutTimer;                     //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (assign,nonatomic) long long timeoutTimeInterval;              //@synthesize timeoutTimeInterval=_timeoutTimeInterval - In the implementation block
@property (nonatomic,retain) NSError * error;                            //@synthesize error=_error - In the implementation block
-(id)description;
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(NSUUID *)requestIdentifier;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(NSTimer *)timeoutTimer;
-(void)setTimeoutTimer:(NSTimer *)arg1 ;
-(NSDate *)requestCreatedDate;
-(void)setRequestCreatedDate:(NSDate *)arg1 ;
-(long long)timeoutTimeInterval;
-(void)setTimeoutTimeInterval:(long long)arg1 ;
@end
