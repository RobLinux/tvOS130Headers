/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreServices/CoreServices-Structs.h>
@class NSSet, NSDictionary;

@interface _LSPlistHint : NSObject {

	NSSet* _keys;
	NSDictionary* _cachedValues;
	os_unfair_lock_s _valueLock;
	BOOL _cachedValuesAreComplete;
	BOOL _keysAreCompacted;

}

@property (nonatomic,copy,readonly) NSSet * keys;                  //@synthesize keys=_keys - In the implementation block
@property (retain) NSDictionary * completeDictionary; 
-(id)debugDescription;
-(NSSet *)keys;
-(BOOL)hasValueForKey:(id)arg1 ;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(id)cachedValueForKey:(id)arg1 ;
-(id)initWithKeys:(id)arg1 compacted:(BOOL)arg2 ;
-(NSDictionary *)completeDictionary;
-(void)setCompleteDictionary:(NSDictionary *)arg1 ;
@end

