/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:28 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSApplicationPlaceholder.h>

@class NSString, NSNumber;

@interface PBApplicationPlaceholder : FBSApplicationPlaceholder {

	NSString* _iconFile;
	NSNumber* _installFailureReason;
	NSString* _applicationType;

}

@property (nonatomic,readonly) NSString * iconFile;                          //@synthesize iconFile=_iconFile - In the implementation block
@property (nonatomic,readonly) NSNumber * installFailureReason;              //@synthesize installFailureReason=_installFailureReason - In the implementation block
@property (nonatomic,readonly) NSString * applicationType;                   //@synthesize applicationType=_applicationType - In the implementation block
+(id)_infoDictionaryKeys;
-(NSString *)applicationType;
-(void)_reloadFromProxy:(id)arg1 ;
-(NSNumber *)installFailureReason;
-(NSString *)iconFile;
@end

