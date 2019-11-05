/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMFitnessMachineInternal;

@interface CMFitnessMachine : NSObject {

	CMFitnessMachineInternal* _internal;

}

@property (nonatomic,readonly) CMFitnessMachineInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(id)init;
-(void)dealloc;
-(CMFitnessMachineInternal *)_internal;
-(void)feedFitnessMachineData:(id)arg1 ;
@end

