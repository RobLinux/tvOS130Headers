/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:17 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/PlugIns/PodcastsTVTopShelfExtension.appex/PodcastsTVTopShelfExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PodcastsTVTopShelfExtension/PodcastsTVTopShelfExtension-Structs.h>
@class NSObject, NSString, NSDictionary;

@interface MTMPUApplicationDefaults : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _applicationIdentifier;
	NSDictionary* _defaultValues;
	unsigned long long _referenceCountForDefferringUpdates;

}
-(void)dealloc;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)registerDefaults:(id)arg1 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(void)setNumber:(id)arg1 forKey:(id)arg2 ;
-(id)numberForKey:(id)arg1 ;
-(void)_defaultsDidChange;
-(id)dateForKey:(id)arg1 ;
-(void)setDate:(id)arg1 forKey:(id)arg2 ;
-(id)initWithApplicationIdentifier:(id)arg1 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(id)_defaultsDidChangeNotificationName;
-(id)_objectForKey:(id)arg1 expectedTypeID:(unsigned long long)arg2 ;
-(CFStringRef)_defaultsDomain;
-(void)_applyUpdates;
-(void)removeValueForKey:(id)arg1 ;
@end

