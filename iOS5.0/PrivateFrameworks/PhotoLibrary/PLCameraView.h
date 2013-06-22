/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "PLCameraControllerDelegate-Protocol.h"
#import "PLCameraFlashButtonDelegate-Protocol.h"
#import "PLCameraSettingsViewDelegate-Protocol.h"
#import "PLVideoViewDelegate-Protocol.h"
#import "UIAccelerometerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AVCaptureVideoPreviewLayer, CADisplayLink, CALayer, NSData, NSDictionary, NSMutableArray, NSString, NSTimer, PLCameraController, PLCameraElapsedTimeView, PLCameraFlashButton, PLCameraGuideView, PLCameraIrisAnimationView, PLCameraOptionsButton, PLCameraOverlayTextLabelView, PLCameraPanoramaView, PLCameraPreviewView, PLCameraProgressView, PLCameraSettingsView, PLCameraToggleButton, PLCameraZoomSlider, PLCropOverlay, PLCropOverlayBottomBarButton, PLLowDiskSpaceAlertView, PLPhotoLibrary, PLPhotoTileViewController, PLPreviewOverlayView, PLSyncProgressView, PLVideoView, UIAlertView, UIImage, UIImageView, UILongPressGestureRecognizer, UIToolbar;

@interface PLCameraView : UIView <PLCameraControllerDelegate, PLVideoViewDelegate, PLCameraFlashButtonDelegate, PLCameraSettingsViewDelegate, UIGestureRecognizerDelegate, UIAccelerometerDelegate>
{
    UIToolbar *_cameraButtonBar;
    int _captureOrientation;
    int _photoSavingOptions;
    BOOL _manipulatingCrop;
    BOOL _retakePhotoAfterPreview;
    NSDictionary *_videoMetadata;
    PLCameraController *_cameraController;
    PLCameraElapsedTimeView *_timeView;
    PLCameraPreviewView *_previewView;
    PLPhotoLibrary *_library;
    UIView *_previewContainerView;
    PLPreviewOverlayView *_overlayView;
    AVCaptureVideoPreviewLayer *_previewLayer;
    CALayer *_panoramaPreviewLayer;
    PLCameraPanoramaView *_panoramaView;
    float _panoramaProgress;
    PLCropOverlayBottomBarButton *_panoramaCancelButton;
    struct CGSize _previewContentSize;
    struct CGAffineTransform _previewTransform;
    BOOL _previewOriginShouldBeZero;
    struct CGRect _unzoomedPreviewFrame;
    int _previewViewAspectMode;
    PLCameraFlashButton *_flashButton;
    int _flashModeBeforeCapture;
    int _flashModeBeforeHDR;
    int _photoFlashMode;
    int _videoFlashMode;
    PLCameraToggleButton *_toggleCameraButton;
    UIView *_previewViewSnapshotView;
    UIView *_flipView;
    PLCameraZoomSlider *_zoomSlider;
    CADisplayLink *_zoomAnimationDisplayLink;
    float _initialPinchZoomValue;
    UIView *_textOverlayView;
    BOOL _hdrIsOn;
    PLCameraProgressView *_hdrProgressView;
    PLCameraOverlayTextLabelView *_hdrTextLabel;
    PLCameraSettingsView *_settingsView;
    PLCameraOptionsButton *_settingsButton;
    BOOL _optionsAreVisible;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    PLCameraOverlayTextLabelView *_aeafLockView;
    NSTimer *_aeafLockTimer;
    BOOL _focusIsLocked;
    BOOL _focusTapIsDown;
    BOOL _shouldEndFocusOnTapUp;
    PLSyncProgressView *_rebuildProgressView;
    PLCameraGuideView *_guideView;
    NSMutableArray *_viewsToBounce;
    NSMutableArray *_bouncingViews;
    NSMutableArray *_previewWellImages;
    float _bounceAspectRatio;
    struct CGRect _bounceDestinationFrame;
    PLCameraIrisAnimationView *_irisView;
    UIImageView *_staticIrisView;
    BOOL _delayStaticClosedIrisLoading;
    UIImageView *_shadowView;
    UIView *_topStripeView;
    UIImage *_temporaryThumbnailImage;
    BOOL _irisIsClosed;
    BOOL _irisWillOpen;
    NSMutableArray *_openIrisDidFinishSelectors;
    NSMutableArray *_closeIrisDidFinishSelectors;
    int _modeToOpenIris;
    PLCropOverlay *_cropOverlay;
    PLPhotoTileViewController *_imageTile;
    PLVideoView *_videoView;
    NSDictionary *_imagePickerOptions;
    UIAlertView *_torchDisabledAlert;
    PLLowDiskSpaceAlertView *_diskSpaceAlert;
    BOOL _gridIsOn;
    BOOL _internalOnlyDisableIrisViews;
    id _delegate;
    int _enabledGestures;
    unsigned int _showsCropOverlay:1;
    unsigned int _allowsEditing:1;
    unsigned int _cropOverlayUsesTelephonyUI:1;
    unsigned int _showsCropRegion:1;
    unsigned int _needToShowDiskSpaceWarning:1;
    unsigned int _controlsAreVisible:1;
    unsigned int _shouldShowFocus:1;
    unsigned int _skipCaptureReview:1;
    unsigned int _allowsMultipleModes:1;
    unsigned int _capturePhotoWhenFocusFinished:1;
    unsigned int _isMidSuspension:1;
    unsigned int _processVideoAfterBounceAnimation:1;
    unsigned int _capturingPhoto:1;
    unsigned int _switchingBetweenCameras:1;
    unsigned int _fastIrisAnimation:1;
    unsigned int _currentCaptureIsExtendedDuration:1;
    unsigned int _flashModeDidChangeDuringCapture:1;
    unsigned int _imageWriterQueueIsFull:1;
    unsigned int _isCameraApp:1;
    unsigned int _staticIrisIsClosing:1;
    unsigned int _irisIsOpening:1;
    unsigned int _keepAlive:1;
    unsigned int _wasInterrupted:1;
    unsigned int _suppressIrisAnimations:1;
    unsigned int _shouldAnimateIrisClosed:1;
    unsigned int _volumeUpButtonIsDown:1;
    unsigned int _enableCameraAfterDidMoveToWindow:1;
    unsigned int _previewStartedBeforeViewMovedToWindow:1;
    NSString *_cropTitle;
    NSString *_cropButtonTitle;
    NSData *_lastCapturedImageData;
    unsigned int _imagePickerWantsImageData:1;
    NSDictionary *_lastCapturedMetadata;
    int _rotationStyle;
    int _windowEdgeClippingMask;
    BOOL _isDisplayedInPopover;
    NSTimer *_keepAliveTimer;
}

@property(nonatomic) int videoFlashMode; // @synthesize videoFlashMode=_videoFlashMode;
@property(nonatomic) int photoFlashModeBeforeHDR; // @synthesize photoFlashModeBeforeHDR=_flashModeBeforeHDR;
@property(nonatomic) BOOL gridIsOn; // @synthesize gridIsOn=_gridIsOn;
@property(nonatomic) BOOL HDRIsOn; // @synthesize HDRIsOn=_hdrIsOn;
@property(readonly, nonatomic) struct CGRect unzoomedPreviewFrame; // @synthesize unzoomedPreviewFrame=_unzoomedPreviewFrame;
@property(readonly, nonatomic) int windowEdgeClippingMask; // @synthesize windowEdgeClippingMask=_windowEdgeClippingMask;
@property(nonatomic, getter=isDisplayedInPopover) BOOL displayedInPopover; // @synthesize displayedInPopover=_isDisplayedInPopover;
@property(nonatomic) int rotationStyle; // @synthesize rotationStyle=_rotationStyle;
- (float)_statusBarOffset;
- (void)_applicationDidEnterBackground;
- (id)_scriptingInfo;
@property(readonly, nonatomic) BOOL isCameraReady;
- (void)shouldEnterPanorama;
- (void)_setSettingsButtonAlpha:(float)arg1 duration:(float)arg2;
- (void)toggleSettings:(id)arg1;
- (void)hideSettings;
- (void)_showSettings:(BOOL)arg1;
- (void)_removeSettingsView;
- (BOOL)optionsAreVisible;
- (void)_cameraOrientationChanged:(id)arg1;
- (int)_glyphOrientationForCameraOrientation:(int)arg1;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_overlayDidFadeOut:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)gridSettingDidChange:(BOOL)arg1;
- (void)HDRSettingDidChange:(BOOL)arg1;
- (void)_setHDRProgressHUDVisible:(BOOL)arg1;
- (BOOL)_showHDR;
- (void)toggleHDR:(BOOL)arg1;
@property(nonatomic) int photoFlashMode;
- (void)_setFlashMode:(int)arg1;
- (void)stopVideoCapture;
- (BOOL)startVideoCapture;
@property(nonatomic) int flashMode;
@property(nonatomic) int cameraMode;
@property(nonatomic) int cameraDevice;
- (void)pressShutterButton;
- (void)setOverlayView:(id)arg1;
- (id)overlayView;
- (void)setPreviewViewTransform:(struct CGAffineTransform)arg1;
- (BOOL)controlsAreVisible;
- (void)setControlsAreVisible:(BOOL)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2;
- (void)videoViewDidPausePlayback:(id)arg1;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewIsReadyToBeginPlayback:(id)arg1;
- (BOOL)videoViewCanBeginPlayback:(id)arg1;
- (float)videoViewScrubberYOrigin:(id)arg1 forOrientation:(int)arg2;
- (void)_removeSnapshotView;
- (void)_flipAnimationDidStop;
- (void)_beginFlipAnimation;
- (BOOL)_cameraButtonOrientationIsLandscape;
- (void)prepareForDefaultImageSnapshot;
- (void)_cancelBounceAnimationsAndUpdatePreviewWell;
- (void)animateIrisForSuspension;
- (void)_closeIrisAnimationForSuspensionFinished;
- (void)closeIrisAnimationFinished;
- (void)openIrisAnimationFinished;
- (void)openIrisWithDidFinishSelector:(SEL)arg1 withDuration:(float)arg2;
- (void)openIrisWithDidFinishSelector:(SEL)arg1;
- (void)_openIrisAnimationFinished;
- (void)closeIrisWithDidFinishSelector:(SEL)arg1 withDuration:(float)arg2;
- (struct CGPoint)_irisCenter;
- (void)_closeIrisAnimationFinished;
- (BOOL)irisIsClosed;
- (void)hideStaticClosedIris;
- (void)showStaticClosedIris;
- (void)primeStaticClosedIris;
- (void)_handleOverlayViewLongPress:(id)arg1;
- (void)_handleOverlayViewPinch:(id)arg1;
- (void)_handleOverlayViewDoubleTap:(id)arg1;
- (void)_handleOverlayViewSingleTap:(id)arg1;
- (BOOL)_pointIsWithinOverlayView:(struct CGPoint)arg1;
- (BOOL)_pointIsWithinOverlayView:(struct CGPoint)arg1 hitView:(id *)arg2;
- (void)_finishCommonTapGesture;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)togglePreviewViewAspectMode;
@property(nonatomic) int previewViewAspectMode; // @synthesize previewViewAspectMode=_previewViewAspectMode;
- (void)_setPreviewViewAspectMode:(int)arg1 force:(BOOL)arg2;
- (BOOL)_isPreviewViewAspectModeAllowed:(int)arg1;
- (void)_clearAEAFLockTimer;
- (void)aeafLockTimerDidFire;
- (BOOL)_previewView:(id)arg1 shouldFocusAtPoint:(struct CGPoint)arg2;
- (void)cameraControllerFocusDidEnd:(id)arg1;
- (void)cameraControllerFocusDidStart:(id)arg1;
- (void)cameraControllerWillStartAutofocus:(id)arg1;
- (BOOL)isFocusAllowed;
- (void)_clearAEAFLock;
- (void)_setShouldShowFocus:(BOOL)arg1;
- (void)lockFocus;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (struct CGRect)convertToViewCoordinatesFromISPCoordinates:(struct CGRect)arg1;
- (struct CGPoint)convertToPointOfInterestFromViewCoordinates:(struct CGPoint)arg1 pointIsInsideContent:(char *)arg2;
- (BOOL)photoTileViewControllerIsDisplayingLandscape:(id)arg1;
- (void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2;
- (void)cropOverlayPause:(id)arg1;
- (void)cropOverlayPlay:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)_resetImageTile;
- (void)_removeVideoCaptureFileAtPath:(id)arg1;
- (void)disableCamera;
- (void)enableCamera;
- (id)_cropOverlay;
- (id)_irisView;
- (void)_zoomSliderValueDidEndChanging:(id)arg1 forEvent:(id)arg2;
- (void)_zoomSliderValueDidChange:(id)arg1 forEvent:(id)arg2;
- (void)_zoomSliderValueIsChanging:(id)arg1 forEvent:(id)arg2;
- (void)_zoomSliderValueDidBeginChanging:(id)arg1 forEvent:(id)arg2;
- (void)_pinchZoomWithScale:(float)arg1;
- (void)_resetZoom;
- (void)_endZooming;
- (void)_beginZooming;
- (void)_addZoomAnimationDisplayLinkWithSelector:(SEL)arg1;
- (void)_incrementZoomSlider;
- (void)_decrementZoomSlider;
- (void)_animateZoomSliderToValue:(float)arg1;
- (void)_clearZoomAnimationDisplayLink;
- (void)_setZoomFactor:(float)arg1;
- (void)showZoomSlider;
- (void)_loadZoomSliderResources;
- (void)_cancelZoomSliderTimer;
- (void)_startZoomSliderTimer;
- (BOOL)zoomSliderShouldBeVisible;
- (BOOL)_zoomIsAllowed;
- (void)_updateModeSwitchVisibility;
- (void)_updatePanoramaButtonBar;
- (void)_setOverlayControlsVisible:(BOOL)arg1;
- (void)_setOverlayControlsEnabled:(BOOL)arg1;
- (void)_updateOverlayControls;
- (void)_toggleCameraButtonWasPressed:(id)arg1;
- (void)_reallyToggleCamera;
- (void)flashButtonDidCollapse:(id)arg1;
- (void)flashButtonWillExpand:(id)arg1;
- (void)flashButtonWasPressed:(id)arg1;
- (void)flashButtonModeDidChange:(id)arg1;
- (void)_updateIsNonDefaultFlashMode:(int)arg1;
- (void)panoramaCancelButtonClicked:(id)arg1;
- (void)cameraController:(id)arg1 capturedPanorama:(id)arg2 error:(id)arg3;
- (void)cameraControllerPanoramaDidStopProcessing:(id)arg1;
- (void)cameraControllerWillStopPanoramaCapture:(id)arg1;
- (void)cameraController:(id)arg1 didUpdatePanoramaPreview:(id)arg2;
- (void)stopPanorama;
- (void)startPanorama;
- (void)_performPanoramaCapture;
- (void)exitPanoramaModeAndShowIris:(BOOL)arg1;
- (void)enterPanoramaMode;
- (void)_simpleRemoteActionDidOccur:(id)arg1;
- (void)_processCapturedVideo;
- (void)_clearUnsavedVideoCaptureState;
- (void)_commonPostVideoCaptureCleanup;
- (void)cameraControllerVideoCaptureDidStop:(id)arg1 withReason:(int)arg2 userInfo:(id)arg3;
- (void)_cleanupPostVideoCaptureState;
- (void)cameraControllerDidStopVideoCapture:(id)arg1;
- (void)_removeVideoCaptureControls;
- (void)cameraControllerVideoCaptureDidStart:(id)arg1;
- (void)cameraControllerModeDidChange:(id)arg1;
- (void)cameraControllerModeWillChange:(id)arg1;
- (void)_videoSwitchValueDidChange:(id)arg1;
- (void)_performVideoCapture;
- (BOOL)cameraShutterClicked:(id)arg1;
- (void)didPlayVideoRecordingSound;
- (void)timeLapseTimerFired;
- (void)_shutterButtonClicked;
- (int)_getCaptureOrientation;
- (void)switchModesCloseIrisAnimationFinished;
- (void)takePictureCloseIrisAnimationFinished;
- (void)takePictureOpenIrisAnimationFinished;
- (void)previewStartedOpenIrisAnimationFinished;
- (void)_inCallStatusChanged:(id)arg1;
- (id)imageTile;
- (void)setAllowsMultipleCameraModes:(BOOL)arg1;
- (id)_shutterButton;
- (id)_modeSwitch;
- (struct CGRect)_bottomBarFrame;
- (id)_bottomBar;
- (id)buttonBar;
- (void)setCameraButtonBar:(id)arg1;
- (void)setImagePickerWantsImageData:(BOOL)arg1;
- (void)setCropTitle:(id)arg1 buttonTitle:(id)arg2;
- (void)setShowsCropRegion:(BOOL)arg1;
- (void)setCropOverlayUsesTelephonyUI:(BOOL)arg1;
- (void)setShowsCropOverlay:(BOOL)arg1;
- (void)setAllowsImageEditing:(BOOL)arg1;
- (void)setImagePickerOptions:(id)arg1;
- (void)_updateImageEditability;
- (int)photoSavingOptions;
- (void)setPhotoSavingOptions:(int)arg1;
- (void)setEnabledGestures:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)_registerForSystemSound;
- (void)_windowWillAnimateRotation:(id)arg1;
- (void)_windowWillAnimateRotationToOrientation:(int)arg1;
- (void)_setShadowViewVisible:(BOOL)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_bounceAnimationFinished:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_postCaptureCleanup;
- (void)_updatePreviewWellImage:(id)arg1;
- (BOOL)hasInFlightCaptures;
- (void)_animateFinalBounce:(id)arg1;
- (void)animateCameraPreviewDown;
- (void)setupAnimatePanoramaPreviewDown:(id)arg1;
- (void)setupAnimatePreviewDown:(id)arg1 flipImage:(BOOL)arg2;
- (void)_setupAnimatePreviewDown:(id)arg1 flipImage:(BOOL)arg2 panoImage:(BOOL)arg3 snapshotFrame:(struct CGRect)arg4;
- (float)previewImageRotationAngle;
- (void)_addViewToBounce:(id)arg1;
- (void)_preparePreviewWellImage:(id)arg1 isVideo:(BOOL)arg2;
- (void)cameraController:(id)arg1 capturedPhoto:(id)arg2 error:(id)arg3;
- (void)_openIrisAndAnimatePreviewImage:(id)arg1;
- (void)cameraControllerDidTakePhoto:(id)arg1;
- (void)cameraControllerWillTakePhoto:(id)arg1;
- (void)setWantsVolumeButtonEvents:(BOOL)arg1;
- (void)_handleVolumeUpButtonUp;
- (void)_handleVolumeUpButtonDown;
- (void)_handleVolumeUpEvents:(unsigned int)arg1;
- (void)_setKeepAliveToStartVideoCapture;
- (void)_setKeepAlive:(BOOL)arg1;
- (void)_setKeepAlive:(BOOL)arg1 forVideoCapture:(BOOL)arg2;
- (void)_forceKeepAliveTimeout;
- (void)_teardownKeepAliveTimer;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)_showTorchDisabledAlert:(id)arg1;
- (void)cameraControllerTorchAvailabilityChanged:(id)arg1;
- (void)setIsRebuildingLibrary:(BOOL)arg1;
- (struct NSObject *)_cameraAlbum;
- (void)_previewVideoAtPath:(id)arg1;
- (BOOL)_canEditVideo;
- (BOOL)_canTakePhoto;
- (void)cameraController:(id)arg1 didChangeCaptureAbility:(BOOL)arg2;
- (void)_resetDiskSpaceWarning;
- (void)_showDiskSpaceWarning;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidResignActive:(id)arg1;
- (void)_checkDiskSpaceAfterCapture;
- (void)_albumDidChange:(id)arg1;
- (void)cameraControllerServerDied:(id)arg1;
- (void)cameraControllerSessionInterruptionEnded:(id)arg1;
- (void)cameraControllerSessionWasInterrupted:(id)arg1;
- (void)cameraControllerSessionDidStop:(id)arg1;
- (void)cameraControllerWillStopSession:(id)arg1;
- (void)cameraControllerSessionDidStart:(id)arg1;
- (void)cameraControllerPreviewDidStart:(id)arg1;
- (void)cameraController:(id)arg1 cleanApertureDidChange:(struct CGRect)arg2;
- (void)_updatePreviewContentSizeWithCleanAperture:(struct CGRect)arg1;
- (void)resumePreview;
- (void)pausePreview;
- (void)stopPreviewAnimated:(BOOL)arg1;
- (void)stopPreview;
- (void)startPreview;
- (void)layoutSubviews;
- (void)verifyViewOrdering;
- (void)_setupPreviewLayer;
- (id)previewLayer;
- (void)_setupPreviewView;
- (void)_createPreviewViewAndContainerView;
- (struct CGRect)_visibleDisplayRectForPreview;
- (struct CGSize)_displaySizeForPreview;
- (void)cameraControllerWillStartPreview:(id)arg1;
- (void)_updateFlashModeIfNecessary;
- (void)setCameraButtonsEnabled:(BOOL)arg1;
- (void)setManipulatingCrop:(BOOL)arg1;
- (void)_disableBottomBarForContinuousCapture;
- (void)_setBottomBarEnabled:(BOOL)arg1;
- (void)_updateButtonBarEnabledness;
- (void)_applicationSuspended:(id)arg1;
- (void)_beginSuspendAnimation:(id)arg1;
- (void)viewWillBeRemoved;
- (void)viewDidAppear;
- (void)viewWillBeDisplayed;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 isCameraApp:(BOOL)arg2;

@end
