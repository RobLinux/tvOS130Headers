/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVCoreSettings.framework/TVCoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMRoom, NSString;

@interface TVCSRoom : NSObject {

	HMRoom* _hmRoom;

}

@property (nonatomic,retain) HMRoom * hmRoom;              //@synthesize hmRoom=_hmRoom - In the implementation block
@property (readonly) NSString * name; 
+(id)_roomWithHMRoom:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setHmRoom:(HMRoom *)arg1 ;
-(HMRoom *)hmRoom;
@end

