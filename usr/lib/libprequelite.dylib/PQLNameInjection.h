/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:16:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/lib/libprequelite.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libprequelite.dylib/libprequelite.dylib-Structs.h>
#import <libprequelite.dylib/PQLNameInjectionBase.h>
#import <libprequelite.dylib/PQLInjecting.h>

@class NSData, NSString;

@interface PQLNameInjection : PQLNameInjectionBase <PQLInjecting>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * sql; 
+(id)nameWithString:(id)arg1 ;
+(id)_appendString:(id)arg1 toInjection:(id)arg2 ;
+(id)nameWithPrefix:(id)arg1 suffix:(id)arg2 ;
-(NSString *)description;
-(id)initWithString:(id)arg1 ;
-(int)bindWithStatement:(sqlite3_stmtRef)arg1 startingAtIndex:(int)arg2 ;
-(id)nameByAddingSuffix:(id)arg1 ;
@end

