/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface GEMagicResult : NSObject {

	NSString* mimeType;
	NSString* description;
	NSString* uniformType;
	NSArray* uniformTypeHierarchy;

}

@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,copy,readonly) NSString * description; 
@property (nonatomic,copy,readonly) NSString * uniformType; 
@property (nonatomic,copy,readonly) NSArray * uniformTypeHierarchy; 
-(NSString *)description;
-(void)dealloc;
-(NSString *)mimeType;
-(NSString *)uniformType;
-(NSArray *)uniformTypeHierarchy;
-(id)initWithMimeType:(id)arg1 description:(id)arg2 typeHierarchy:(id)arg3 ;
@end

