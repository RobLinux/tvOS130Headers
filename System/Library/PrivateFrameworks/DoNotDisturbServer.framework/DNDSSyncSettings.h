/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/NSCopying.h>

@interface DNDSSyncSettings : NSObject <NSCopying> {

	BOOL _syncEnabled;

}

@property (getter=isSyncEnabled,nonatomic,readonly) BOOL syncEnabled;              //@synthesize syncEnabled=_syncEnabled - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isSyncEnabled;
-(id)initWithSyncEnabled:(BOOL)arg1 ;
@end

