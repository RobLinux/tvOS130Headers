/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSSet, NSDictionary;

@interface EDAMLazyMap : FATObject {

	NSSet* _keysOnly;
	NSDictionary* _fullMap;

}

@property (nonatomic,retain) NSSet * keysOnly;                    //@synthesize keysOnly=_keysOnly - In the implementation block
@property (nonatomic,retain) NSDictionary * fullMap;              //@synthesize fullMap=_fullMap - In the implementation block
+(id)structName;
+(id)structFields;
-(NSSet *)keysOnly;
-(void)setKeysOnly:(NSSet *)arg1 ;
-(NSDictionary *)fullMap;
-(void)setFullMap:(NSDictionary *)arg1 ;
@end

