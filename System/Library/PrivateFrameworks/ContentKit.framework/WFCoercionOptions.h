/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/NSCopying.h>

@class NSDictionary;

@interface WFCoercionOptions : NSObject <NSCopying> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(id)new;
+(id)optionsWithDictionary:(id)arg1 ;
+(void)registerDefaultDisallowedCoercionPath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(id)optionsByAddingContentsOfOptions:(id)arg1 ;
-(BOOL)coercionPathIsDisallowed:(id)arg1 ;
-(id)preferredTypes;
-(id)itemClassPrioritizationType;
-(void)makeContactAccessResourceAvailableIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)makeRemoteServerAccessResourceAvailableIfNeededWithURLs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

