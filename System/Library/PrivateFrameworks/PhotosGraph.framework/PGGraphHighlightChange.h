/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphChange.h>

@class NSString, PGGraphHighlightNode;

@interface PGGraphHighlightChange : PGGraphChange {

	NSString* _highlightLocalIdentifier;
	PGGraphHighlightNode* _highlightNode;
	unsigned long long _updateTypes;

}

@property (nonatomic,readonly) NSString * highlightLocalIdentifier;              //@synthesize highlightLocalIdentifier=_highlightLocalIdentifier - In the implementation block
@property (nonatomic,retain) PGGraphHighlightNode * highlightNode;               //@synthesize highlightNode=_highlightNode - In the implementation block
@property (nonatomic,readonly) unsigned long long updateTypes;                   //@synthesize updateTypes=_updateTypes - In the implementation block
-(id)description;
-(unsigned long long)type;
-(NSString *)highlightLocalIdentifier;
-(PGGraphHighlightNode *)highlightNode;
-(void)mergeChange:(id)arg1 ;
-(unsigned long long)updateTypes;
-(id)initWithHighlightLocalIdentifier:(id)arg1 updateTypes:(unsigned long long)arg2 ;
-(void)setHighlightNode:(PGGraphHighlightNode *)arg1 ;
@end
