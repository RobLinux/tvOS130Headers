/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMLayoutItem.h>

@class NSMutableArray;

@interface AXMLayoutRegion : AXMLayoutItem {

	NSMutableArray* _lines;

}
+(id)region:(id)arg1 ;
-(CGRect)frame;
-(id)lines;
-(void)addLine:(id)arg1 ;
-(id)firstLine;
-(CGRect)normalizedFrame;
@end

