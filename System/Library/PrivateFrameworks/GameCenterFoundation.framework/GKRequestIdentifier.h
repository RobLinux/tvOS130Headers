/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
#import <GameCenterFoundation/NSCopying.h>

@class NSArray;

@interface GKRequestIdentifier : NSObject <NSCopying> {

	unsigned long long _savedHash;
	SEL _selector;
	NSArray* _arguments;

}
+(id)requestIdentifierForInvocation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)initWithInvocation:(id)arg1 ;
-(id)_argumentsForInvocation:(id)arg1 ;
@end

