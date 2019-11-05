/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSBoundKeyPath : NSObject {

	id _rootObject;
	NSString* _keyPath;

}

@property (assign) id rootObject; 
@property (readonly) NSString * keyPath; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)newKeyPathWithRootObject:(id)arg1 keyPathString:(id)arg2 ;
+(id)keyPathWithRootObject:(id)arg1 path:(const char*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
-(id)value;
-(NSString *)keyPath;
-(void)setValue:(id)arg1 ;
-(void)setRootObject:(id)arg1 ;
-(id)rootObject;
-(BOOL)validateValue:(inout id*)arg1 error:(out id*)arg2 ;
-(id)mutableArrayValue;
-(id)mutableOrderedSetValue;
-(id)mutableSetValue;
@end

