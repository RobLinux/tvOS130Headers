/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <ContactsUI/CNAvatarViewDelegate.h>

@protocol CNPresenterDelegate, CNContactPhotoViewDelegate;
@class NSArray, CNAvatarView, CNMutableContact, PRLikeness, UIButton, UIImageView, UILongPressGestureRecognizer, NSString;

@interface CNContactPhotoView : UIControl <UINavigationControllerDelegate, UIImagePickerControllerDelegate, CNAvatarViewDelegate> {

	BOOL _editing;
	BOOL _modified;
	BOOL _isAnimatingBounce;
	NSArray* _contacts;
	CNAvatarView* _avatarView;
	id<CNPresenterDelegate> _delegate;
	id<CNContactPhotoViewDelegate> _photoViewDelegate;
	CNMutableContact* _pendingEditContact;
	PRLikeness* _originalLikeness;
	PRLikeness* _currentLikeness;
	UIButton* _addPhotoButton;
	UIButton* _editPhotoButton;
	UIImageView* _attributionImageView;
	NSArray* _variableConstraints;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;

}

@property (nonatomic,readonly) CNMutableContact * mutableContact; 
@property (nonatomic,retain) CNMutableContact * pendingEditContact;                                  //@synthesize pendingEditContact=_pendingEditContact - In the implementation block
@property (nonatomic,retain) PRLikeness * originalLikeness;                                          //@synthesize originalLikeness=_originalLikeness - In the implementation block
@property (nonatomic,retain) PRLikeness * currentLikeness;                                           //@synthesize currentLikeness=_currentLikeness - In the implementation block
@property (nonatomic,retain) CNAvatarView * avatarView;                                              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIButton * addPhotoButton;                                              //@synthesize addPhotoButton=_addPhotoButton - In the implementation block
@property (nonatomic,retain) UIButton * editPhotoButton;                                             //@synthesize editPhotoButton=_editPhotoButton - In the implementation block
@property (nonatomic,retain) UIImageView * attributionImageView;                                     //@synthesize attributionImageView=_attributionImageView - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingBounce;                                                 //@synthesize isAnimatingBounce=_isAnimatingBounce - In the implementation block
@property (assign,nonatomic) BOOL modified;                                                          //@synthesize modified=_modified - In the implementation block
@property (nonatomic,retain) NSArray * variableConstraints;                                          //@synthesize variableConstraints=_variableConstraints - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                                     //@synthesize contacts=_contacts - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                          //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic,__weak) id<CNPresenterDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactPhotoViewDelegate> photoViewDelegate;                //@synthesize photoViewDelegate=_photoViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
+(id)supportedPasteboardTypes;
-(void)dealloc;
-(id<CNPresenterDelegate>)delegate;
-(void)setDelegate:(id<CNPresenterDelegate>)arg1 ;
-(BOOL)isEditing;
-(void)setModified:(BOOL)arg1 ;
-(id)contact;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)updateConstraints;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(void)avatarView:(id)arg1 willShowActions:(id)arg2 ;
-(BOOL)modified;
-(CNMutableContact *)mutableContact;
-(NSArray *)variableConstraints;
-(id)initWithFrame:(CGRect)arg1 monogrammerStyle:(long long)arg2 ;
-(void)setPhotoViewDelegate:(id<CNContactPhotoViewDelegate>)arg1 ;
-(void)updatePhoto;
-(void)resetPhoto;
-(void)saveEdits;
-(void)updateFontSizes;
-(void)menuWillHide:(id)arg1 ;
-(void)disablePhotoTapGesture;
-(void)_presentPhotoEditingSheet;
-(void)avatarTapped:(id)arg1 ;
-(void)longPressGesture:(id)arg1 ;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)setVariableConstraints:(NSArray *)arg1 ;
-(id)currentImageDataAndCropRect:(CGRect*)arg1 ;
-(CNMutableContact *)pendingEditContact;
-(CNAvatarView *)avatarView;
-(void)_zoomContactPhoto;
-(void)setHighlightedFrame:(BOOL)arg1 ;
-(id)currentImageData;
-(void)setPendingEditContact:(CNMutableContact *)arg1 ;
-(void)setCurrentLikeness:(PRLikeness *)arg1 ;
-(void)setOriginalLikeness:(PRLikeness *)arg1 ;
-(BOOL)_isUsingCuratedPhoto;
-(UIButton *)addPhotoButton;
-(UIButton *)editPhotoButton;
-(void)updateAttributionBadge;
-(id<CNContactPhotoViewDelegate>)photoViewDelegate;
-(UIImageView *)attributionImageView;
-(void)setAttributionImageView:(UIImageView *)arg1 ;
-(id)_createImagePicker;
-(id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(CGRect)arg2 ;
-(void)_bounceSmallPhoto;
-(BOOL)isAnimatingBounce;
-(void)setIsAnimatingBounce:(BOOL)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(BOOL)isMeContact;
-(id)_localizedStringForProfileAction:(id)arg1 type:(id)arg2 ;
-(id)previewPath;
-(PRLikeness *)originalLikeness;
-(PRLikeness *)currentLikeness;
-(void)setAddPhotoButton:(UIButton *)arg1 ;
-(void)setEditPhotoButton:(UIButton *)arg1 ;
@end

