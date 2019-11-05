/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface CLSettingsDictionary : NSObject {

	id _internal;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize internal=_internal - In the implementation block
+(id)settingsWithDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(BOOL)boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(BOOL)hasValueForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 defaultValue:(double)arg2 ;
-(int)intForKey:(id)arg1 defaultValue:(int)arg2 ;
-(float)floatForKey:(id)arg1 defaultValue:(float)arg2 ;
-(id)dictionaryForKey:(id)arg1 defaultValue:(id)arg2 ;
-(short)shortForKey:(id)arg1 defaultValue:(short)arg2 ;
-(long long)longForKey:(id)arg1 defaultValue:(long long)arg2 ;
-(id)stringForKey:(id)arg1 defaultValue:(id)arg2 ;
@end

