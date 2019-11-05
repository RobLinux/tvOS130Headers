/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/NSSecureCoding.h>

@class NSMutableDictionary;

@interface SCNSceneDatabase : NSObject <NSSecureCoding> {

	NSMutableDictionary* _db;

}
+(BOOL)supportsSecureCoding;
+(id)lookUpKeyForObjectNamed:(id)arg1 class:(Class)arg2 ;
+(id)sceneDatabase;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addInstance:(id)arg1 withName:(id)arg2 class:(Class)arg3 ;
@end

