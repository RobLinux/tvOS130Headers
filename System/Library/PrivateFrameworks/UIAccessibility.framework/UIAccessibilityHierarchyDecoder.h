/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface UIAccessibilityHierarchyDecoder : NSObject {

	NSData* _hierarchyData;

}

@property (nonatomic,retain) NSData * hierarchyData;              //@synthesize hierarchyData=_hierarchyData - In the implementation block
-(void)setHierarchyData:(NSData *)arg1 ;
-(NSData *)hierarchyData;
-(id)initWithHierarchyData:(id)arg1 ;
-(id)decodeHierarchyWithContainer:(id)arg1 error:(id*)arg2 ;
@end

