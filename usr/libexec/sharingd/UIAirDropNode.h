/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:54 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/NSSecureCoding.h>

@class NSNumber, NSUUID;

@interface UIAirDropNode : NSObject <NSSecureCoding> {

	BOOL _wantsTwoLines;
	BOOL _hasSquareImage;
	BOOL _disabled;
	BOOL _restricted;
	NSNumber* _imageSlot;
	NSNumber* _mainLabelSlot;
	NSNumber* _topLabelSlot;
	NSNumber* _bottomLabelSlot;
	NSNumber* _transportSlot;
	NSUUID* _nodeIdentifier;

}

@property (retain) NSNumber * imageSlot;                                       //@synthesize imageSlot=_imageSlot - In the implementation block
@property (retain) NSNumber * transportSlot;                                   //@synthesize transportSlot=_transportSlot - In the implementation block
@property (retain) NSNumber * mainLabelSlot;                                   //@synthesize mainLabelSlot=_mainLabelSlot - In the implementation block
@property (retain) NSNumber * topLabelSlot;                                    //@synthesize topLabelSlot=_topLabelSlot - In the implementation block
@property (retain) NSNumber * bottomLabelSlot;                                 //@synthesize bottomLabelSlot=_bottomLabelSlot - In the implementation block
@property (retain) NSUUID * nodeIdentifier;                                    //@synthesize nodeIdentifier=_nodeIdentifier - In the implementation block
@property (assign,nonatomic) BOOL wantsTwoLines;                               //@synthesize wantsTwoLines=_wantsTwoLines - In the implementation block
@property (assign,nonatomic) BOOL hasSquareImage;                              //@synthesize hasSquareImage=_hasSquareImage - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                  //@synthesize disabled=_disabled - In the implementation block
@property (assign,getter=isRestricted,nonatomic) BOOL restricted;              //@synthesize restricted=_restricted - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nodeWithImageSlot:(id)arg1 labelSlot:(id)arg2 transportSlot:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRestricted;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)isDisabled;
-(void)setRestricted:(BOOL)arg1 ;
-(void)setNodeIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)nodeIdentifier;
-(NSNumber *)imageSlot;
-(void)setImageSlot:(NSNumber *)arg1 ;
-(BOOL)hasSquareImage;
-(NSNumber *)mainLabelSlot;
-(NSNumber *)transportSlot;
-(NSNumber *)bottomLabelSlot;
-(BOOL)wantsTwoLines;
-(void)setTopLabelSlot:(NSNumber *)arg1 ;
-(void)setMainLabelSlot:(NSNumber *)arg1 ;
-(void)setBottomLabelSlot:(NSNumber *)arg1 ;
-(void)setTransportSlot:(NSNumber *)arg1 ;
-(NSNumber *)topLabelSlot;
-(void)setWantsTwoLines:(BOOL)arg1 ;
-(void)setHasSquareImage:(BOOL)arg1 ;
@end

