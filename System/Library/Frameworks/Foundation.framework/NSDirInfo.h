/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableDictionary.h>

@class NSMutableDictionary;

@interface NSDirInfo : NSMutableDictionary {

	NSMutableDictionary* dict;

}
-(id)init;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(BOOL)arg4 hardLinkPath:(id)arg5 ;
-(id)serializeToData;
@end

