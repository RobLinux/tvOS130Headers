/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RESingleton.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface REInterfaceCache : RESingleton {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _supportedInterfaces;

}
-(id)_init;
-(id)_supportedProtocols;
-(BOOL)exportedInterfaceClass:(Class)arg1 ;
-(void)enumerateExportedPropertiesOfClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_queue_valueForKey:(id)arg1 ;
-(BOOL)_supportsCache;
-(id)_accessInterfaceForKey:(id)arg1 ;
-(BOOL)_interface:(id)arg1 implementsInterface:(id)arg2 ;
-(void)_enumeratePropertiesOfInterface:(id)arg1 forProtocol:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_enumerateMethodsOfInterface:(id)arg1 forProtocol:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)exportedInterfaceProtocol:(id)arg1 ;
-(void)enumerateExportedPropertiesOfProtocol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateExportedMethodsOfClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateExportedMethodsOfProtocol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

