/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/appstored-Structs.h>
#import <appstored/NSCopying.h>

@class NSString, NSNumber, NSArray;

@interface PurgeableApp : NSObject <NSCopying> {

	BOOL _systemApp;
	NSString* _bundleID;
	NSNumber* _diskUsage;
	NSArray* _plugins;
	long long _order;
	NSString* _reason;
	NSNumber* _storeItemID;

}

@property (nonatomic,copy) NSString * bundleID;                              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSNumber * diskUsage;                             //@synthesize diskUsage=_diskUsage - In the implementation block
@property (nonatomic,copy) NSArray * plugins;                                //@synthesize plugins=_plugins - In the implementation block
@property (assign,nonatomic) long long order;                                //@synthesize order=_order - In the implementation block
@property (nonatomic,copy) NSString * reason;                                //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSNumber * storeItemID;                           //@synthesize storeItemID=_storeItemID - In the implementation block
@property (assign,getter=isSystemApp,nonatomic) BOOL systemApp;              //@synthesize systemApp=_systemApp - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)reason;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(long long)order;
-(void)setReason:(NSString *)arg1 ;
-(void)setOrder:(long long)arg1 ;
-(NSArray *)plugins;
-(void)setStoreItemID:(NSNumber *)arg1 ;
-(NSNumber *)storeItemID;
-(BOOL)isSystemApp;
-(void)setSystemApp:(BOOL)arg1 ;
-(id)initWithBundleID:(id)arg1 ;
-(NSNumber *)diskUsage;
-(void)setDiskUsage:(NSNumber *)arg1 ;
-(id)asdApp;
-(void)setPlugins:(NSArray *)arg1 ;
@end

