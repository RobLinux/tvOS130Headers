/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:58:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVDiagnostics.app/TVDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DADeviceState;

@interface DADeviceStateChangeNotificationInfo : NSObject {

	unsigned long long _changedProperties;
	DADeviceState* _snapshot;

}

@property (nonatomic,readonly) unsigned long long changedProperties;              //@synthesize changedProperties=_changedProperties - In the implementation block
@property (nonatomic,readonly) DADeviceState * snapshot;                          //@synthesize snapshot=_snapshot - In the implementation block
+(id)infoWithChangedProperties:(unsigned long long)arg1 snapshot:(id)arg2 ;
-(DADeviceState *)snapshot;
-(unsigned long long)changedProperties;
-(id)initWithChangedProperties:(unsigned long long)arg1 snapshot:(id)arg2 ;
@end
