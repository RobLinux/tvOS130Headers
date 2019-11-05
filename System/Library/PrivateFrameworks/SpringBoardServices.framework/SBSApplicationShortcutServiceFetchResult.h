/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <SpringBoardServices/BSXPCCoding.h>
#import <SpringBoardServices/NSCopying.h>

@class NSArray, NSString;

@interface SBSApplicationShortcutServiceFetchResult : NSObject <BSXPCCoding, NSCopying> {

	NSArray* _staticApplicationShortcutItems;
	NSArray* _dynamicApplicationShortcutItems;
	NSArray* _composedApplicationShortcutItems;

}

@property (nonatomic,readonly) NSArray * staticApplicationShortcutItems;                //@synthesize staticApplicationShortcutItems=_staticApplicationShortcutItems - In the implementation block
@property (nonatomic,readonly) NSArray * dynamicApplicationShortcutItems;               //@synthesize dynamicApplicationShortcutItems=_dynamicApplicationShortcutItems - In the implementation block
@property (nonatomic,readonly) NSArray * composedApplicationShortcutItems;              //@synthesize composedApplicationShortcutItems=_composedApplicationShortcutItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithStaticApplicationShortcutItems:(id)arg1 dynamicApplicationShortcutItems:(id)arg2 composedApplicationShortcutItems:(id)arg3 ;
-(NSArray *)staticApplicationShortcutItems;
-(NSArray *)dynamicApplicationShortcutItems;
-(NSArray *)composedApplicationShortcutItems;
@end

