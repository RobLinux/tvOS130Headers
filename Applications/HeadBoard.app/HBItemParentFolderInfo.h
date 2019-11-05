/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:09 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoard/NSSecureCoding.h>

@class NSString, NSNumber;

@interface HBItemParentFolderInfo : NSObject <NSSecureCoding> {

	NSString* _parentFolderIdentifier;
	NSNumber* _parentFolderLevel;

}

@property (nonatomic,copy) NSString * parentFolderIdentifier;              //@synthesize parentFolderIdentifier=_parentFolderIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * parentFolderLevel;                 //@synthesize parentFolderLevel=_parentFolderLevel - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)parentFolderIdentifier;
-(NSNumber *)parentFolderLevel;
-(void)setParentFolderIdentifier:(NSString *)arg1 ;
-(void)setParentFolderLevel:(NSNumber *)arg1 ;
@end

