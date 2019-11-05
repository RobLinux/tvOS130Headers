/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCMMInvitationParticipant.h>
#import <PhotosUICore/NSCopying.h>

@class NSString;

@interface PXCMMSharedAlbumParticipant : NSObject <PXCMMInvitationParticipant, NSCopying> {

	NSString* _emailAddressString;
	NSString* _phoneNumberString;
	NSString* _localizedName;
	NSString* _firstName;

}

@property (nonatomic,readonly) NSString * emailAddressString;              //@synthesize emailAddressString=_emailAddressString - In the implementation block
@property (nonatomic,readonly) NSString * phoneNumberString;               //@synthesize phoneNumberString=_phoneNumberString - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                   //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                       //@synthesize firstName=_firstName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSString *)localizedName;
-(NSString *)firstName;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)phoneNumberString;
-(NSString *)emailAddressString;
@end
