/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BBSectionIdentity.h>
#import <BulletinBoard/NSSecureCoding.h>

@class BBSectionInfo, NSString;

@interface BBParentSectionDataProviderFactory : NSObject <BBSectionIdentity, NSSecureCoding> {

	BBSectionInfo* _sectionInfo;
	NSString* _universalSectionIdentifier;

}

@property (nonatomic,copy) BBSectionInfo * sectionInfo;                        //@synthesize sectionInfo=_sectionInfo - In the implementation block
@property (nonatomic,copy) NSString * universalSectionIdentifier;              //@synthesize universalSectionIdentifier=_universalSectionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)factoryFromSectionInfo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)sectionDisplayName;
-(id)sectionIdentifier;
-(void)setSectionInfo:(BBSectionInfo *)arg1 ;
-(void)setUniversalSectionIdentifier:(NSString *)arg1 ;
-(NSString *)universalSectionIdentifier;
-(BBSectionInfo *)sectionInfo;
-(id)sectionIcon;
-(id)initWithSectionInfo:(id)arg1 ;
-(id)dataProviders;
@end

